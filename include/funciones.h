#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <iosfwd>
#include <ios>

void wait(int segundos);
void color(int color);

void wait(int segundos) {
	Sleep(segundos * 100);
}

void color(int color) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int numero;
	
	SetConsoleTextAttribute(hConsole, color);
}

int cuad(int x) {return x*x;}
int terc(int x) {return x*x*x;}
int cuar(int x) {return x*x*x*x;}
int quin(int x) {return x*x*x*x*x;}
int sext(int x) {return x*x*x*x*x*x;}
int sept(int x) {return x*x*x*x*x*x*x;}
int octv(int x) {return x*x*x*x*x*x*x*x;}
int nove(int x) {return x*x*x*x*x*x*x*x*x;}
int deci(int x) {return x*x*x*x*x*x*x*x*x*x;}
int once(int x) {return x*x*x*x*x*x*x*x*x*x*x;}
int doce(int x) {return x*x*x*x*x*x*x*x*x*x*x*x;}
int trec(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x;}
int cato(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int qinc(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int dsei(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int dsie(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int dcio(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int dsin(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int vein(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int vtun(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int vtdo(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int vttr(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int vtcu(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int vtci(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int vtse(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int vtsi(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int vtoc(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int vtnu(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int trei(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int trun(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int trdo(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int trtr(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int trcu(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int trci(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int trse(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int trsi(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int troc(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int trnu(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int cuare(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int cuun(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int cudo(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int cutr(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int cucu(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int cuci(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int cuse(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int cusi(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int cuoc(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int cunu(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
int cinc(int x) {return x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x;}
