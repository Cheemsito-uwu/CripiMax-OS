#include <windows.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
#define ESC 27

int cuerpo[200][2];
int n = 1;
int tam = 5;
int x = 10;
int y  = 12;
int dir = 3;
int xc = 30, yc = 15;
int velocidad = 100, h = 1;
int scored = 0;
bool game_overs();

char tecla;

void gotoxi(int x, int y);
void pintar();
void borrar_cuerpo();
void guardar_posicion();
void pintar_cuerpo();
void teclear();
void comida();
void clr(int color);
void puntos();
void cambiar_velocidad();

void gotoxi(int x, int y) {
	HANDLE hCon;
	COORD dwPos;
	
	dwPos.X = x;
	dwPos.Y = y;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hCon, dwPos);
}

void pintar() {
	clr(8);
	// lineas ori
	for(int i = 2 ; i < 78 ; i++) {
		gotoxi(i,3); printf("%c", 205);
		gotoxi(i,29); printf("%c", 205);
	}
	
	// lineas ver
	for(int i = 4 ; i < 29 ; i++) {
		gotoxi(2,i); printf("%c", 186);
		gotoxi(77,i); printf("%c", 186);
	}
	
	// esquinas
	gotoxi(2, 3); printf("%c", 201);
	gotoxi(2, 29); printf("%c", 200);
	gotoxi(77, 3); printf("%c", 187);
	gotoxi(77, 29); printf("%c", 188);
}

void guardar_posicion() {
	cuerpo[n][0] = x;
	cuerpo[n][1] = y;
	n++;
	
	if(n == tam) n = 1;
}

void pintar_cuerpo() {
	clr(2);
	for(int i = 1; i < tam; i++) {
		gotoxi(cuerpo[i][0], cuerpo[i][1]);
		printf("*");
	}
}

void borrar_cuerpo() {
	gotoxi(cuerpo[n][0], cuerpo[n][1]);
	printf(" ");
}

void teclear() {
	if(kbhit()) {
		tecla = getch();
			
		switch(tecla) {
			case ARRIBA:
				if(dir != 2) 
					dir = 1;
					break;
			case ABAJO:
				if(dir != 1)
					dir = 2;
					break;
			case DERECHA:
				if(dir != 4)
					dir = 3;
					break;
			case IZQUIERDA:
				if(dir != 3)
					dir = 4;
					break;
			}
	}
}

void comida() {
	clr(4);
	if(x == xc && y == yc) {
		xc = (rand()%73)+4;
		yc = (rand()%25)+4;
		
		tam++;
		scored += 10;
		gotoxi(xc,yc); printf("%c",4);
	}
}

bool game_overs() {
	if(y == 3 || y == 29 || x == 2 || x == 77) {
		return false;
	}
	
	for(int j = tam -1; j > 0; j--) {
		 if(cuerpo[j][0] == x && cuerpo[j][1] == y) {
			return false;
		}
	}
	
	return true;
}

void puntos() {
	clr(14);
	gotoxi(3,1);
	printf("score %d", scored);
}

void cambiar_velocidad() {
	if(score == h * 20) {
		velocidad -= 10;
		h++;
	}
}

void clr(int color) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int numero;
	
	SetConsoleTextAttribute(hConsole, color);
}
