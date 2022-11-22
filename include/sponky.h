#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <conio.h>
#include <math.h>
#include <dirent.h>

using namespace std;

int color__title = 1;
int color__text  = 9;

char ascii(char number) {
	return number;
}

class Style {
	public:
		void color(int color);
		void p(string estilo);
		void write(string text, int color);
		void nbsp(int times);
};

Style style;

void Style::nbsp(int times) {
	for(int i = 0; i < times; i++) {
		cout<<"\t";
	}
}

void Style::write(string text, int color) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
	
	cout<<text;
	
	SetConsoleTextAttribute(hConsole, 7);
}

void Style::color(int color) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}

void Style::p(string estilo) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	if(estilo == "title") {
		SetConsoleTextAttribute(hConsole, color__title);
	} else if(estilo == "text") {
		SetConsoleTextAttribute(hConsole, color__text);
	} else if(estilo == "alert") {
		SetConsoleTextAttribute(hConsole, 4);
	} else if(estilo == "greenalert") {
		SetConsoleTextAttribute(hConsole, 10);
	} else {
		cout<<"no se encontro el color";
	}
}
