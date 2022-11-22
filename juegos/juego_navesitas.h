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
void juego_navesitas_main();

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

void OcultarCursor() {
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = FALSE;
	
	SetConsoleCursorInfo(hCon, &cci);
}

void MostrarCursor() {
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = TRUE;
	
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
