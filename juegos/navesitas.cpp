#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <list>

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

using namespace std;
void gotoxy(int x, int y);
void OcultarCursor();
void pintar_limites();
void color(int color);

class NAVE {
	int x, y;
	int corazones;
	int vidas;
	public:
		NAVE(int _x, int _y, int _corazones, int _vidas): x(_x), y(_y), corazones(_corazones), vidas(_vidas){}
		int X() { return x; }
		int Y() { return y; }
		int VID() { return vidas; }
		void COR() { corazones--; }
		void pintar();
		void borrar();
		void mover();
		void pintar_corazones();
		void morir();
};

void NAVE::pintar() {
	color(7);
	gotoxy(x,y); printf("  %c" , 30);
	gotoxy(x,y+1); printf(" %c%c%c", 40, 207, 41);
	gotoxy(x,y+2); printf("%c%c %c%c", 30, 190, 190, 30);
}

void NAVE::borrar() {
	gotoxy(x,y); printf("        ");
	gotoxy(x,y+1); printf("        ");
	gotoxy(x,y+2); printf("        ");
}

void NAVE::mover() {
	if(kbhit()) {
			char tecla = getch();
			borrar();
			
			// Flechitas del teclado
			if(tecla == IZQUIERDA && x>3) x--;
			if(tecla == DERECHA && x+6 < 77) x++;
			if(tecla == ARRIBA && y > 4) y--;
			if(tecla == ABAJO && y+3 < 33) y++;
			if(tecla == 'a' && x>3) x--;
			if(tecla == 'd' && x+6 < 77) x++;
			if(tecla == 'w' && y > 4) y--;
			if(tecla == 's' && y+3 < 33) y++;
			
			pintar();
			pintar_corazones();
	}
}

void pintar_limites() {
	color(3);
	for(int i = 2; i<78; i++) {
		gotoxy(i,3); printf("%c",205);
		gotoxy(i,33); printf("%c", 205);
	}
	
	for(int i = 4; i < 33; i++) {
		gotoxy(2,i); printf("%c", 186);
		gotoxy(77,i); printf("%c", 186);
	}
	
	gotoxy(2,3); printf("%c", 201);
	gotoxy(2,33); printf("%c", 200);
	gotoxy(77,3); printf("%c", 187);
	gotoxy(77,33); printf("%c", 188);
}

void NAVE::pintar_corazones() {
	color(10);
	gotoxy(50,2); printf("VIDAS %d", vidas);
	gotoxy(64, 2); printf("Salud");
	gotoxy(70, 2); printf("      ");
	
	for(int i = 0; i < corazones; i++) {
		color(4);
		gotoxy(70+i, 2); printf("%c", 3);
	}
}

void NAVE::morir() {
	if(corazones == 0) {
		color(4);
		borrar();
		gotoxy(x, y);   printf("   **   ");
		gotoxy(x, y+1); printf("  ****  ");
		gotoxy(x, y+2); printf("   **   ");
		Sleep(200);
		
		borrar();
		gotoxy(x, y);   printf(" * ** *");
		gotoxy(x, y+1); printf("  **** ");
		gotoxy(x, y+2); printf(" * ** *");
		Sleep(300);
		
		borrar();
		gotoxy(x, y);   printf("   **   ");
		gotoxy(x, y+1); printf("  ****  ");
		gotoxy(x, y+2); printf("   **   ");
		Sleep(300);
		
		borrar();
		gotoxy(x, y);   printf(" * ** *");
		gotoxy(x, y+1); printf("  **** ");
		gotoxy(x, y+2); printf(" * ** *");
		Sleep(300);
		borrar();
		
		vidas--;
		corazones = 3;
		pintar_corazones();
		pintar();
	}
}

class AST{
	int x, y;
	public:
		AST(int _x, int _y): x(_x), y(_y) {}
		void pintar();
		void mover();
		void choque(class NAVE &N);
		int X() { return x; }
		int Y() { return y; }
};

void AST::pintar() {
	color(8);
	gotoxy (x, y); printf("%c", 184);
}

void AST::mover() {
	gotoxy(x,y); printf(" ");
	y++;
	
	if(y > 32) {
		x = rand()%71 + 4;
		y = 4;
	}
	
	pintar();
}

void AST::choque(class NAVE &N) {
	if(x >= N.X() && x < N.X()+6 && y >= N.Y() && y <= N.Y()+2) {
		N.COR();
		N.borrar();
		N.pintar();
		N.pintar_corazones();
	}
}

class BALA {
	int x, y;
	public:
		BALA(int _x, int _y): x(_x), y(_y) {}
		int X() { return x; }
		int Y() { return y; }
		void mover();
		bool fuera();
};

bool BALA::fuera() {
	if(y == 4) return true;
	return false;
}

void BALA::mover() {
	gotoxy(x, y); printf(" ");
	y--;
	gotoxy(x, y); printf("*");
}

int main() {
	OcultarCursor();
	pintar_limites();
	NAVE N(37, 30, 3, 6);
	N.pintar();
	N.pintar_corazones();
	
	list<AST*> A;
	list<AST*>::iterator itA;
	for(int i=0; i<4; i++) {
		A.push_back(new AST(rand()%75 + 3, rand()%5 + 4));
	}
	
	list<BALA*> B;
	list<BALA*>::iterator it;
	
	bool game_over = false;
	int puntos = 0;
	while(!game_over) {
		gotoxy(4, 2);
		color(14);
		printf("Puntos %d", puntos);
		if(kbhit()) {
			char tecla = getch();
			if(tecla == 'e') 
			B.push_back(new BALA(N.X() + 2, N.Y() - 1));
		}
		
		for(it = B.begin(); it != B.end(); it++) {
			(*it)->mover();
			if((*it)->fuera()) {
				gotoxy((*it)->X(), (*it)->Y()); printf(" ");
				delete(*it);
				it = B.erase(it);
			}
		}
		
		for(itA = A.begin(); itA != A.end(); itA++) {
			(*itA)->mover();
			(*itA)->choque(N);
		}
		
		for(itA = A.begin(); itA != A.end(); itA++) {
			for(it = B.begin(); it != B.end(); it++) {
				if((*itA)->X() == (*it)->X() && ( (*itA)->Y() +1 == (*it)->Y() ||  (*itA)->Y() == (*it)->Y() )) {
					gotoxy((*it)->X(), (*it)->Y());
					printf(" ");
					delete(*it);
					it = B.erase(it);
					
					A.push_back(new AST(rand()%74 + 3, 4));
					gotoxy((*itA)->X(), (*itA)->Y()); printf(" ");
					delete(*itA);
					itA = A.erase(itA);
					
					puntos += 5;
				}
			}
		}
		
		if(N.VID() == 0) game_over = true;
		
		N.morir();
		N.mover();
		Sleep(30);
	}
	
	if(game_over) {
		system("cls");
		gotoxy(35, 17);
		color(4);
		cout<<"G";
		Sleep(200);
		cout<<"A";
		Sleep(200);
		cout<<"M";
		Sleep(200);
		cout<<"E";
		Sleep(800);
		
		cout<<"O";
		Sleep(200);
		cout<<"V";
		Sleep(200);
		cout<<"E";
		Sleep(200);
		cout<<"R";
		Sleep(1300);
		
		pintar_limites();
		Sleep(1600);
	}
	return 0;
}

void OcultarCursor() {
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = FALSE;
	
	SetConsoleCursorInfo(hCon, &cci);
}

void gotoxy(int x, int y) {
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	
	SetConsoleCursorPosition(hCon, dwPos);
}

void color(int color) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int numero;
	
	SetConsoleTextAttribute(hConsole, color);
}
