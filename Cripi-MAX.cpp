/*
	CRIPI-MAX COPYRIGHT
	Frist CM's OS made in C++
*/	

/*
	* Hola, este es el codigo fuente de nuestro sistema operativo,
	aqui encontraras todas las funciones, librerias, archivos, etc.
	
	* Aparte, fuera de este archivo van a haber muchos mas archivos
	como este, de puro codigo C++. Aunque siempre van a haber uno
	que otro archivo que sea de otra extension, ejemplo: '.txt',
	'.h'. Estos tipos de archivos estan repartidos en toda la carpeta
	del sistema operativo.
	
	* Mis buenos amigos // y /* te explicaran lo que seria el
	codigo de nuestro systema, talvez no sea tan explicativo
	pero por lo menos te dan una idea y una guia de como funciona
	todo esto.
	
	* Diviertete descubriendo el codigo!
*/

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

#include "include/funciones.h"
#include "include/sponky.h"
#include "include/compiler.h"

#include "juegos/juego_navesitas.h"
#include "juegos/juego_flappy_bird.h"
#include "juegos/juego_snake.h"

#define ENTER 13

#define CTRLyH 8
#define CTRLyR 18
#define CTRLyP 16
#define CTRLyF 6
#define CTRLyJ 10
#define CTRLyT 20

using namespace std;

/*
	Variables globales usadas
*/

int espacio_usado = 120;
int espacio_total = 24000;
int work = 1;
int dinerooo = 0;
int limite_liberar = 36;
bool working = true;
bool inicio_edited = false;

/*
	Todas las aplicaciones
*/

bool admin_juegos = false;
bool db = false;
bool mecanografia = false;
bool ide = false;
bool antivirus = false;
bool mensajes = false;
bool musica = false;
bool all = true;
bool basePremium = false;
bool sp_games = false;


/*
	Funciones usadas;
	Aqui se declaran para poder usarlas en cualquier
	parte de el codigo, y en cualquier funcion.
*/

void kernel(int tarea_ejecutada);
void elHome();
void aplicaciones(int app);
void user();
void memoria_archivos();
void escribir();
void internet_explorer();
void juegos();
void juego_naves();
void juego_flappy_bird();
void juego_snake();
void config();
void paint();
void dinero();
void inicio(char type[], bool editing);
void gestionar_colores();
void cmd();

bool computersFast(int worksa) {
	if(worksa < 6) {
		return true;
	}

	if(worksa < 15 && worksa > 6) {
		return false;
	}
}

class Apps {
	public:
		void show();
		void shop();

		void vadmin_juegos();
		void vdb();
		void basePersonalizada();
		void vmecanografia();
		void vide();
		void vantivirus();
		void vmensajes();
		void vmusica();
		void vsp_games();

		void showing(string shows);
		void asignar_valores();
};

int main() {
	while(working) {
		elHome();

		if(kbhit()) {
			char tecla = getch();

			if(tecla == CTRLyH) {
				system("cls");
				wait(2);
				elHome();
			}

			if(tecla == CTRLyR) {
				system("cls");
				wait(2);
				elHome();
			}

			if(tecla == CTRLyP) {
				system("cls");
				wait(3);

				Apps apps;
				apps.show();
			}

			if(tecla == CTRLyF) {
				system("cls");
				config();
			}

			if(tecla == CTRLyJ) {
				system("cls");
				wait(2);
				juegos();
			}

			if(tecla == CTRLyT) {
				system("cls");
				wait(2);

				Apps apps;
				apps.shop();
			}
		}
	}
	return 0;
}

// El kernel es el nucleo del sistema operativo y
// hace grandes funciones como la de apagar el sistema
// despues del uso exesivo del hardware

void kernel(int tarea_ejecutada) {
	int limite = 15;

	if(tarea_ejecutada == 0) {
		// No hace nada con el numero "0"
	} else if(tarea_ejecutada == 1) {
		cout<<"\n\n\t\tTrabajando: ";
		if(working == true) {
			cout<<"si";
		} else {
			cout<<"no";
		}

		cout<<"\t\tEstado del kernel: "<<work<<endl<<endl;
		color(4);
		cout<<"\t\tPresiona una tecla para salir...";

		getch();
		color(9);
		system("cls");
		wait(3);
		elHome();
	} else if(tarea_ejecutada == 2) {
		work += 4;
	} else if(tarea_ejecutada == 3) {
		work++;
	} else if(tarea_ejecutada == 4) {
		work += 2;
	} else if(tarea_ejecutada == 5) {
		work--;
	} else if(tarea_ejecutada == 6) {
		limite = limite + 10;
	} else if(tarea_ejecutada == 7) {
		work = 0;
	}

	if(work > limite) {
		system("cls");
		system("color 97");
		cout<<"\n\n\n\t\t\t:(\tLe ha sucedido algo grave al CPU"<<endl;
		cout<<"\t\tEl kernel de Cripi-Max ha detectado un gran uso del CPU"<<endl;
		cout<<"\n\t\t\tDebes dejar descansar al computador"<<endl<<endl;
		system("pause>null");
		exit(1);
	}
}

void config() {
	// Variables
	int opcion;
	string nntt = "\n\n\t\t";
	string ntt = "\n\t\t";
	string nt = "\n\t";

	// Interfaz grafica
	system("cls");
	wait(1);
	cout<<"\n\n\t\t";
	style.p("title");
	cout<<"CONFIGURACION";

	color(4);
	cout<<endl<<endl<<"\t\t0. Salir"<<endl;
	style.p("text");
	cout<<"\t\t1. Cambiar nombre de usuario"<<endl;
	cout<<"\t\t2. Pantalla de inicio"<<endl;
	cout<<"\t\t3. Gestion de programas y aplicaciones"<<endl;
	cout<<"\t\t4. Conbinaciones de teclas"<<endl;
	cout<<"\t\t5. Colores"<<endl;

	//Añadir mas opciones
	cout<<"\t\t"<<endl;

	// Elejir la opcion
	color(10);
	cout<<"\n\t\tElige >";
	cin>>opcion;

	if(opcion == 1) {
		system("cls");
		cout<<nntt<<"Hola!";
		wait(18);
		color(4);
		cout<<nntt<<"Recuerda que puedes salir presionando la tecla 's'!";
		wait(16);
		color(14);
		cout<<nntt<<"Tienes que irte al explorador de archivos, y en la carpeta de este OS"<<endl;
		cout<<"\t\tTienes que ver una carpeta que diga 'datos_guardados'"<<endl;
		wait(67);
		color(9);
		cout<<ntt<<"Luego de haber entrado, solo tienes que encontrar el archivo que"<<endl;
		cout<<"\t\tse llame o tenga de nombre 'user.txt'"<<endl;
		wait(13);
		cout<<"\t\tPresiona una tecla para continuar"<<endl;
		getch();
		cout<<ntt<<"Cuando ya tengas el archivo localizado, solo debes abrirlo con cualquier"<<endl;
		cout<<"\t\tprograma que tenga tu computadora, ejemplo: Bloc de notas, Wordpad, etc."<<endl;
		wait(71);
		cout<<ntt<<"Ahora solo editas el texto que tenga ya puesto ";
		wait(12);
		cout<<"(es muy probable que no tenga nada)"<<endl;
		wait(56);
		color(10);
		cout<<ntt<<"Listo! Ya tienes el username cambiado!"<<endl;
		wait(13);
		color(4);
		cout<<"\t\tPresiona una tecla para continuar";
		getch();
		system("cls");
		wait(1);
		elHome();

		bool True = true;

		while(True) {
			if(kbhit()) {
				char tecla = getch();

				if(tecla == 's') {
					True = false;
					system("cls");
					elHome();
				}
			}
		}
	} else if(opcion == 3) {
		int opcion;

		system("cls");

		style.p("title");
		cout<<"\n\n\n\t\tGESTION DE APLICACIONES\n\n";
		style.p("text");
		cout<<"\t\t1. Desinstalar un programa";

		style.p("alert");
		cout<<endl<<endl<<"\t\t0. Salir";
		style.p("text");
		cout<<endl<<endl<<"\t\tElige >";
		cin>>opcion;

		if(opcion == 1) {
			int aplications;
			int elige_app;

			cout<<endl<<endl<<"\t\tELIGE UNA APLICACION"<<endl<<endl;

			if(admin_juegos == true) {
				cout<<"\t\t1. Administrador de juegos"<<endl;
				aplications++;
			}

			if(db == true) {
				cout<<"\t\t2. Base de datos"<<endl;
				aplications++;
			}

			if(mecanografia == true) {
				cout<<"\t\t3. Mecanografia"<<endl;
				aplications++;
			}

			if(ide == true) {
				cout<<"\t\t4. Compilador"<<endl;
				aplications++;
			}

			if(antivirus == true) {
				cout<<"\t\t5. Antivirus"<<endl;
				aplications++;
			}

			if(sp_games == true) {
				cout<<"\t\t6. Sp-Games"<<endl;
				aplications++;
			}

			if(mensajes == true) {
				cout<<"\t\t7. Mensjaes"<<endl;
				aplications++;
			}

			if(musica == true) {
				cout<<"\t\t8. Musica"<<endl;
				aplications++;
			}

			if(aplications <= 0) {
				style.p("alert");
				cout<<"\t\tNo tienes aplicaciones instaladas :/"<<endl;
				style.p("text");
			}

			cout<<"\n\n\t\tElige >";
			cin>>elige_app;

			if(elige_app == 1 && admin_juegos == true) {
				admin_juegos = false;

				if(admin_juegos == false) {
					cout<<"\n\n\t\tSe ha desinstalado correctamente!";
				}

				getch();
				system("cls");
				wait(2);
				elHome();
			} else if(elige_app == 2 && db == true) {
				db = false;

				if(db == false) {
					cout<<"\n\n\t\tSe ha desinstalado correctamente!";
				}

				getch();
				system("cls");
				wait(2);
				elHome();
			} else if(elige_app == 3 && mecanografia == true) {
				mecanografia = false;

				if(mecanografia == false) {
					cout<<"\n\n\t\tSe ha desinstalado correctamente!";
				}

				getch();
				system("cls");
				wait(2);
				elHome();
			} else if(elige_app == 4 && ide == true) {
				ide = false;

				if(ide == false) {
					cout<<"\n\n\t\tSe ha desinstalado correctamente!";
				}

				getch();
				system("cls");
				wait(2);
				elHome();
			} else if(elige_app == 5 && antivirus == true) {
				antivirus = false;

				if(antivirus == false) {
					cout<<"\n\n\t\tSe ha desinstalado correctamente!";
				}

				getch();
				system("cls");
				wait(2);
				elHome();
			} else if(elige_app == 6 && sp_games) {
				sp_games = false;

				if(sp_games == false) {
					cout<<"\n\n\t\tSe ha desinstalado correctamente!";
				}

				getch();
				system("cls");
				wait(2);
				elHome();
			} else if(elige_app == 7 && mensajes) {
				mensajes = false;

				if(mensajes == false) {
					cout<<"\n\n\t\tSe ha desinstalado correctamente!";
				}

				getch();
				system("cls");
				wait(2);
				elHome();
			} else if(elige_app == 8 && musica) {
				musica = false;

				if(musica == false) {
					cout<<"\n\n\t\tSe ha desinstalado correctamente!";
				}

				getch();
				system("cls");
				wait(2);
				elHome();
			} else {
				getch();
				system("cls");
				wait(2);
				elHome();
			}
		} else {
			system("cls");
			wait(3);
			elHome();
		}
	} else if(opcion == 4) {
		system("cls");
		style.p("title");
		cout<<"\n\n\n\t\t\tCOMBINACIONES DE TECLAS EN TU DISPOSITIVO"<<endl<<endl;
		style.p("text");
		cout<<"\t\tCtrl + H (ir al escritorio)"<<endl;
		cout<<"\t\tCtrl + R (reiniciar)"<<endl;
		cout<<"\t\tCtrl + P (ver tus aplicaciones)"<<endl;
		cout<<"\t\tCtrl + F (ir a la configuracion[aqui])"<<endl;
		cout<<"\t\tCtrl + J (ver los juegos)"<<endl;
		cout<<"\t\tCrtl + T (ver la Cripi-Max store)"<<endl<<endl;

		cout<<"\t\tLeido!";
		getch();
		system("cls");
		wait(2);
		config();
	} else if(opcion == 2) {
		inicio_edited = true;
		char adwajokl[300];
		
		inicio(adwajokl, true);
	} else if(opcion == 5) {
		system("cls");
		gestionar_colores();
	} else {
		system("cls");
		wait(2);
		elHome();
	}
}

void elHome() {
	char adwajokl[300];
	limite_liberar += 10;
	kernel(5);

	MostrarCursor();
	if(inicio_edited == false) {
		char dadsjk[20];
		
		inicio("main", false);
	}
	
	if(inicio_edited == true) {
		inicio(adwajokl, false);
	}
	style.p("title");
	cout<<"\n\t\t\t\tPulsa una tecla para ver tus aplicaciones";
	getch();
	system("cls");
	wait(16);

	int elige_la_app;

	cout<<"\n\n\n\t\t\t\t\tTUS APLICACIONES"<<endl;
	style.p("text");
	cout<<"\n\n\t\t";
	cout<<"**********************************************************************************************";
	cout<<"\n\n\t\t";
	cout<<"|   1. Explorador de archivos   |     2. Cripi-Max explorer     |      3. Configuracion      |";
	cout<<"\n\n\t\t";
	cout<<"**********************************************************************************************";
	cout<<"\n\n\t\t";
	cout<<"|       4. Bloc de notas        |          5. Juegos            |          6. Reloj          |";
	cout<<"\n\n\t\t";
	cout<<"**********************************************************************************************";
	cout<<"\n\n\t\t";
	cout<<"|        7. Calculadora         |           8. Paint            |    9. Ver estado del PC    |";
	cout<<"\n\n\t\t";
	cout<<"**********************************************************************************************";
	cout<<"\n\n\t\t";
	cout<<"|        10. Tu economia        |      11. Cripi-Max store      |   12. Todos los programas  |";
	cout<<"\n\n\t\t";
	cout<<"**********************************************************************************************";
	color(4);
	cout<<"\n\n\t\tPuedes escribir 0 para apagar al sistema";

	color(10);
	cout << "\n\n\n\t\t\t>";
	cin >> elige_la_app;

	if(elige_la_app == 1) {
		// Explorador de archivos
		limite_liberar += 6;
		system("cls");
		aplicaciones(1);
		kernel(2);
	} else if(elige_la_app == 2) {
		// Internet
		limite_liberar += 6;
		system("cls");
		internet_explorer();
		kernel(2);
	} else if(elige_la_app == 3) {
		// ConfiguraciÃ³n
		limite_liberar += 5;
		config();
		kernel(4);
	} else if(elige_la_app == 4) {
		// Bloc de notas (simple)
		limite_liberar += 6;
		system("cls");
		kernel(3);
		aplicaciones(4);
	} else if(elige_la_app == 5) {
		// Juegos
		limite_liberar += 12;
		system("cls");
		kernel(2);
		juegos();
	} else if(elige_la_app == 6) {
		// Reloj
		limite_liberar += 6;
		system("cls");
		aplicaciones(3);
		kernel(3);
	} else if(elige_la_app == 7) {
		// Calculadora
		limite_liberar += 8;
		system("cls");
		aplicaciones(2);
		kernel(3);
	} else if(elige_la_app == 8) {
		// El paint Bv
		limite_liberar += 4;
		system("cls");
		paint();
		kernel(4);
	} else if(elige_la_app == 9) {
		// Para ver el estado del kernel
		limite_liberar += 2;
		system("cls");
		kernel(5);
		kernel(1);
	} else if(elige_la_app == 0) {
		// La funcion de salir
		exit(1);
	} else if(elige_la_app == 10) {
		// Para ver tu economía o ver tu dinero
		limite_liberar += 6;
		system("cls");
		kernel(3);
		dinero();
	} else if(elige_la_app == 11) {
		limite_liberar += 6;
		kernel(3);

		Apps apps;
		apps.shop();
	} else if(elige_la_app == 12) {
		limite_liberar += 8;
		kernel(3);

		Apps apps;
		apps.show();
	} else {
		// Por si pone algo que ni existe
		limite_liberar += 1;
		system("cls");
		elHome();
	}
}

void aplicaciones(int app) {
	int almacenamiento_disponible = espacio_total - espacio_usado;

	if (app == 0) {
		system("cls");
		return elHome();
	} else if(app == 1) {
		// Explorador de archivos:
		string archivo;

		cout<<"|\tArchivos del ordenador\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t -  []  X |";
		color(9);
		cout<<"\n\n\n\n\n\t\t\t GESTION DE ALMACENAMIENTO";
		color(7);
		cout<<endl<<"\t\tAlmacenamiento: "<<espacio_usado<<" de "<<espacio_total;
		cout<<", queda disponible "<<almacenamiento_disponible;
		cout<<"!"<<endl<<"\t\t";

		cout<<endl<<endl<<"\t\tBuscar archivos . . ."<<endl;
		memoria_archivos();
	} else if(app == 2) {
		// Calculadora:
		int opcion_calc;
		int numero1, numero2;
		int resultado;

		style.p("title");
		cout<<"\n\n\n\t\t\tCALCULADORA"<<endl<<endl;
		color(4);
		cout<<"\n\n\t0. Salir"<<endl;
		style.p("text");
		cout<<"\t 1. Suma"<<endl;
		cout<<"\t 2. Resta"<<endl;
		cout<<"\t 3. Multiplicacion"<<endl;
		cout<<"\t 4. Division"<<endl;
		cout<<"\t 5. Potencia"<<endl;
		cout<<"\t 6. Raiz cuadrada"<<endl;
		cout<<"\t 7. Promedio"<<endl;
		color(1);
		cout<<"\n\t\t>";
		cin>>opcion_calc;

		switch(opcion_calc) {
			case 0:
				system("cls");
				elHome();
			break;
			case 1:
				style.p("text");
				system("cls");
				cout<<"\n\n\n\t\tSUMA"<<endl<<endl;
				cout<<"\tEscribe el primer numero >";
				cin>>numero1;
				cout<<endl<<"\tEscribe el segundo numero >";
				cin>>numero2;

				color(11);
				resultado = numero1 + numero2;
				cout<<endl<<endl<<"El resultado es"<<resultado<<"!";
				wait(13);
				printf("\n\n\tpresiona una tecla para cambiar. . .");

				getch();
				aplicaciones(2);
			break;
			case 2:
				style.p("text");
				system("cls");
				cout<<"\n\n\n\tRESTA"<<endl<<endl;
				cout<<"\tEscribe el primer numero >";
				cin>>numero1;
				cout<<endl<<"\tEscribe el segundo numero >";
				cin>>numero2;

				color(11);
				resultado = numero1 - numero2;
				cout<<endl<<endl<<"El resultado es"<<resultado<<"!";
				wait(13);
				printf("\n\n\tpresiona una tecla para cambiar. . .");

				getch();
				aplicaciones(2);
			break;
			case 3:
				style.p("text");
				system("cls");
				cout<<"\n\n\n\tMULTIPLICACION"<<endl<<endl;
				cout<<"\tEscribe el primer numero >";
				cin>>numero1;
				cout<<endl<<"\tEscribe el segundo numero >";
				cin>>numero2;

				color(11);
				resultado = numero1 * numero2;
				cout<<endl<<endl<<"El resultado es"<<resultado<<"!";
				wait(13);

				printf("\n\n\tpresiona una tecla para cambiar. . .");
				getch();
				aplicaciones(2);
			break;
			case 4:
				style.p("text");
				system("cls");
				cout<<"\n\n\n\tDIVISION"<<endl<<endl;
				cout<<"\tEscribe el primer numero >";
				cin>>numero1;
				cout<<endl<<"\tEscribe el segundo numero >";
				cin>>numero2;

				color(11);
				resultado = numero1 / numero2;
				cout<<endl<<endl<<"El resultado es"<<resultado<<"!";
				wait(13);

				printf("\n\n\tpresiona una tecla para cambiar. . .");
				getch();
				aplicaciones(2);
			break;
			case 5:
				int nume, elevacion;
				int resul;
				style.p("text");
				system("cls");
				cout<<"\n\n\n\tPOTENCIA"<<endl<<endl;
				cout<<"\tEscribe el numero que quieres potenciar >";
				cin>>nume;
				cout<<endl<<"\tEscribe la potencia/elevacion >";
				cin>>elevacion;
				cout<<endl<<endl<<"\t";

				color(11);
				switch(elevacion) {
					case 1:
						resul = nume;
					break;
					case 2:
						resul = cuad(nume);
					break;
					case 3:
						resul = terc(nume);
					break;
					case 4:
						resul = cuar(nume);
					break;
					case 5:
						resul = quin(nume);
					break;
					case 6:
						resul = sext(nume);
					break;
					case 7:
						resul = sept(nume);
					break;
					case 8:
						resul = octv(nume);
					break;
					case 9:
						resul = nove(nume);
					break;
					case 10:
						resul = deci(nume);
					break;
					case 11:
						resul = once(nume);
					break;
					case 12:
						resul = doce(nume);
					break;
					case 13:
						resul = trec(nume);
					break;
					case 14:
						resul = cato(nume);
					break;
					case 15:
						resul = qinc(nume);
					break;
					case 16:
						resul = dsei(nume);
					break;
					case 17:
						resul = dsie(nume);
					break;
					case 18:
						resul = dcio(nume);
					break;
					case 19:
						resul = dsin(nume);
					break;
					case 20:
						resul = vein(nume);
					break;
					case 21:
						resul = vtun(nume);
					break;
					case 22:
						resul = vtdo(nume);
					break;
					case 23:
						resul = vttr(nume);
					break;
					case 24:
						resul = vtcu(nume);
					break;
					case 25:
						resul = vtci(nume);
					break;
					case 26:
						resul = vtse(nume);
					break;
					case 27:
						resul = vtsi(nume);
					break;
					case 28:
						resul = vtoc(nume);
					break;
					case 29:
						resul = vtnu(nume);
					break;
					case 30:
						resul = trei(nume);
					break;
					case 31:
						resul = trun(nume);
					break;
					case 32:
						resul = trdo(nume);
					break;
					case 33:
						resul = trtr(nume);
					break;
					case 34:
						resul = trcu(nume);
					break;
					case 35:
						resul = trci(nume);
					break;
					case 36:
						resul = trse(nume);
					break;
					case 37:
						resul = trsi(nume);
					break;
					case 38:
						resul = troc(nume);
					break;
					case 39:
						resul = trnu(nume);
					break;
					case 40:
						resul = cuare(nume);
					break;
					case 41:
						resul = cuun(nume);
					break;
					case 42:
						resul = cudo(nume);
					break;
					case 43:
						resul = cutr(nume);
					break;
					case 44:
						resul = cucu(nume);
					break;
					case 45:
						resul = cuci(nume);
					break;
					case 46:
						resul = cuse(nume);
					break;
					case 47:
						resul = cusi(nume);
					break;
					case 48:
						resul = cuoc(nume);
					break;
					case 49:
						resul = cunu(nume);
					break;
					case 50:
						resul = cinc(nume);
					default:
						color(4);
						cout<<"Lo sentimos, esa no se pudo ejecutar :(\n\n\n";
					break;
				}

				cout<<"El resultado de "<<nume<<" elevado a la "<<elevacion<<" es ";;
				color(9);
				cout<<resul;
				color(4);
				printf("\n\n\tPresiona una tecla para continuar");
				getch();
				aplicaciones(2);
			break;
			case 6:
				float num;
				float resultado = 0;

				color(1);
				cout<<"\n\n\n\tRAIZ CUADRADA"<<endl<<endl;
				color(9);
				cout<<"\tEscribe el numero >";
				cin>>num;

				resultado = sqrt(num);

				cout<<"\n\tResultado: "<<resultado<<endl<<endl;
				cout<<"\tPresiona una tecla para continuar...";
				getch();
				system("cls");
				wait(4);
				aplicaciones(2);
				break;
			}

			if(opcion_calc == 7) {
				int elementos;

				cout<<"\n\n\n"<<endl;
				style.nbsp(2);
				style.p("title");

				cout<<"SACAR PROMEDIO"<<endl<<endl;
				style.nbsp(2);
				style.p("text");

				cout<<"Cuantos elementos quieres que tenga tu lista?";
				cin>>elementos;
				cout<<endl<<endl<<endl;

				if(elementos <= 1) {
					style.p("alert");
					style.nbsp(2);

					cout<<"Lo siento, son muy pocos elementos para crear una lista :("<<endl;

					getch();
					system("cls");
					wait(2);
					aplicaciones(2);
				} else if(elementos == 2) {
					int ele1;
					int ele2;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					sum = ele1 + ele2;
					promedio = sum / 2;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 3) {
					int ele1;
					int ele2;
					int ele3;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					sum = ele1 + ele2 + ele3;
					promedio = sum / 3;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 4) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					sum = ele1 + ele2 + ele3 + ele4;
					promedio = sum / 4;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 5) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					sum = ele1 + ele2 + ele3 + ele4 + ele5;
					promedio = sum / 5;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 6) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;
					int ele6;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					cout<<endl<<"Escribe el sexto numero de la lista ";
					cin>>ele6;

					sum = ele1 + ele2 + ele3 + ele4 + ele5 + ele6;
					promedio = sum / 6;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 7) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;
					int ele6;
					int ele7;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					cout<<endl<<"Escribe el sexto numero de la lista ";
					cin>>ele6;

					cout<<endl<<"Escribe el septimo numero de la lista";
					cin>>ele7;

					sum = ele1 + ele2 + ele3 + ele4 + ele5 + ele6 + ele7;
					promedio = sum / 7;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 8) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;
					int ele6;
					int ele7;
					int ele8;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					cout<<endl<<"Escribe el sexto numero de la lista ";
					cin>>ele6;

					cout<<endl<<"Escribe el septimo numero de la lista";
					cin>>ele7;

					cout<<endl<<"Escribe el octavo numero de la lista";
					cin>>ele8;

					sum = ele1 + ele2 + ele3 + ele4 + ele5 + ele6 + ele7 + ele8;
					promedio = sum / 8;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 9) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;
					int ele6;
					int ele7;
					int ele8;
					int ele9;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					cout<<endl<<"Escribe el sexto numero de la lista ";
					cin>>ele6;

					cout<<endl<<"Escribe el septimo numero de la lista";
					cin>>ele7;

					cout<<endl<<"Escribe el octavo numero de la lista";
					cin>>ele8;

					cout<<endl<<"Escribe el noveno numero de la lista";
					cin>>ele9;

					sum = ele1 + ele2 + ele3 + ele4 + ele5 + ele6 + ele7 + ele8 + ele9;
					promedio = sum / 9;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 10) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;
					int ele6;
					int ele7;
					int ele8;
					int ele9;
					int ele10;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					cout<<endl<<"Escribe el sexto numero de la lista ";
					cin>>ele6;

					cout<<endl<<"Escribe el septimo numero de la lista";
					cin>>ele7;

					cout<<endl<<"Escribe el octavo numero de la lista";
					cin>>ele8;

					cout<<endl<<"Escribe el noveno numero de la lista";
					cin>>ele9;

					cout<<endl<<"Escribe el decimo numero de la lista";
					cin>>ele10;

					sum = ele1 + ele2 + ele3 + ele4 + ele5 + ele6 + ele7 + ele8 + ele9;
					sum = sum + ele10;
					promedio = sum / 10;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 11) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;
					int ele6;
					int ele7;
					int ele8;
					int ele9;
					int ele10;
					int ele11;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					cout<<endl<<"Escribe el sexto numero de la lista ";
					cin>>ele6;

					cout<<endl<<"Escribe el septimo numero de la lista";
					cin>>ele7;

					cout<<endl<<"Escribe el octavo numero de la lista";
					cin>>ele8;

					cout<<endl<<"Escribe el noveno numero de la lista";
					cin>>ele9;

					cout<<endl<<"Escribe el decimo numero de la lista";
					cin>>ele10;

					cout<<endl<<"Escribe el onceavo numero de la lista";
					cin>>ele11;

					sum = ele1 + ele2 + ele3 + ele4 + ele5 + ele6 + ele7 + ele8 + ele9;
					sum = sum + ele10 + ele11;
					promedio = sum / 11;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 12) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;
					int ele6;
					int ele7;
					int ele8;
					int ele9;
					int ele10;
					int ele11;
					int ele12;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					cout<<endl<<"Escribe el sexto numero de la lista ";
					cin>>ele6;

					cout<<endl<<"Escribe el septimo numero de la lista";
					cin>>ele7;

					cout<<endl<<"Escribe el octavo numero de la lista";
					cin>>ele8;

					cout<<endl<<"Escribe el noveno numero de la lista";
					cin>>ele9;

					cout<<endl<<"Escribe el decimo numero de la lista";
					cin>>ele10;

					cout<<endl<<"Escribe el onceavo numero de la lista";
					cin>>ele11;

					cout<<endl<<"Escribe el doceavo numero de la lista";
					cin>>ele12;

					sum = ele1 + ele2 + ele3 + ele4 + ele5 + ele6 + ele7 + ele8 + ele9;
					sum = sum + ele10 + ele11 + ele12;
					promedio = sum / 12;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 13) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;
					int ele6;
					int ele7;
					int ele8;
					int ele9;
					int ele10;
					int ele11;
					int ele12;
					int ele13;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					cout<<endl<<"Escribe el sexto numero de la lista ";
					cin>>ele6;

					cout<<endl<<"Escribe el septimo numero de la lista";
					cin>>ele7;

					cout<<endl<<"Escribe el octavo numero de la lista";
					cin>>ele8;

					cout<<endl<<"Escribe el noveno numero de la lista";
					cin>>ele9;

					cout<<endl<<"Escribe el decimo numero de la lista";
					cin>>ele10;

					cout<<endl<<"Escribe el onceavo numero de la lista";
					cin>>ele11;

					cout<<endl<<"Escribe el doceavo numero de la lista";
					cin>>ele12;

					cout<<endl<<"Escribe el treceavo numero de la lista";
					cin>>ele13;

					sum = ele1 + ele2 + ele3 + ele4 + ele5 + ele6 + ele7 + ele8 + ele9;
					sum = sum + ele10 + ele11 + ele12 + ele13;
					promedio = sum / 13;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 14) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;
					int ele6;
					int ele7;
					int ele8;
					int ele9;
					int ele10;
					int ele11;
					int ele12;
					int ele13;
					int ele14;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					cout<<endl<<"Escribe el sexto numero de la lista ";
					cin>>ele6;

					cout<<endl<<"Escribe el septimo numero de la lista";
					cin>>ele7;

					cout<<endl<<"Escribe el octavo numero de la lista";
					cin>>ele8;

					cout<<endl<<"Escribe el noveno numero de la lista";
					cin>>ele9;

					cout<<endl<<"Escribe el decimo numero de la lista";
					cin>>ele10;

					cout<<endl<<"Escribe el onceavo numero de la lista";
					cin>>ele11;

					cout<<endl<<"Escribe el doceavo numero de la lista";
					cin>>ele12;

					cout<<endl<<"Escribe el treceavo numero de la lista";
					cin>>ele13;

					cout<<endl<<"Escribe el treceavo numero de la lista";
					cin>>ele14;

					sum = ele1 + ele2 + ele3 + ele4 + ele5 + ele6 + ele7 + ele8 + ele9;
					sum = sum + ele10 + ele11 + ele12 + ele13 + ele14;
					promedio = sum / 14;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 15) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;
					int ele6;
					int ele7;
					int ele8;
					int ele9;
					int ele10;
					int ele11;
					int ele12;
					int ele13;
					int ele14;
					int ele15;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					cout<<endl<<"Escribe el sexto numero de la lista ";
					cin>>ele6;

					cout<<endl<<"Escribe el septimo numero de la lista";
					cin>>ele7;

					cout<<endl<<"Escribe el octavo numero de la lista";
					cin>>ele8;

					cout<<endl<<"Escribe el noveno numero de la lista";
					cin>>ele9;

					cout<<endl<<"Escribe el decimo numero de la lista";
					cin>>ele10;

					cout<<endl<<"Escribe el onceavo numero de la lista";
					cin>>ele11;

					cout<<endl<<"Escribe el doceavo numero de la lista";
					cin>>ele12;

					cout<<endl<<"Escribe el treceavo numero de la lista";
					cin>>ele13;

					cout<<endl<<"Escribe el catorceavo numero de la lista";
					cin>>ele14;

					cout<<endl<<"Escribe el quinceavo numero de la lista";
					cin>>ele15;

					sum = ele1 + ele2 + ele3 + ele4 + ele5 + ele6 + ele7 + ele8 + ele9;
					sum = sum + ele10 + ele11 + ele12 + ele13 + ele14 + ele15;
					promedio = sum / 15;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 16) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;
					int ele6;
					int ele7;
					int ele8;
					int ele9;
					int ele10;
					int ele11;
					int ele12;
					int ele13;
					int ele14;
					int ele15;
					int ele16;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					cout<<endl<<"Escribe el sexto numero de la lista ";
					cin>>ele6;

					cout<<endl<<"Escribe el septimo numero de la lista";
					cin>>ele7;

					cout<<endl<<"Escribe el octavo numero de la lista";
					cin>>ele8;

					cout<<endl<<"Escribe el noveno numero de la lista";
					cin>>ele9;

					cout<<endl<<"Escribe el decimo numero de la lista";
					cin>>ele10;

					cout<<endl<<"Escribe el onceavo numero de la lista";
					cin>>ele11;

					cout<<endl<<"Escribe el doceavo numero de la lista";
					cin>>ele12;

					cout<<endl<<"Escribe el treceavo numero de la lista";
					cin>>ele13;

					cout<<endl<<"Escribe el catorceavo numero de la lista";
					cin>>ele14;

					cout<<endl<<"Escribe el quinceavo numero de la lista";
					cin>>ele15;

					cout<<endl<<"Escribe el diesiseisavo numero de la lista";
					cin>>ele16;

					sum = ele1 + ele2 + ele3 + ele4 + ele5 + ele6 + ele7 + ele8 + ele9;
					sum = sum + ele10 + ele11 + ele12 + ele13 + ele14 + ele15 + ele16;
					promedio = sum / 16;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 17) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;
					int ele6;
					int ele7;
					int ele8;
					int ele9;
					int ele10;
					int ele11;
					int ele12;
					int ele13;
					int ele14;
					int ele15;
					int ele16;
					int ele17;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					cout<<endl<<"Escribe el sexto numero de la lista ";
					cin>>ele6;

					cout<<endl<<"Escribe el septimo numero de la lista";
					cin>>ele7;

					cout<<endl<<"Escribe el octavo numero de la lista";
					cin>>ele8;

					cout<<endl<<"Escribe el noveno numero de la lista";
					cin>>ele9;

					cout<<endl<<"Escribe el decimo numero de la lista";
					cin>>ele10;

					cout<<endl<<"Escribe el onceavo numero de la lista";
					cin>>ele11;

					cout<<endl<<"Escribe el doceavo numero de la lista";
					cin>>ele12;

					cout<<endl<<"Escribe el treceavo numero de la lista";
					cin>>ele13;

					cout<<endl<<"Escribe el catorceavo numero de la lista";
					cin>>ele14;

					cout<<endl<<"Escribe el quinceavo numero de la lista";
					cin>>ele15;

					cout<<endl<<"Escribe el diesiseisavo numero de la lista";
					cin>>ele16;

					cout<<endl<<"Escribe el diesisieteavo numero de la lista";
					cin>>ele17;

					sum = ele1 + ele2 + ele3 + ele4 + ele5 + ele6 + ele7 + ele8 + ele9;
					sum = sum + ele10 + ele11 + ele12 + ele13 + ele14 + ele15 + ele16;
					sum = sum + ele17;
					promedio = sum / 17;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 18) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;
					int ele6;
					int ele7;
					int ele8;
					int ele9;
					int ele10;
					int ele11;
					int ele12;
					int ele13;
					int ele14;
					int ele15;
					int ele16;
					int ele17;
					int ele18;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					cout<<endl<<"Escribe el sexto numero de la lista ";
					cin>>ele6;

					cout<<endl<<"Escribe el septimo numero de la lista";
					cin>>ele7;

					cout<<endl<<"Escribe el octavo numero de la lista";
					cin>>ele8;

					cout<<endl<<"Escribe el noveno numero de la lista";
					cin>>ele9;

					cout<<endl<<"Escribe el decimo numero de la lista";
					cin>>ele10;

					cout<<endl<<"Escribe el onceavo numero de la lista";
					cin>>ele11;

					cout<<endl<<"Escribe el doceavo numero de la lista";
					cin>>ele12;

					cout<<endl<<"Escribe el treceavo numero de la lista";
					cin>>ele13;

					cout<<endl<<"Escribe el catorceavo numero de la lista";
					cin>>ele14;

					cout<<endl<<"Escribe el quinceavo numero de la lista";
					cin>>ele15;

					cout<<endl<<"Escribe el diesiseisavo numero de la lista";
					cin>>ele16;

					cout<<endl<<"Escribe el diesisieteavo numero de la lista";
					cin>>ele17;

					cout<<endl<<"Escribe el diesiochoavo numero de la lista";
					cin>>ele18;

					sum = ele1 + ele2 + ele3 + ele4 + ele5 + ele6 + ele7 + ele8 + ele9;
					sum = sum + ele10 + ele11 + ele12 + ele13 + ele14 + ele15 + ele16;
					sum = sum + ele17 + ele18;
					promedio = sum / 18;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 19) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;
					int ele6;
					int ele7;
					int ele8;
					int ele9;
					int ele10;
					int ele11;
					int ele12;
					int ele13;
					int ele14;
					int ele15;
					int ele16;
					int ele17;
					int ele18;
					int ele19;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					cout<<endl<<"Escribe el sexto numero de la lista ";
					cin>>ele6;

					cout<<endl<<"Escribe el septimo numero de la lista";
					cin>>ele7;

					cout<<endl<<"Escribe el octavo numero de la lista";
					cin>>ele8;

					cout<<endl<<"Escribe el noveno numero de la lista";
					cin>>ele9;

					cout<<endl<<"Escribe el decimo numero de la lista";
					cin>>ele10;

					cout<<endl<<"Escribe el onceavo numero de la lista";
					cin>>ele11;

					cout<<endl<<"Escribe el doceavo numero de la lista";
					cin>>ele12;

					cout<<endl<<"Escribe el treceavo numero de la lista";
					cin>>ele13;

					cout<<endl<<"Escribe el catorceavo numero de la lista";
					cin>>ele14;

					cout<<endl<<"Escribe el quinceavo numero de la lista";
					cin>>ele15;

					cout<<endl<<"Escribe el diesiseisavo numero de la lista";
					cin>>ele16;

					cout<<endl<<"Escribe el diesisieteavo numero de la lista";
					cin>>ele17;

					cout<<endl<<"Escribe el diesiochoavo numero de la lista";
					cin>>ele18;

					cout<<endl<<"Escribe el diesunueveavo numero de la lista";
					cin>>ele19;

					sum = ele1 + ele2 + ele3 + ele4 + ele5 + ele6 + ele7 + ele8 + ele9;
					sum = sum + ele10 + ele11 + ele12 + ele13 + ele14 + ele15 + ele16;
					sum = sum + ele17 + ele18 + ele9;
					promedio = sum / 19;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 20) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;
					int ele6;
					int ele7;
					int ele8;
					int ele9;
					int ele10;
					int ele11;
					int ele12;
					int ele13;
					int ele14;
					int ele15;
					int ele16;
					int ele17;
					int ele18;
					int ele19;
					int ele20;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					cout<<endl<<"Escribe el sexto numero de la lista ";
					cin>>ele6;

					cout<<endl<<"Escribe el septimo numero de la lista";
					cin>>ele7;

					cout<<endl<<"Escribe el octavo numero de la lista";
					cin>>ele8;

					cout<<endl<<"Escribe el noveno numero de la lista";
					cin>>ele9;

					cout<<endl<<"Escribe el decimo numero de la lista";
					cin>>ele10;

					cout<<endl<<"Escribe el onceavo numero de la lista";
					cin>>ele11;

					cout<<endl<<"Escribe el doceavo numero de la lista";
					cin>>ele12;

					cout<<endl<<"Escribe el treceavo numero de la lista";
					cin>>ele13;

					cout<<endl<<"Escribe el catorceavo numero de la lista";
					cin>>ele14;

					cout<<endl<<"Escribe el quinceavo numero de la lista";
					cin>>ele15;

					cout<<endl<<"Escribe el diesiseisavo numero de la lista";
					cin>>ele16;

					cout<<endl<<"Escribe el diesisieteavo numero de la lista";
					cin>>ele17;

					cout<<endl<<"Escribe el diesiochoavo numero de la lista";
					cin>>ele18;

					cout<<endl<<"Escribe el diesunueveavo numero de la lista";
					cin>>ele19;

					cout<<endl<<"Escribe el vigesimo numero de la lista";
					cin>>ele20;

					sum = ele1 + ele2 + ele3 + ele4 + ele5 + ele6 + ele7 + ele8 + ele9;
					sum = sum + ele10 + ele11 + ele12 + ele13 + ele14 + ele15 + ele16;
					sum = sum + ele17 + ele18 + ele19 + ele20;
					promedio = sum / 20;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 21) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;
					int ele6;
					int ele7;
					int ele8;
					int ele9;
					int ele10;
					int ele11;
					int ele12;
					int ele13;
					int ele14;
					int ele15;
					int ele16;
					int ele17;
					int ele18;
					int ele19;
					int ele20;
					int ele21;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					cout<<endl<<"Escribe el sexto numero de la lista ";
					cin>>ele6;

					cout<<endl<<"Escribe el septimo numero de la lista";
					cin>>ele7;

					cout<<endl<<"Escribe el octavo numero de la lista";
					cin>>ele8;

					cout<<endl<<"Escribe el noveno numero de la lista";
					cin>>ele9;

					cout<<endl<<"Escribe el decimo numero de la lista";
					cin>>ele10;

					cout<<endl<<"Escribe el onceavo numero de la lista";
					cin>>ele11;

					cout<<endl<<"Escribe el doceavo numero de la lista";
					cin>>ele12;

					cout<<endl<<"Escribe el treceavo numero de la lista";
					cin>>ele13;

					cout<<endl<<"Escribe el catorceavo numero de la lista";
					cin>>ele14;

					cout<<endl<<"Escribe el quinceavo numero de la lista";
					cin>>ele15;

					cout<<endl<<"Escribe el diesiseisavo numero de la lista";
					cin>>ele16;

					cout<<endl<<"Escribe el diesisieteavo numero de la lista";
					cin>>ele17;

					cout<<endl<<"Escribe el diesiochoavo numero de la lista";
					cin>>ele18;

					cout<<endl<<"Escribe el diesunueveavo numero de la lista";
					cin>>ele19;

					cout<<endl<<"Escribe el vigesimo numero de la lista";
					cin>>ele20;

					cout<<endl<<"Escribe el vigesimo primer numero de la lista";
					cin>>ele21;

					sum = ele1 + ele2 + ele3 + ele4 + ele5 + ele6 + ele7 + ele8 + ele9;
					sum = sum + ele10 + ele11 + ele12 + ele13 + ele14 + ele15 + ele16;
					sum = sum + ele17 + ele18 + ele19 + ele20 + ele21;
					promedio = sum / 21;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 22) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;
					int ele6;
					int ele7;
					int ele8;
					int ele9;
					int ele10;
					int ele11;
					int ele12;
					int ele13;
					int ele14;
					int ele15;
					int ele16;
					int ele17;
					int ele18;
					int ele19;
					int ele20;
					int ele21;
					int ele22;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					cout<<endl<<"Escribe el sexto numero de la lista ";
					cin>>ele6;

					cout<<endl<<"Escribe el septimo numero de la lista";
					cin>>ele7;

					cout<<endl<<"Escribe el octavo numero de la lista";
					cin>>ele8;

					cout<<endl<<"Escribe el noveno numero de la lista";
					cin>>ele9;

					cout<<endl<<"Escribe el decimo numero de la lista";
					cin>>ele10;

					cout<<endl<<"Escribe el onceavo numero de la lista";
					cin>>ele11;

					cout<<endl<<"Escribe el doceavo numero de la lista";
					cin>>ele12;

					cout<<endl<<"Escribe el treceavo numero de la lista";
					cin>>ele13;

					cout<<endl<<"Escribe el catorceavo numero de la lista";
					cin>>ele14;

					cout<<endl<<"Escribe el quinceavo numero de la lista";
					cin>>ele15;

					cout<<endl<<"Escribe el diesiseisavo numero de la lista";
					cin>>ele16;

					cout<<endl<<"Escribe el diesisieteavo numero de la lista";
					cin>>ele17;

					cout<<endl<<"Escribe el diesiochoavo numero de la lista";
					cin>>ele18;

					cout<<endl<<"Escribe el diesunueveavo numero de la lista";
					cin>>ele19;

					cout<<endl<<"Escribe el vigesimo numero de la lista";
					cin>>ele20;

					cout<<endl<<"Escribe el vigesimo primer numero de la lista";
					cin>>ele21;

					cout<<endl<<"Escribe el vigesimo segundo numero de la lista";
					cin>>ele22;

					sum = ele1 + ele2 + ele3 + ele4 + ele5 + ele6 + ele7 + ele8 + ele9;
					sum = sum + ele10 + ele11 + ele12 + ele13 + ele14 + ele15 + ele16;
					sum = sum + ele17 + ele18 + ele19 + ele20 + ele21 + ele22;
					promedio = sum / 22;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 23) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;
					int ele6;
					int ele7;
					int ele8;
					int ele9;
					int ele10;
					int ele11;
					int ele12;
					int ele13;
					int ele14;
					int ele15;
					int ele16;
					int ele17;
					int ele18;
					int ele19;
					int ele20;
					int ele21;
					int ele22;
					int ele23;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					cout<<endl<<"Escribe el sexto numero de la lista ";
					cin>>ele6;

					cout<<endl<<"Escribe el septimo numero de la lista";
					cin>>ele7;

					cout<<endl<<"Escribe el octavo numero de la lista";
					cin>>ele8;

					cout<<endl<<"Escribe el noveno numero de la lista";
					cin>>ele9;

					cout<<endl<<"Escribe el decimo numero de la lista";
					cin>>ele10;

					cout<<endl<<"Escribe el onceavo numero de la lista";
					cin>>ele11;

					cout<<endl<<"Escribe el doceavo numero de la lista";
					cin>>ele12;

					cout<<endl<<"Escribe el treceavo numero de la lista";
					cin>>ele13;

					cout<<endl<<"Escribe el catorceavo numero de la lista";
					cin>>ele14;

					cout<<endl<<"Escribe el quinceavo numero de la lista";
					cin>>ele15;

					cout<<endl<<"Escribe el diesiseisavo numero de la lista";
					cin>>ele16;

					cout<<endl<<"Escribe el diesisieteavo numero de la lista";
					cin>>ele17;

					cout<<endl<<"Escribe el diesiochoavo numero de la lista";
					cin>>ele18;

					cout<<endl<<"Escribe el diesunueveavo numero de la lista";
					cin>>ele19;

					cout<<endl<<"Escribe el vigesimo numero de la lista";
					cin>>ele20;

					cout<<endl<<"Escribe el vigesimo primer numero de la lista";
					cin>>ele21;

					cout<<endl<<"Escribe el vigesimo segundo numero de la lista";
					cin>>ele22;

					cout<<endl<<"Escribe el vigesimo tercer numero de la lista";
					cin>>ele23;

					sum = ele1 + ele2 + ele3 + ele4 + ele5 + ele6 + ele7 + ele8 + ele9;
					sum = sum + ele10 + ele11 + ele12 + ele13 + ele14 + ele15 + ele16;
					sum = sum + ele17 + ele18 + ele19 + ele20 + ele21 + ele22 + ele23;
					promedio = sum / 23;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos == 24) {
					int ele1;
					int ele2;
					int ele3;
					int ele4;
					int ele5;
					int ele6;
					int ele7;
					int ele8;
					int ele9;
					int ele10;
					int ele11;
					int ele12;
					int ele13;
					int ele14;
					int ele15;
					int ele16;
					int ele17;
					int ele18;
					int ele19;
					int ele20;
					int ele21;
					int ele22;
					int ele23;
					int ele24;

					int promedio;
					int sum;

					system("cls");
					printf("\n\n\n\n");
					cout<<"Escribe el primer numero de la lista ";
					cin>>ele1;

					cout<<endl<<"Escribe el segundo numero de la lista ";
					cin>>ele2;

					cout<<endl<<"Escribe el tercer numero de la lista ";
					cin>>ele3;

					cout<<endl<<"Escribe el cuarto numero de la lista ";
					cin>>ele4;

					cout<<endl<<"Escribe el quinto numero de la lista ";
					cin>>ele5;

					cout<<endl<<"Escribe el sexto numero de la lista ";
					cin>>ele6;

					cout<<endl<<"Escribe el septimo numero de la lista";
					cin>>ele7;

					cout<<endl<<"Escribe el octavo numero de la lista";
					cin>>ele8;

					cout<<endl<<"Escribe el noveno numero de la lista";
					cin>>ele9;

					cout<<endl<<"Escribe el decimo numero de la lista";
					cin>>ele10;

					cout<<endl<<"Escribe el onceavo numero de la lista";
					cin>>ele11;

					cout<<endl<<"Escribe el doceavo numero de la lista";
					cin>>ele12;

					cout<<endl<<"Escribe el treceavo numero de la lista";
					cin>>ele13;

					cout<<endl<<"Escribe el catorceavo numero de la lista";
					cin>>ele14;

					cout<<endl<<"Escribe el quinceavo numero de la lista";
					cin>>ele15;

					cout<<endl<<"Escribe el diesiseisavo numero de la lista";
					cin>>ele16;

					cout<<endl<<"Escribe el diesisieteavo numero de la lista";
					cin>>ele17;

					cout<<endl<<"Escribe el diesiochoavo numero de la lista";
					cin>>ele18;

					cout<<endl<<"Escribe el diesunueveavo numero de la lista";
					cin>>ele19;

					cout<<endl<<"Escribe el vigesimo numero de la lista";
					cin>>ele20;

					cout<<endl<<"Escribe el vigesimo primer numero de la lista";
					cin>>ele21;

					cout<<endl<<"Escribe el vigesimo segundo numero de la lista";
					cin>>ele22;

					cout<<endl<<"Escribe el vigesimo tercer numero de la lista";
					cin>>ele23;

					cout<<endl<<"Escribe el vigesimo cuarto numero de la lista";
					cin>>ele24;

					sum = ele1 + ele2 + ele3 + ele4 + ele5 + ele6 + ele7 + ele8 + ele9;
					sum = sum + ele10 + ele11 + ele12 + ele13 + ele14 + ele15 + ele16;
					sum = sum + ele17 + ele18 + ele19 + ele20 + ele21 + ele22 + ele23 + ele24;
					promedio = sum / 24;

					cout<<"El resultado es: "<<promedio<<endl;

					getch();
					system("cls");
					wait(3);
					aplicaciones(2);
				} else if(elementos > 24) {
					system("cls");
					cout<<"\n\n\n\n";

					style.nbsp(3);
					style.p("alert");

					cout<<"Lo siento, no puede ser mayor a 20 :("<<endl;
					getch();

					system("cls");
					wait(4);
					aplicaciones(2);
				} else {
					system("cls");
					cout<<"\n\n\n\n";

					style.nbsp(3);
					style.p("alert");

					cout<<"Lo siento, no entiendo :("<<endl;
					getch();

					system("cls");
					wait(4);
					aplicaciones(2);
				}
			}
	} else if(app == 3) {
		int seleccionar;
		int hora = 0, h = 0;
		int minuto = 0, m = 0;
		int segundo = 0, s = 0;
		int milisegundo = 0, ms = 0;
		bool crono = true, temp = true;

		style.p("title");
		cout<<"\n\n\n\t\tGESTION DEL TIEMPO";
		color(4);
		cout<<"\n\n\t0. Salir"<<endl;
		style.p("text");
		cout<<"\t1. Cronometro"<<endl<<"\t2. Temporizador"<<endl<<endl<<"\t";
		cout<<">";
		cin>>seleccionar;
		cout<<endl<<endl<<"\t";

		if(seleccionar == 1) {
			crono = true;
			while(crono) {
				if(milisegundo >= 10) {
					milisegundo = 0;
					segundo++;
				}

				if(segundo >= 60) {
					segundo = 0;
					minuto++;
				}

				if(minuto >= 60) {
					minuto = 0;
					hora++;
				}

				if(kbhit()) {
					char tecla = getch();
					if(tecla == 'p') {
						crono = false;
						cout<<"\n\n\n";
						aplicaciones(3);
					}

					if(tecla == 's') {
						crono = false;
						system("cls");
						wait(9);
						elHome();
					}
				}

				system("cls");
				color(11);
				cout<<"\n\n\n\t";
				cout<<"Se ha iniciado un cronÃ³metro, pulsa la tecla 'p' para parar el cronometro, y la 's' para salir";
				cout<<endl<<endl<<"\t";
				cout<<hora<<":"<<minuto<<":"<<segundo<<"."<<milisegundo;
				milisegundo++;
				Sleep(10);
			}
		} else if(seleccionar == 2) {
			temp = true;
			color(1);
			cout<<"\n\n\n\tCONFIGURAR NUEVO TEMPORIZADOR"<<endl<<endl<<"\t";
			color(10);
			cout<<"Cuantos segundos quieres?";
			cin>>s;
			cout<<"\n\tCuantos minutos quieres?";
			cin>>m;
			cout<<"\n\tCuantas horas quieres?";
			cin>>h;

			int segs = s;
			int mins = m;
			int hors = h;

			while(temp) {
				color(11);
				system("cls");
				cout<<endl<<endl<<endl<<"\t\t";
				cout<<"Temporizador de "<<hors<<":"<<mins<<":"<<segs<<endl;
				color(4);
				cout<<"\t\tPresiona la tecla 'p' para pausar o seguir, y la 's' para salir"<<endl<<endl;

				color(11);
				cout<<"\t\t"<<h<<":"<<m<<":"<<s<<" Restantes";
				wait(10);
				s--;

				if(m == 0 && s == 0) {
					h--;
					m = 59;
					s = 60;
				}

				if(s == 0) {
					m--;
					s = 60;
				}

				if(kbhit()) {
					char tecla = getch();
					if(tecla == 'p') {
						temp = false;
						system("cls");
						aplicaciones(3);
					}

					if(tecla == 's') {
						temp = false;
						system("cls");
						wait(9);
						elHome();
					}
				}
			}

			if(h <= 0 && m <= 0 && s <= 0) {
				temp = false;
				color(14);
				cout<<"\n\n\t\tTIEMPO CUMPLIDO!";
				color(4);
				cout<<"\nPresiona una tecla para cambiar";
				getch();
				system("cls");
				wait(13);
				aplicaciones(3);
			}
		} else {
			system("cls");
			elHome();
		}
	} else if(app == 4) {
		// Bloc de notas :D
		bool escribiendo = true;
		string escritura;

		style.p("title");
		cout<<"\n\n\n\t\t\tBLOC DE NOTAS"<<endl<<endl;
		style.p("text");
		cout<<"---------------------------------------------------------"<<endl;
		cout<<"Comandos: escribe '/salir' para salir"<<endl;
		cout<<"Escribe '/color_blue, _yellow, _red, etc.' para el color"<<endl;
		cout<<"---------------------------------------------------------"<<endl<<endl;

		color(8);
		while(escribiendo) {
			cout<<"";
			cin>>escritura;

			if(escritura == "/salir") {
				escribiendo = false;
				system("cls");
				wait(6);
				elHome();
			}

			if(escritura == "/color_blue") {
				color(1);
			} else if(escritura == "/color_green") {
				color(10);
			} else if(escritura == "/color_yellow") {
				color(14);
			} else if(escritura == "/color_red") {
				color(4);
			} else if(escritura == "/color_purple" || escritura == "/color_magenta") {
				color(5);
			} else if(escritura == "/color_cyan" || escritura == "/color_cian") {
				color(11);
			} else if(escritura == "/color_white") {
				color(15);
			} else {
				// No hace nada :P
			}
		}
	}
}

int busquedas = 0;

void internet_explorer() {
	// Declarar variables
	string linea;
	char nombre[250];
	string texto;

	bool salir;
	salir = false;

	// Titulo en el centro de la pantalla
	gotoxy(40, 12);
	color(9);
	cout<<"C";
	color(4);
	cout<<"R";
	color(3);
	cout<<"I";
	color(14);
	cout<<"P";
	color(10);
	cout<<"I";
	color(15);
	cout<<"-";
	color(8);
	cout<<"MAX";

	// Header
	gotoxy(0, 0);
	color(8);
	cout<<"|     Cripi-Max Explorer\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t- [] ";
	color(4);
	cout<<"X |";

	color(4);
	gotoxy(0, 1);
	cout<<"Si quieres salir, escribe 'salir'";

	// URL
	color(11);
	gotoxy(1, 2);
	cout<<"---------------------------------------------------------------------";
	gotoxy(1, 4);
	cout<<"---------------------------------------------------------------------";
	gotoxy(2, 3);
	cout<<"<- -> "<<busquedas<<" | URL: ";
	cin>>nombre;

	if(nombre == "salir") {
		system("cls");
		elHome();
		salir = true;
	} else {
		color(7);
		ifstream archivo(nombre);
		gotoxy(0, 5);
		while(getline(archivo,linea)) {
			texto = "\t" + texto + linea + "\n";
		}

		gotoxy(40, 12);
		printf("            ");

		gotoxy(0, 6);
		cout << texto << endl;
		busquedas++;

		color(4);
		cout<<"PRESIONA UNA TECLA PARA CONTINUAR";
		getch();
		system("cls");
		wait(2);
		if(!salir) {
			internet_explorer();
		}
	}
}

void juegos() {
	int seleccion;
	cout<<endl<<endl<<endl<<endl;
	style.p("title");
	cout<<"\t\tTUS JUEGOS"<<endl<<endl;
	color(4);
	cout<<"\t\t0. Salir"<<endl;
	style.p("text");
	cout<<"\t\t1. Juego de navesitas"<<endl;
	cout<<"\t\t2. Juego de Flappy Bird"<<endl;
	cout<<"\t\t3. Juego de Snake"<<endl;
	color(11);
	cout<<endl<<"\t\t>";
	cin>>seleccion;

	if(seleccion == 1) {
		system("cls");
		juego_naves();
	} else if(seleccion == 2) {
		system("cls");
		juego_flappy_bird();
	} else if(seleccion == 3) {
		system("cls");
		juego_snake();
	} else {
		system("cls");
		wait(4);
		elHome();
	}
}

void juego_snake() {
	pintar();
	gotoxi(xc,yc); printf("%c",4);

	while(tecla != ESC && game_overs()) {
		borrar_cuerpo();
		guardar_posicion();
		pintar_cuerpo();

		comida();
		cambiar_velocidad();
		puntos();

		teclear();
		teclear();
		teclear();

		if(dir == 1) y--;
		if(dir == 2) y++;
		if(dir == 3) x++;
		if(dir == 4) x--;

		Sleep(velocidad);
	}

	pintar();
}

void juego_flappy_bird() {
	setcursor(0,0);
	srand( (unsigned)time(NULL));

	do{
		system("cls");
		colors(14);
		gotoxy(20,5); cout<<" -------------------------- ";
		gotoxy(20,6); cout<<" |      Flappy Bird       | ";
		gotoxy(20,7); cout<<" --------------------------";
		color(2);
		gotoxy(20,9); cout<<"1. Jugar";
		gotoxy(20,10); cout<<"2. Instrucciones";
		color(4);
		gotoxy(20,11); cout<<"3. Cerrar";
		color(11);
		gotoxy(20,13); cout<<"Seleccionar: ";
		char op = getche();

		if( op=='1') play();
		else if( op=='2') instructions();
		else if( op=='3') system("cls"); elHome();

	}while(1);
}

void juego_naves() {
	system("cls");
	wait(8);
	color(14);
	gotoxy(30, 17);
	cout<<"\n\tPresiona la tecla 's' para salir";
	wait(44);
	system("cls");
	wait(9);
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
			if(tecla == 's') {
				system("cls");
				wait(13);
				elHome();
			}
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
		int eleccion;
		system("cls");
		gotoxy(35, 14);
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
		gotoxy(30, 17);
		cout<<"1. Jugar otra vez";
		gotoxy(30, 18);
		cout<<"2. Salir";
		gotoxy(34, 20);
		color(10);
		MostrarCursor();
		cout<<">";
		cin>>eleccion;

		if(eleccion == 1) {
			juego_naves();
		} else {
			system("cls");
			elHome();
		}
	}
}


void user() {
	color(14);
	cout<<endl<<endl<<endl;
	cout<<endl<<"\n\t\tRegistra tu nombre de usuario en la computadora!"<<endl;

	FILE *archivo;
	char nombre[100];
	bool esperar10492 = true;

	color(9);
	cout<<"\t\t\t>";
	cin.getline(nombre, sizeof(nombre));
	archivo = fopen("datos_guardados/user.txt", "w");
	fprintf(archivo, nombre);
	wait(5);
	system("cls");
	cout<<". ";
	wait(10);
	cout<<". ";
	wait(6);
	cout<<".";
	wait(8);
	cout<<"\n\n\t\tBien, ya te registraste! No te volveremos a molestar :)\n\n\n\t\t";

	wait(13);
	for (int i = 6; i > 0; i--) {
		color(4);
		cout<<"Esto se cerrara en "<<i<<endl<<"\t\t";
		wait(10);
	}
	system("cls");
	elHome();
}

void paint() {
	// Variables
	bool dibujando = true;
	bool borrando = false;
	int xm = 10;
	int ym = 14;

	// Paint uwu
	style.p("title");
	cout<<"\n\n\n\t\tPAINT (dibujar en el computador)"<<endl<<endl;
	style.p("text");
	cout<<"\t------------------------------------------------------------"<<endl;
	cout<<"\t\tPresiona la tecla 's' para salir"<<endl;
	cout<<"\t\tPresiona la tecla 'e' para borrar"<<endl;
	color(7);
	cout<<"\t\tCOLORES: ";
	color(1);
	cout<<"tecla 'b' para el azul, ";
	color(4);
	cout<<"tecla 'r' para el rojo, "<<endl;
	color(14);
	cout<<"\t\ttecla 'a' para el amarillo, ";
	color(3);
	cout<<"tecla 'c' para el celeste,"<<endl;
	color(2);
	cout<<"\t\ttecla 'v' para el verde, ";
	color(7);
	cout<<"tecla 'g' para el gris"<<endl;
	cout<<"\t----------------------------------------------------------------"<<endl;

	while(dibujando) {
		gotoxy(xm, ym); printf("*");

		if(kbhit() && !borrando) {
			char tecla = getch();

			// Detectar movimientos de la brocha
			if(tecla == DERECHA) xm++;
			if(tecla == IZQUIERDA) xm--;
			if(tecla == ARRIBA) ym--;
			if(tecla == ABAJO) ym++;

			// Detectar todos los colores
			if(tecla == 'b') color(1);
			if(tecla == 'r') color(4);
			if(tecla == 'a') color(14);
			if(tecla == 'c') color(11);
			if(tecla == 'v') color(2);
			if(tecla == 'g') color(7);
			if(tecla == 'e') color(0);

			// FunciÃ³n para salir
			if(tecla == 's') {
				dibujando = false;
				system("cls");
				wait(4);
				elHome();
			}
		}
	}
}

string linea;
string texto;
bool eligiendo_archivo = true;

void memoria_archivos() {
	string dir;
	ifstream user("datos_guardados/user.txt");

	cout<<"Para salir, escribe 'salir', 'getout' o 'close'\n";

	while(getline(user, linea)) {
		texto = texto + linea;
	}
	user.close();
	style.p("text");

	while(eligiendo_archivo == true) {
		cout<<endl<<"\tC:/"<<texto<<">";
		getline(cin, dir);

		if(dir == "salir" || dir == "getout" || dir == "close") {
			eligiendo_archivo = false;
			system("cls");
			elHome();
		} else if(dir == "escritorio" || dir == "desktop") {
			string dirdesk;
			cout<<endl<<"\tdesktop>";
			cin>>dirdesk;

			if(dirdesk == "files" || dirdesk == "dir" || dirdesk == "all") {
				string dirdeskf;

				color(10);
				cout<<endl<<endl<<"\tFILES:"<<endl;
				cout<<"\tdescargas (folder)"<<endl;
				cout<<"\tbloc de notas.exe"<<endl;
				cout<<"\tcalculadora.exe"<<endl;
				cout<<"\tcripi-max explorer.exe"<<endl;
				cout<<"\tjuegos.exe"<<endl;
				cout<<"\tpaint.exe"<<endl;
				cout<<"\treloj.exe"<<endl;

				color(9);
			} else if(dirdesk == "descargas") {
				system("cls");
				cout<<"\tVACIO"<<endl;
				cout<<"Presiona una tecla para continuar...";

				getch();
				system("cls");
				memoria_archivos();
			} else if(dirdesk == "bloc de notas.exe" || dirdesk == "blocdenotas.exe" || dirdesk == "notepad.exe" || dirdesk == "bloc_de_notas_exe") {
				system("cls");
				wait(5);
				aplicaciones(4);
			} else if(dirdesk == "calculadora.exe" || dirdesk == "calculadora") {
				system("cls");
				wait(3);
				aplicaciones(2);
			} else if(dirdesk == "cripi-max explorer.exe" || dirdesk == "cm explorer.exe" || dirdesk == "cripi-max explorer" || dirdesk == "explorer" || dirdesk == "explorer.exe") {
				system("cls");
				wait(4);
				internet_explorer();
			} else if(dirdesk == "juegos.exe" || dirdesk == "juegos" || dirdesk == "games.exe") {
				system("cls");
				wait(4);
				juegos();
			} else if(dirdesk == "paint.exe" || dirdesk == "draw.exe" || dirdesk == "paint" || dirdesk == "draw") {
				system("cls");
				wait(2);
				paint();
			} else if(dirdesk == "reloj.exe" || dirdesk == "reloj") {
				system("cls");
				wait(2);
				aplicaciones(3);
			} else {
				cout<<"no encontrado"<<endl;
			}
		} else if(dir == "documentos" || dir == "documents" || dir == "docs") {
			string dirdocs;
			cout<<endl<<"\tdocuments>";
			cin>>dirdocs;

			if(dirdocs == "files" || dirdocs == "dir") {
				system("cls");
				cout<<"nothing here yet";
			}
		} else if(dir == "este equipo" || dir == "this team" || dir == "this" || dir == "cripimax" || dir == "cripi" || dir == "cripi max") {
			string dircrmx;
			cout<<endl<<"\tcripi>";
			cin>>dircrmx;

			if(dircrmx == "files" || dircrmx == "dir") {
				color(10);
				cout<<"\tFILES:"<<endl;
				cout<<"\tdatos_guardados (f)"<<endl;
				cout<<"\thttps (f)"<<endl;
				cout<<"\tjuegos (f)"<<endl;
				cout<<"\tCripi-MAX.exe"<<endl;
				cout<<"\tCripi-Max os.cpp"<<endl;
				color(9);
			} else if(dircrmx == "datos_guardados") {
				cout<<endl<<"\t\tuser.txt";
				cout<<"\t\t"<<texto<<endl;
				color(9);
			} else if(dircrmx == "https") {
				cout<<endl<<"\t\tNo tienes acceso a la carpeta :("<<endl;
				cout<<"\t\tNo la puedes manipular por questiones de seguridad"<<endl;
			} else if(dircrmx == "juegos") {
				color(4);
				cout<<"\t\tPara ver la carpeta, debes ir a >desktop>"<<endl;
				color(9);
			} else if(dircrmx == "Cripi-MAX.exe") {
				color(4);
				cout<<"Estas en ese archivo!"<<endl;
				color(9);
			} else if(dircrmx == "Cripi-Max os.cpp") {
				color(4);
				cout<<"Lo siento, no puedes abrir el archivo, este contiene todos los datos que"<<endl;
				cout<<"hacen funcionar al computador, si lo manipulas o hacer algo que no debiste,"<<endl;
				cout<<"te vas a quedar sin la computadora, es muy peligroso manipular este tipo de"<<endl;
				cout<<"datos, ya que si copias y pegas algo puedes destruir tu sistema operativo."<<endl;
				color(9);
			} else {
				color(4);
				cout<<"el comando no existe"<<endl;
				color(9);
			}
		} else if(dir == "dir" || dir == "files") {
			color(10);
			cout<<endl<<"FILES:"<<endl;
			cout<<"Cripi (f):"<<endl;
			cout<<"\tdatos_guardados (f)"<<endl;
			cout<<"\thttps (f)"<<endl;
			cout<<"\tjuegos (f)"<<endl;
			cout<<"\tCripi-MAX.exe"<<endl;
			cout<<"\tCripi-Max os.cpp"<<endl;
			cout<<"Desktop (f):"<<endl;
			cout<<"\tdescargas (f)"<<endl;
			cout<<"\tbloc de notas.exe"<<endl;
			cout<<"\tcalculadora.exe"<<endl;
			cout<<"\tcripi-max explorer.exe"<<endl;
			cout<<"\tjuegos.exe"<<endl;
			cout<<"\tpaint.exe"<<endl;
			cout<<"\treloj.exe"<<endl;
			cout<<"Documents (f)"<<endl;
			color(9);
		} else if(dir == "colors" || dir == "color" || dir == "colores") {
			color(1);
			cout<<endl<<"\tAzul (1)";
			color(2);
			cout<<"\n\tVerde oscuro (2)";
			color(3);
			cout<<"\n\tCian (3)";
			color(4);
			cout<<"\n\tRojo (4)";
			color(5);
			cout<<"\n\tMagenta (5)";
			color(6);
			cout<<"\n\tMarron (6)";
			color(7);
			cout<<"\n\tGris claro (7)";
			color(8);
			cout<<"\n\tGris oscuro (8)";
			color(9);
			cout<<"\n\tAzul claro (9)";
			color(10);
			cout<<"\n\tVerde claro (10)";
			color(11);
			cout<<"\n\tCian claro (11)";
			color(12);
			cout<<"\n\tRojo claro (12)";
			color(13);
			cout<<"\n\tMagenta claro (13)";
			color(14);
			cout<<"\n\tAmarillo (14)";
			color(15);
			cout<<"\n\tBlanco (15)";
			color(128);
			cout<<"\n\tParpadeo (128)";
			cout<<endl;
		} else {
			color(4);
			cout<<"El comando o archivo que especifico no existe :("<<endl;
			color(9);
		}
	}
}

class DINERO {
	public:
		// El sistema de niveles
		bool niveluno;
		bool niveldos;
		bool niveltres;
		// Las funciones
		void trabajar();
		void comprar();
		void agregar();
};

class OBJETOS_COMPRAR {
	public:
		void mejor_procesador();
		void generador(int nivel);
		void nft();
		void casa();
		void gato(int parametro);
};

void DINERO::trabajar() {
	DINERO din;

	int elegir;
	int valor = 0;
	niveluno = true;
	niveldos = false;
	niveltres = false;

	color(1);
	cout<<"\n\n\n\t\tTRABAJAR"<<endl<<endl;
	color(2);
	cout<<"\t\tNivel 1:"<<endl;
	cout<<"\t\t\t1.- Trabajar de barrendero"<<endl;
	cout<<"\t\t\t2.- Trabajar en una panaderia"<<endl;
	cout<<"\t\t\t3.- Trabajar en Walmart"<<endl<<endl;
	color(9);
	cout<<"\t\tNivel 2:"<<endl;
	cout<<"\t\t\t4.- Trabajar en una pizzeria"<<endl;
	cout<<"\t\t\t5.- Trabajar de UBER"<<endl;
	cout<<"\t\t\t6.- Trabajar de albanil"<<endl<<endl;
	color(6);
	cout<<"\t\tNivel 3:"<<endl;
	cout<<"\t\t\t7.- Trabajar en un Call Center"<<endl;
	cout<<"\t\t\t8.- Trabajar en una oficina de trabajo"<<endl;
	cout<<"\t\t\t9.- Trabajar de programador"<<endl<<endl;

	// AquÃ­ las condiciones de los niveles
	if(dinerooo >= 1000) {
		niveldos = true;
	}

	if(dinerooo >= 4000) {
		niveltres = true;
	}

	color(14);
	cout<<"Elige >";
	cin>>elegir;

	if(elegir == 1 || elegir == 2 || elegir == 3) {
		// Los trabajos de nivel 1
		system("cls");
		wait(9);
		cout<<"\n\n\t\tTra";
		wait(5);
		cout<<"ba";
		wait(5);
		cout<<"jan";
		wait(5);
		cout<<"do ";
		wait(6);
		cout<<".";
		wait(6);
		cout<<".";
		wait(6);
		cout<<".";

		valor = 67 + rand() % 160;
		cout<<"\n\n\n\t\t";
		cout<<"Felicidades!, ganaste $"<<valor;
		dinerooo = dinerooo + valor;
		wait(7);
		cout<<"\n\nAhora tienes $"<<dinerooo<<"!";

		getch();
		system("cls");
		wait(4);
		dinero();
	} else if(elegir == 4 && niveldos == true || elegir == 5 && niveldos == true || elegir == 6 && niveldos == true) {
		// Los trabajos de nivel 2
		system("cls");
		wait(9);
		cout<<"\n\n\t\tTra";
		wait(5);
		cout<<"ba";
		wait(5);
		cout<<"jan";
		wait(5);
		cout<<"do ";
		wait(6);
		cout<<".";
		wait(6);
		cout<<".";
		wait(6);
		cout<<".";

		valor = 80 + rand() % 200;
		cout<<"\n\n\n\t\t";
		cout<<"Felicidades!, ganaste $"<<valor;
		dinerooo = dinerooo + valor;
		wait(7);
		cout<<"\n\nAhora tienes $"<<dinerooo<<"!";

		getch();
		system("cls");
		wait(4);
		dinero();
	} else if(elegir == 7 && niveltres == true || elegir == 8 && niveltres == true) {
		// Los trabajos nivel 3 (de call center y en una oficina de trabajo)
		system("cls");
		wait(9);
		cout<<"\n\n\t\tTra";
		wait(5);
		cout<<"ba";
		wait(5);
		cout<<"jan";
		wait(5);
		cout<<"do ";
		wait(6);
		cout<<".";
		wait(6);
		cout<<".";
		wait(6);
		cout<<".";

		valor = 160 + rand() % 280;
		cout<<"\n\n\n\t\t";
		cout<<"Felicidades!, ganaste $"<<valor;
		dinerooo = dinerooo + valor;
		wait(7);
		cout<<"\n\nAhora tienes $"<<dinerooo<<"!";

		getch();
		system("cls");
		wait(4);
		dinero();
	} else if(elegir == 9 && niveltres == true) {
		// El de programador, el cual es especial :>
		system("cls");
		wait(9);
		cout<<"\n\n\t\tTra";
		wait(5);
		cout<<"ba";
		wait(5);
		cout<<"jan";
		wait(5);
		cout<<"do ";
		wait(6);
		cout<<".";
		wait(6);
		cout<<".";
		wait(6);
		cout<<".";

		valor = 200 + rand() % 320;
		cout<<"\n\n\n\t\t";
		cout<<"Felicidades!, ganaste $"<<valor;
		dinerooo = dinerooo + valor;
		wait(7);
		cout<<"\n\n\t\tAhora tienes $"<<dinerooo<<"!";

		getch();
		system("cls");
		wait(4);
		dinero();
	} else {
		system("cls");
		wait(2);
		style.p("alert");
		cout<<"\n\n\n\n\t\t\tNo tienes el nivel suficiente para ese nivel :(";
		getch();
		system("cls");
		wait(4);
		din.trabajar();
	}
}

void DINERO::agregar() {
	int dinero_a_agregar;
	DINERO din;

	style.p("title");
	cout<<"\n\n\t\tAGREGAR DINERO";
	style.p("text");
	cout<<endl<<endl<<"\t\tMaximo de $100";
	cout<<endl<<"\t\tCuanto dinero quieres agregar? ";
	cin>>dinero_a_agregar;

	if(dinero_a_agregar >= 200) {
		style.p("alert");
		cout<<"\n\n";
		cout<<"\t\tLo siento la cantidad es mayor a $100 :(";
		getch();
		system("cls");
		wait(5);
		din.agregar();
	} else {
		dinerooo = dinerooo + dinero_a_agregar;

		cout<<"\n\n";
		cout<<"\t\tFelicidades!\nHas agregado a tu cuenta $"<<dinero_a_agregar<<"\n";
		cout<<"\t\tAhora tienes $"<<dinerooo<<"!";
		getch();
		system("cls");
		wait(3);
		dinero();
	}
}

void DINERO::comprar() {
	DINERO din;
	OBJETOS_COMPRAR objetos;

	bool salir;
	salir = false;
	int x = 14;
	int y = 9;
	int flecha = 5;
	int precio;

	OcultarCursor();

	style.p("title");
	cout<<"\n\n\t\t\tTU DINERO:"<<endl;
	printf("\t\t%c ", 5);
	cout<<dinerooo<<endl<<endl;
	style.p("text");
	printf("\t\tCOMPRAR OBJETOS");
	cout<<"\n\n\t\t";
	gotoxy(18, 8);
	cout<<"Un mejor procesador";
	gotoxy(18, 9);
	cout<<"Generador de dinero automatico";
	gotoxy(18, 10);
	cout<<"Un mejor generador de dinero";
	gotoxy(18, 11);
	cout<<"Una casa";
	gotoxy(18, 12);
	cout<<"Un gato xd";
	gotoxy(18, 13);
	style.p("alert");
	cout<<"Salir";

	style.p("text");

	/*
	Un mejor procesador
	Generador de dinero automÃ¡tico
	Un mejor generador de dinero
	Comprar algÃºn NFT
	Una manzana ._.xd
	Una casa personalizable
	Un carro
	*/

	while(!salir) {
		gotoxy(x, y);
		printf("==>");

		if(kbhit()) {
			char tecla = getch();
			gotoxy(x, y); printf("   ");
			gotoxy(46, 5);
			cout<<"      ";
			gotoxy(54, 5);
			cout<<"    ";

			if(tecla == ARRIBA && y > 8) {
				y--;
				flecha++;
			}

			if(tecla == ABAJO && y < 13) {
				y++;
				flecha--;
			}

			if(tecla == ENTER) {
				MostrarCursor();

				if(dinerooo >= precio) {
					switch(flecha) {
						case 6:
							// Un mejor procesador
							objetos.mejor_procesador();
							salir = true;
							dinerooo = dinerooo - precio;
							break;
						case 5:
							// Generador de dinero automatico
							objetos.generador(1);
							salir = true;
							dinerooo = dinerooo - precio;
							break;
						case 4:
							// Un mejor generador de dinero
							objetos.generador(2);
							salir = true;
							dinerooo = dinerooo - precio;
							break;
						case 3:
							// Una casa personalizable
							objetos.casa();
							salir = true;
							dinerooo = dinerooo - precio;
							break;
						case 2:
							// Un gato xd
							objetos.gato(1);
							salir = true;
							dinerooo = dinerooo - precio;
							break;
						case 1:
							// La opcion de salir loco
							system("cls");
							wait(5);
							dinero();
					}
				}

				if(dinerooo <= precio) {
					system("cls");
					style.p("alert");

					cout<<"\n\n\n";
					style.nbsp(2);
					cout<<"Los sentimos, no tienes el dinero suficiente"<<endl;
					style.nbsp(2);
					cout<<"como para comprar el producto :(";

					getch();
					system("cls");
					wait(2);

					DINERO din;
					din.comprar();
				}
			}
		}

		switch(flecha) {
				case 6:
					precio = 834;
					break;
				case 5:
					precio = 978;
					break;
				case 4:
					precio = 1498;
					break;
				case 3:
					precio = 1395;
					break;
				case 2:
					precio = 1089;
					break;
				case 1:
					precio = 0;
					break;
				case 0:
					precio = 0;
		}

		gotoxy(45, 5);
		cout<<"Precio: $";
		gotoxy(54, 5);
		cout<<precio;
	}
}

void OBJETOS_COMPRAR::mejor_procesador() {
	bool salir = false;
	string opcion;

	system("cls");
	wait(2);
	cout<<endl<<endl;
	style.p("alert");
	style.nbsp(2);
	cout<<"Seguro de que quieres comprar un mejor procesador?\n";
	style.nbsp(2);

	cout<<"'si' o 'no'?"<<endl;
	cin>>opcion;

	if(opcion == "si" || opcion == "Si") {
		kernel(6);
		cout<<"\n\n";
		style.nbsp(2);
		cout<<"Felicidades!"<<endl;
		style.nbsp(2);
		printf("Se le ha a%cadido 10 de capacidad de el procesador!", 164);
		getch();

		system("cls");
		wait(4);
		elHome();
	} else if(opcion == "no" || opcion == "No") {
		system("cls");
		wait(4);

		DINERO din;
		din.comprar();
	} else {
		system("cls");
		wait(2);
		OBJETOS_COMPRAR::mejor_procesador();
	}
}

void OBJETOS_COMPRAR::generador(int nivel) {
	if(nivel == 1) {
		bool parar;
		parar = false;

		system("cls");
		wait(7);

		while(!parar) {
			system("cls");
			cout<<endl<<endl<<endl;
			style.nbsp(2);
			style.p("alert");
			cout<<"Presiona 'p' para parar";
			cout<<endl<<endl;
			style.nbsp(2);
			cout<<"Se esta generando $5 por segundo";
			dinerooo = dinerooo + 5;

			if(kbhit()) {
				char tecla = getch();

				if(tecla == 'p') {
					parar = true;
					system("cls");
					wait(6);
					DINERO din;
					din.comprar();
				}
			}

			wait(10);
		}
	}

	if(nivel == 2) {
		bool parar;
		parar = false;

		system("cls");
		wait(7);

		while(!parar) {
			system("cls");
			cout<<endl<<endl<<endl;
			style.nbsp(2);
			style.p("alert");
			cout<<"Presiona 'p' para parar";
			cout<<endl<<endl;
			style.nbsp(2);
			cout<<"Se esta generando $60 por segundo";
			dinerooo = dinerooo + 60;

			if(kbhit()) {
				char tecla = getch();

				if(tecla == 'p') {
					parar = true;
					system("cls");
					wait(6);
					DINERO din;
					din.comprar();
				}
			}

			wait(10);
		}
	}
}

void OBJETOS_COMPRAR::casa() {
	int x = 70;
	int y = 7;

	system("cls");
	cout<<endl<<endl;
	style.nbsp(3);
	style.p("title");

	cout<<"TU CASITA";

	style.p("text");

	/*

	Dibujar la casa:

	*/

	// Las paredes
	gotoxy(8, 5); printf("%c", 219);
	gotoxy(8, 6); printf("%c", 219);
	gotoxy(8, 7); printf("%c", 219);
	gotoxy(8, 8); printf("%c", 219);
	gotoxy(8, 9); printf("%c", 219);
	gotoxy(8, 10); printf("%c", 219);
	gotoxy(8, 11); printf("%c", 219);
	gotoxy(8, 12); printf("%c", 219);
	gotoxy(8, 13); printf("%c", 219);
	gotoxy(8, 14); printf("%c", 219);
	gotoxy(8, 15); printf("%c", 219);
	gotoxy(8, 16); printf("%c", 219);
	gotoxy(8, 17); printf("%c", 219);
	gotoxy(8, 18); printf("%c", 219);
	gotoxy(8, 19); printf("%c", 219);
	gotoxy(8, 20); printf("%c", 219);
	gotoxy(8, 21); printf("%c", 219);
	gotoxy(8, 22); printf("%c", 219);
	gotoxy(8, 23); printf("%c", 219);
	gotoxy(8, 24); printf("%c", 219);
	gotoxy(8, 25); printf("%c", 219);
	gotoxy(8, 26); printf("%c", 219);

	gotoxy(80, 6); printf("%c", 219);
	gotoxy(80, 7); printf("%c", 219);
	gotoxy(80, 8); printf("%c", 219);
	gotoxy(80, 9); printf("%c", 219);
	gotoxy(80, 10); printf("%c", 219);
	gotoxy(80, 11); printf("%c", 219);
	gotoxy(80, 12); printf("%c", 219);
	gotoxy(80, 13); printf("%c", 219);
	gotoxy(80, 14); printf("%c", 219);
	gotoxy(80, 15); printf("%c", 219);
	gotoxy(80, 16); printf("%c", 219);
	gotoxy(80, 17); printf("%c", 219);
	gotoxy(80, 18); printf("%c", 219);
	gotoxy(80, 19); printf("%c", 219);
	gotoxy(80, 20); printf("%c", 219);
	gotoxy(80, 21); printf("%c", 219);
	gotoxy(80, 22); printf("%c", 219);
	gotoxy(80, 23); printf("%c", 219);
	gotoxy(80, 24); printf("%c", 219);
	gotoxy(80, 25); printf("%c", 219);
	gotoxy(80, 26); printf("%c", 219);

	// 27
	gotoxy(53, 6);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);

	// 45
	gotoxy(9, 5);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
	gotoxy(9, 26);

	// 72
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);

	// Paredes de adentro de la casa dksajdsjkdsajlkdw

	/*
	int i;
	int j;

	for(i = 0; i < 12; i++) {
		gotoxy(53, 6 + i);
		printf("%c", 219);
	}

	for(j = 0; j < 26; j++) {
		gotoxy(9 + j, 16);
		printf("%c", 219);
	}
	*/

	// Bucle para que el jugador
	bool salir = false;
	while(!salir){
		gotoxy(x, y);
		printf("*");

		if(kbhit()) {
			gotoxy(x, y);
			printf(" ");

			char tecla;
			tecla = getch();

			if(tecla == ARRIBA && y > 7) {
				y--;
			}

			if(tecla == ABAJO && y < 25) {
				y++;
			}

			if(tecla == IZQUIERDA && x > 9) {
				x--;
			}

			if(tecla == DERECHA && x < 79) {
				x++;
			}
		}
	}
}

class Cat {
	public:
		Cat();

		bool one;
		bool two;
		bool three;
		bool four;
		bool five;
		bool six;
};

Cat::Cat() {
	one = false;
	two = false;
	three = false;
	four = false;
	five = false;
	six = false;
}

void OBJETOS_COMPRAR::gato(int parametro) {
	Cat gato;

	if(parametro == 1) {
		int cats;
		cats = 0;

		bool selecting_cat;
		selecting_cat = true;

		string line;

		Cat gats;

	    ifstream catOne("imgs/gato1.txt");
	    ifstream catTwo("imgs/gato2.txt");
	    ifstream catThree("imgs/gato3.txt");
	    ifstream catFour("imgs/gato4.txt");
	    ifstream catFive("imgs/gato5.txt");
	    ifstream catSix("imgs/gato6.txt");

		style.p("title");
		system("cls");
		cout<<endl<<endl<<endl;
		cout<<"\t\tELIGE TU GATO"<<endl<<endl;

		style.p("text");
		while(selecting_cat) {
			if(cats >= 6) {
				cats = 1;
				OBJETOS_COMPRAR objs;
				objs.gato(1);
			}

			if(cats == 1) {
				system("cls");
				cout<<endl<<endl<<endl;
				cout<<"\t\tELIGE TU GATO"<<endl<<endl;

				if(catOne.is_open()) {
			        while(getline(catOne, line)) {
			            cout<<line<<endl;
			        }
		    	} else {
		        	cout<<"FATAL ERROR: CAT FILE COULD NOT BE LOADED!"<<endl;
		    	}
			} else if(cats == 2) {
				system("cls");
				cout<<endl<<endl<<endl;
				cout<<"\t\tELIGE TU GATO"<<endl<<endl;

				if(catTwo.is_open()) {
					while(getline(catTwo,line)) {
						cout<<line<<endl;
					}
				} else {
					cout<<"FATAL ERROR: CAT FILE COULD NOT BE LOADED!"<<endl;
				}
			} else if(cats == 3) {
				system("cls");
				cout<<endl<<endl<<endl;
				cout<<"\t\tELIGE TU GATO"<<endl<<endl;

				if(catThree.is_open()) {
					while(getline(catThree, line)) {
						cout<<line<<endl;
					}
				} else {
					cout<<"FATAL ERROR: CAT FILE COULD NOT BE LOADED!"<<endl;
				}
			} else if(cats == 4) {
				system("cls");
				cout<<endl<<endl<<endl;
				cout<<"\t\tELIGE TU GATO"<<endl<<endl;

				if(catFour.is_open()) {
					while(getline(catFour, line)) {
						cout<<line<<endl;
					}
				} else {
					cout<<"FATAL ERROR: CAT FILE COULD NOT BE LOADED!"<<endl;
				}
			} else if(cats == 5) {
				system("cls");
				cout<<endl<<endl<<endl;
				cout<<"\t\tELIGE TU GATO"<<endl<<endl;

				if(catFive.is_open()) {
					while(getline(catFive, line)) {
						cout<<line<<endl;
					}
				} else {
					cout<<"FATAL ERROR: CAT FILE COULD NOT BE LOADED!"<<endl;
				}
			} else if(cats == 6) {
				system("cls");
				cout<<endl<<endl<<endl;
				cout<<"\t\tELIGE TU GATO"<<endl<<endl;

				if(catSix.is_open()) {
					while(getline(catSix, line)) {
						cout<<line<<endl;
					}
				} else {
					cout<<"FATAL ERROR: CAT FILE COULD NOT BE LOADED!"<<endl;
				}
			}

			getch();
			if(kbhit()) {
				char tecla = getch();

				if(tecla == DERECHA) {
					cats++;
				}

				if(tecla == ENTER) {
					selecting_cat = false;
					system("cls");

					gotoxy(20, 6);
					cout<<"FELICIDADES! AHORA HAS COMPRADO EL GATO NUMERO "<<cats<<"!!!!";

					getch();
					system("cls");
					wait(3);
					elHome();
				}
			}
		}
	} else if(parametro == 2) {
		style.p("title");

		cout<<endl<<endl<<endl<<endl;
		cout<<"\t\t\t";
		cout<<"TU LISTA DE GATOS:"<<endl<<endl<<endl;

		if(gato.one) {
			cout<<"\tGato #1: Parado"<<endl;
		}

		if(gato.two) {
			cout<<"\tGato #2: Gato-Nocturno"<<endl;
		}

		if(gato.three) {
			gato.three == true;
			cout<<"\tGato #3: Acostadin"<<endl;
		}

		if(gato.four == true) {
			cout<<"\tGato #4: Sentadito"<<endl;
		}

		if(gato.five == true) {
			cout<<"\tGato #5: Observador"<<endl;
		}

		if(gato.six == true) {
			cout<<"\tGato #6: Gato-Caja"<<endl;
		}

		cout<<endl<<endl<<endl<<"\tPresiona una tecla para salir..."<<endl;
		getch();
		system("cls");
		wait(3);
		elHome();
	}
}

void dinero() {
	DINERO din;

	int opcion_selec = 4;
	int x = 14;
	int y = 6;
	bool salir = false;

	color(6);
	cout<<"\n\n\t\t\tTU DINERO:"<<endl;
	printf("\t\t%c ", 5);
	cout<<dinerooo<<endl<<endl;
	color(2);
	gotoxy(18, 6);
	printf("Trabajar para ganar dinero");
	gotoxy(18, 7);
	printf("Agregar dinero a tu cuenta");
	gotoxy(18, 8);
	printf("Comprar algo");
	gotoxy(18, 9);
	color(4);
	printf("Salir");
	color(6);

	while(!salir) {
		OcultarCursor();
		gotoxy(x, y); printf("==>");

		if(kbhit()) {
			char tecla = getch();
			gotoxy(x, y); printf("   ");

			if(tecla == ARRIBA && y >= 7) {
				y--;
				opcion_selec++;
			}

			if(tecla == ABAJO && y <= 8) {
				y++;
				opcion_selec--;
			}

			if(tecla == ENTER) {
				MostrarCursor();

				switch(opcion_selec) {
					case 1:
						salir = true;
						system("cls");
						wait(2);
						elHome();
						break;
					case 2:
						salir = true;
						system("cls");
						wait(2);
						din.comprar();
						break;
					case 3:
						salir = true;
						system("cls");
						wait(6);
						din.agregar();
						break;
					case 4:
						salir = true;
						system("cls");
						wait(3);
						din.trabajar();
					break;
				}
			}

			gotoxy(4, 13);
			cout<<opcion_selec;
		}
	}
}

// Las apps que se pueden instalar
/*
	void vadmin_juegos();
	void vdb();
	void vmecanografia();
	void vide();
	void vantivirus();
	void vsp_games();
	void vmensajes();
	void vmusica();
*/

void Apps::shop() {
	system("cls");
	OcultarCursor();

	bool selecting;
	int opcion;
	int x;
	int y;

	selecting = true;
	opcion = 1;
	x = 6;
	y = 5;

	gotoxy(10, 2);
	style.p("title");

	cout<<"CRIPI-MAX STORE (APPS)";
	style.p("text");

	gotoxy(10, 5);
	printf("Musica %c", 14);

	gotoxy(28, 5);
	printf("Administrador de juegos %c", 16);

	gotoxy(10, 7);
	printf("Mensajes %c", 19);

	gotoxy(28, 7);
	printf("Base de datos %c", 15);

	gotoxy(28, 9);
	printf("Mecanografia %c", 20);

	gotoxy(10, 11);
	printf("Antivirus %c", 156);

	gotoxy(28, 11);
	printf("Compilador %c", 219);

	style.p("alert");
	gotoxy(10, 13);
	printf("Salir");

	style.p("text");
	while(selecting) {
		gotoxy(x, y);
		cout<<"==>";

		if(kbhit()) {
			gotoxy(x, y);
			printf("   ");

			char tecla;
			tecla = getch();

			if(tecla == DERECHA && x <= 6) {
				x = x + 18;
				opcion = opcion + 1;
			}

			if(tecla == IZQUIERDA && x >= 24) {
				x = x - 18;
				opcion = opcion - 1;
			}

			if(tecla == ARRIBA && y >= 6) {
				y--;
				y--;

				opcion = opcion - 2;
			}

			if(tecla == ABAJO && y <= 11) {
				y++;
				y++;

				opcion = opcion + 2;
			}

			if(tecla == ENTER) {
				Apps apps;

				switch(opcion) {
					case 1:
						selecting = false;
						system("cls");
						wait(2);
						apps.showing("musica");
						break;
					case 2:
						selecting = false;
						system("cls");
						wait(2);
						apps.showing("administrador de juegos");
						break;
					case 3:
						selecting = false;
						system("cls");
						wait(2);
						apps.showing("mensajes");
						break;
					case 4:
						selecting = false;
						system("cls");
						wait(2);
						apps.showing("base de datos");
						break;
					case 6:
						selecting = false;
						system("cls");
						wait(3);
						apps.showing("mecanografia");
						break;
					case 7:
						selecting = false;
						system("cls");
						wait(2);
						apps.showing("antivirus");
						break;
					case 8:
						selecting = false;
						system("cls");
						wait(3);
						apps.showing("visual ide");
						break;
					default:
						selecting = false;
						system("cls");
						wait(3);
						elHome();
						break;
				}
			}
		}
	}
}

void Apps::showing(string shows) {
	ifstream music("imgs/music.txt");
	string line;

	int igriega = 5;
	int y = 7;
	int opcio = 1;
	bool seleccio = true;

	if(shows == "musica") {
		gotoxy(15, 2);
		style.p("title");

		cout<<"Cripi-Max Store";

		while(getline(music, line)) {
			gotoxy(5, igriega);
			cout<<line<<endl;

			igriega++;
		}

		gotoxy(31, 5);
		style.p("text");
		printf("Musica %c%c", 14, 13);

		gotoxy(36, 7);
		style.p("greenalert");
		printf("Instalar ahora");

		gotoxy(36, 8);
		style.p("alert");
		printf("Volver");

		while(seleccio) {
			style.p("text");
			gotoxy(33, y);
			printf("=>");

			if(kbhit()) {
				gotoxy(33, y);
				printf("  ");

				char tecla = getch();

				if(tecla == ABAJO && opcio < 2) {
					y++;
					opcio++;
				}

				if(tecla == ARRIBA && opcio > 1) {
					y--;
					opcio--;
				}

				if(tecla == ENTER) {
					seleccio = false;

					if(opcio == 2) {
						system("cls");
						wait(3);

						Apps apps;
						apps.shop();
					} else {
						Apps apps;
						system("cls");
						bool installing = true;
						style.p("greenalert");
						gotoxy(15, 6);
						printf("INSTALANDO\n");

						gotoxy(11, 7);
						int ddoottss = 0;

						while(installing) {
							printf(". ");
							wait(11);

							ddoottss++;

							if(ddoottss > 10) {
								installing = false;
							}
						}

						musica = true;

						if(musica == true) {
							gotoxy(9, 9);
							cout<<"Se ha instalado correctamente su programa";

							gotoxy(9, 10);
							cout<<"Si desea ejecutarlo, vaya a 'todos los programas' y lo encontrara";

							getch();
							system("cls");
							wait(2);
							elHome();
						} else {
							style.p("alert");
							cout<<"No se pudo instalar por alguna razon desconocida :("<<endl;

							getch();
							system("cls");
							wait(5);
							elHome();
						}
					}
				}
			}
		}
	} else if(shows == "administrador de juegos") {
		gotoxy(15, 2);
		style.p("title");

		cout<<"Cripi-Max Store";

		while(getline(music, line)) {
			gotoxy(5, igriega);
			cout<<line<<endl;

			igriega++;
		}

		gotoxy(31, 5);
		style.p("text");
		printf("Administrador de juegos %c", 16);

		gotoxy(36, 7);
		style.p("greenalert");
		printf("Instalar ahora");

		gotoxy(36, 8);
		style.p("alert");
		printf("Volver");

		while(seleccio) {
			style.p("text");
			gotoxy(33, y);
			printf("=>");

			if(kbhit()) {
				gotoxy(33, y);
				printf("  ");

				char tecla = getch();

				if(tecla == ABAJO && opcio < 2) {
					y++;
					opcio++;
				}

				if(tecla == ARRIBA && opcio > 1) {
					y--;
					opcio--;
				}

				if(tecla == ENTER) {
					seleccio = false;

					if(opcio == 2) {
						system("cls");
						wait(3);

						Apps apps;
						apps.shop();
					} else {
						Apps apps;
						system("cls");
						bool installing = true;
						style.p("greenalert");
						gotoxy(15, 6);
						printf("INSTALANDO\n");

						gotoxy(11, 7);
						int ddoottss = 0;

						while(installing) {
							printf(". ");
							wait(11);

							ddoottss++;

							if(ddoottss > 10) {
								installing = false;
							}
						}

						admin_juegos = true;

						if(admin_juegos == true) {
							gotoxy(9, 9);
							cout<<"Se ha instalado correctamente su programa";

							gotoxy(9, 10);
							cout<<"Si desea ejecutarlo, vaya a 'todos los programas' y lo encontrara";

							getch();
							system("cls");
							wait(2);
							elHome();
						} else {
							style.p("alert");
							cout<<"No se pudo instalar por alguna razon desconocida :("<<endl;

							getch();
							system("cls");
							wait(5);
							elHome();
						}
					}
				}
			}
		}
	} else if(shows == "mensajes") {
		gotoxy(15, 2);
		style.p("title");

		cout<<"Cripi-Max Store";

		while(getline(music, line)) {
			gotoxy(5, igriega);
			cout<<line<<endl;

			igriega++;
		}

		gotoxy(31, 5);
		style.p("text");
		printf("Mensajes");

		gotoxy(36, 7);
		style.p("greenalert");
		printf("Instalar ahora");

		gotoxy(36, 8);
		style.p("alert");
		printf("Volver");

		while(seleccio) {
			style.p("text");
			gotoxy(33, y);
			printf("=>");

			if(kbhit()) {
				gotoxy(33, y);
				printf("  ");

				char tecla = getch();

				if(tecla == ABAJO && opcio < 2) {
					y++;
					opcio++;
				}

				if(tecla == ARRIBA && opcio > 1) {
					y--;
					opcio--;
				}

				if(tecla == ENTER) {
					seleccio = false;

					if(opcio == 2) {
						system("cls");
						wait(3);

						Apps apps;
						apps.shop();
					} else {
						Apps apps;
						system("cls");
						bool installing = true;
						style.p("greenalert");
						gotoxy(15, 6);
						printf("INSTALANDO\n");

						gotoxy(11, 7);
						int ddoottss = 0;

						while(installing) {
							printf(". ");
							wait(11);

							ddoottss++;

							if(ddoottss > 10) {
								installing = false;
							}
						}

						mensajes = true;

						if(mensajes == true) {
							gotoxy(9, 9);
							cout<<"Se ha instalado correctamente su programa";

							gotoxy(9, 10);
							cout<<"Si desea ejecutarlo, vaya a 'todos los programas' y lo encontrara";

							getch();
							system("cls");
							wait(2);
							elHome();
						} else {
							style.p("alert");
							cout<<"No se pudo instalar por alguna razon desconocida :("<<endl;

							getch();
							system("cls");
							wait(5);
							elHome();
						}
					}
				}
			}
		}
	} else if(shows == "base de datos") {
		gotoxy(15, 2);
		style.p("title");

		cout<<"Cripi-Max Store";

		while(getline(music, line)) {
			gotoxy(5, igriega);
			cout<<line<<endl;

			igriega++;
		}

		gotoxy(31, 5);
		style.p("text");
		printf("Base de datos");

		gotoxy(36, 7);
		style.p("greenalert");
		printf("Instalar ahora");

		gotoxy(36, 8);
		style.p("alert");
		printf("Volver");

		while(seleccio) {
			style.p("text");
			gotoxy(33, y);
			printf("=>");

			if(kbhit()) {
				gotoxy(33, y);
				printf("  ");

				char tecla = getch();

				if(tecla == ABAJO && opcio < 2) {
					y++;
					opcio++;
				}

				if(tecla == ARRIBA && opcio > 1) {
					y--;
					opcio--;
				}

				if(tecla == ENTER) {
					seleccio = false;

					if(opcio == 2) {
						system("cls");
						wait(3);

						Apps apps;
						apps.shop();
					} else {
						Apps apps;
						system("cls");
						bool installing = true;
						style.p("greenalert");
						gotoxy(15, 6);
						printf("INSTALANDO\n");

						gotoxy(11, 7);
						int ddoottss = 0;

						while(installing) {
							printf(". ");
							wait(11);

							ddoottss++;

							if(ddoottss > 10) {
								installing = false;
							}
						}

						db = true;

						if(db == true) {
							gotoxy(9, 9);
							cout<<"Se ha instalado correctamente su programa";

							gotoxy(9, 10);
							cout<<"Si desea ejecutarlo, vaya a 'todos los programas' y lo encontrara";

							getch();
							system("cls");
							wait(2);
							elHome();
						} else {
							style.p("alert");
							cout<<"No se pudo instalar por alguna razon desconocida :("<<endl;

							getch();
							system("cls");
							wait(5);
							elHome();
						}
					}
				}
			}
		}
	} else if(shows == "sp games") {
		gotoxy(15, 2);
		style.p("title");

		cout<<"Cripi-Max Store";

		while(getline(music, line)) {
			gotoxy(5, igriega);
			cout<<line<<endl;

			igriega++;
		}

		gotoxy(31, 5);
		style.p("text");
		printf("Sp Games");

		gotoxy(36, 7);
		style.p("greenalert");
		printf("Instalar ahora");

		gotoxy(36, 8);
		style.p("alert");
		printf("Volver");

		while(seleccio) {
			style.p("text");
			gotoxy(33, y);
			printf("=>");

			if(kbhit()) {
				gotoxy(33, y);
				printf("  ");

				char tecla = getch();

				if(tecla == ABAJO && opcio < 2) {
					y++;
					opcio++;
				}

				if(tecla == ARRIBA && opcio > 1) {
					y--;
					opcio--;
				}

				if(tecla == ENTER) {
					seleccio = false;

					if(opcio == 2) {
						system("cls");
						wait(3);

						Apps apps;
						apps.shop();
					} else {
						Apps apps;
						system("cls");
						bool installing = true;
						style.p("greenalert");
						gotoxy(15, 6);
						printf("INSTALANDO\n");

						gotoxy(11, 7);
						int ddoottss = 0;

						while(installing) {
							printf(". ");
							wait(11);

							ddoottss++;

							if(ddoottss > 10) {
								installing = false;
							}
						}

						sp_games = true;

						if(sp_games == true) {
							gotoxy(9, 9);
							cout<<"Se ha instalado correctamente su programa";

							gotoxy(9, 10);
							cout<<"Si desea ejecutarlo, vaya a 'todos los programas' y lo encontrara";

							getch();
							system("cls");
							wait(2);
							elHome();
						} else {
							style.p("alert");
							cout<<"No se pudo instalar por alguna razon desconocida :("<<endl;

							getch();
							system("cls");
							wait(5);
							elHome();
						}
					}
				}
			}
		}
	} else if(shows == "antivirus") {
		gotoxy(15, 2);
		style.p("title");

		cout<<"Cripi-Max Store";

		while(getline(music, line)) {
			gotoxy(5, igriega);
			cout<<line<<endl;

			igriega++;
		}

		gotoxy(31, 5);
		style.p("text");
		printf("Antivirus");

		gotoxy(36, 7);
		style.p("greenalert");
		printf("Instalar ahora");

		gotoxy(36, 8);
		style.p("alert");
		printf("Volver");

		while(seleccio) {
			style.p("text");
			gotoxy(33, y);
			printf("=>");

			if(kbhit()) {
				gotoxy(33, y);
				printf("  ");

				char tecla = getch();

				if(tecla == ABAJO && opcio < 2) {
					y++;
					opcio++;
				}

				if(tecla == ARRIBA && opcio > 1) {
					y--;
					opcio--;
				}

				if(tecla == ENTER) {
					seleccio = false;

					if(opcio == 2) {
						system("cls");
						wait(3);

						Apps apps;
						apps.shop();
					} else {
						Apps apps;
						system("cls");
						bool installing = true;
						style.p("greenalert");
						gotoxy(15, 6);
						printf("INSTALANDO\n");

						gotoxy(11, 7);
						int ddoottss = 0;

						while(installing) {
							printf(". ");
							wait(11);

							ddoottss++;

							if(ddoottss > 10) {
								installing = false;
							}
						}

						antivirus = true;

						if(antivirus == true) {
							gotoxy(9, 9);
							cout<<"Se ha instalado correctamente su programa";

							gotoxy(9, 10);
							cout<<"Si desea ejecutarlo, vaya a 'todos los programas' y lo encontrara";

							getch();
							system("cls");
							wait(2);
							elHome();
						} else {
							style.p("alert");
							cout<<"No se pudo instalar por alguna razon desconocida :("<<endl;

							getch();
							system("cls");
							wait(5);
							elHome();
						}
					}
				}
			}
		}
	} else if(shows == "mecanografia") {
		gotoxy(15, 2);
		style.p("title");

		cout<<"Cripi-Max Store";

		while(getline(music, line)) {
			gotoxy(5, igriega);
			cout<<line<<endl;

			igriega++;
		}

		gotoxy(31, 5);
		style.p("text");
		printf("Aprender Mecanografia");

		gotoxy(36, 7);
		style.p("greenalert");
		printf("Instalar ahora");

		gotoxy(36, 8);
		style.p("alert");
		printf("Volver");

		while(seleccio) {
			style.p("text");
			gotoxy(33, y);
			printf("=>");

			if(kbhit()) {
				gotoxy(33, y);
				printf("  ");

				char tecla = getch();

				if(tecla == ABAJO && opcio < 2) {
					y++;
					opcio++;
				}

				if(tecla == ARRIBA && opcio > 1) {
					y--;
					opcio--;
				}

				if(tecla == ENTER) {
					seleccio = false;

					if(opcio == 2) {
						system("cls");
						wait(3);

						Apps apps;
						apps.shop();
					} else {
						Apps apps;
						system("cls");
						bool installing = true;
						style.p("greenalert");
						gotoxy(15, 6);
						printf("INSTALANDO\n");

						gotoxy(11, 7);
						int ddoottss = 0;

						while(installing) {
							printf(". ");
							wait(11);

							ddoottss++;

							if(ddoottss > 10) {
								installing = false;
							}
						}

						mecanografia = true;

						if(mecanografia == true) {
							gotoxy(9, 9);
							cout<<"Se ha instalado correctamente su programa";

							gotoxy(9, 10);
							cout<<"Si desea ejecutarlo, vaya a 'todos los programas' y lo encontrara";

							getch();
							system("cls");
							wait(2);
							elHome();
						} else {
							style.p("alert");
							cout<<"No se pudo instalar por alguna razon desconocida :("<<endl;

							getch();
							system("cls");
							wait(5);
							elHome();
						}
					}
				}
			}
		}
	} else if(shows == "visual ide") {
		gotoxy(15, 2);
		style.p("title");

		cout<<"Cripi-Max Store";

		while(getline(music, line)) {
			gotoxy(5, igriega);
			cout<<line<<endl;

			igriega++;
		}

		gotoxy(31, 5);
		style.p("text");
		printf("Compilador");

		gotoxy(36, 7);
		style.p("greenalert");
		printf("Instalar ahora");

		gotoxy(36, 8);
		style.p("alert");
		printf("Volver");

		while(seleccio) {
			style.p("text");
			gotoxy(33, y);
			printf("=>");

			if(kbhit()) {
				gotoxy(33, y);
				printf("  ");

				char tecla = getch();

				if(tecla == ABAJO && opcio < 2) {
					y++;
					opcio++;
				}

				if(tecla == ARRIBA && opcio > 1) {
					y--;
					opcio--;
				}

				if(tecla == ENTER) {
					seleccio = false;

					if(opcio == 2) {
						system("cls");
						wait(3);

						Apps apps;
						apps.shop();
					} else {
						Apps apps;
						system("cls");
						bool installing = true;
						style.p("greenalert");
						gotoxy(15, 6);
						printf("INSTALANDO\n");

						gotoxy(11, 7);
						int ddoottss = 0;

						while(installing) {
							printf(". ");
							wait(11);

							ddoottss++;

							if(ddoottss > 10) {
								installing = false;
							}
						}

						ide = true;

						if(ide == true) {
							gotoxy(9, 9);
							cout<<"Se ha instalado correctamente su programa";

							gotoxy(9, 10);
							cout<<"Si desea ejecutarlo, vaya a 'todos los programas' y lo encontrara";

							getch();
							system("cls");
							wait(2);
							elHome();
						} else {
							style.p("alert");
							cout<<"No se pudo instalar por alguna razon desconocida :("<<endl;

							getch();
							system("cls");
							wait(5);
							elHome();
						}
					}
				}
			}
		}
	}
}

void Apps::show() {
	system("cls");
	Apps apps;

	int option;
	int y = 5;
	int cantidad = 0;
	int elige;

	gotoxy(16, 3);
	cout<<"TODOS TUS PROGRAMAS Y APLICACIONES";

	if(admin_juegos == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"1. Aministrador de juegos";
	}

	if(antivirus == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"2. Antivirus";
	}

	if(db == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"3. Base de datos";
	}

	if(all == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"4. Bloc de notas";
	}

	if(all == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"5. Calculadora";
	}

	if(all == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"6. Config";
	}
	
	if(all == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"7. Cmd";
	}

	if(all == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"8. Cripi-Max explorer";
	}

	if(all == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"9. Cripi-Max store";
	}

	if(all == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"10. Estado del PC";
	}

	if(all == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"11. Explorador de archivos";
	}

	if(all == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"12. Juegos";
	}

	if(mecanografia == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"13. Mecanografia";
	}

	if(mensajes == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"14. Mensajes";
	}

	if(musica == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"15. Musica";
	}

	if(all == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"16. Paint";
	}

	if(all == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"17. Reloj";
	}

	if(sp_games == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"18. Sp Games";
	}

	if(all == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"19. Tu economía";
	}

	if(ide == true) {
		cantidad++;
		gotoxy(12, y + cantidad);
		cout<<"20. Compilador";
	}

	style.p("alert");
	gotoxy(12, y + cantidad + 2);
	cout<<"0. Salir";

	style.p("text");
	gotoxy(14, y + cantidad + 5);
	cout<<">";
	cin>>elige;

	if(elige == 0) {
		system("cls");
		wait(2);
		elHome();
	} else if(elige == 1 && admin_juegos == true) {
		system("cls");
		wait(4);
		apps.vadmin_juegos();
	} else if(elige == 2 && antivirus == true) {
		system("cls");
		wait(4);
		apps.vantivirus();
	} else if(elige == 3 && db == true) {
		system("cls");
		wait(4);
		apps.vdb();
	} else if(elige == 4) {
		system("cls");
		wait(4);
		aplicaciones(4);
	} else if(elige == 5) {
		system("cls");
		wait(4);
		aplicaciones(2);
	} else if(elige == 6) {
		system("cls");
		wait(4);
		config();
	} else if(elige == 7) {
		system("cls");
		wait(4);
		internet_explorer();
	} else if(elige == 8) {
		system("cls");
		wait(4);
		apps.shop();
	} else if(elige == 9) {
		system("cls");
		wait(4);
		kernel(1);
	} else if(elige == 10) {
		system("cls");
		wait(4);
		memoria_archivos();
	} else if(elige == 11) {
		system("cls");
		wait(4);
		juegos();
	} else if(elige == 12 && mecanografia == true) {
		system("cls");
		wait(4);
		apps.vmecanografia();
	} else if(elige == 13 && mensajes == true) {
		system("cls");
		wait(4);
		apps.vmensajes();
	} else if(elige == 14 && musica == true) {
		system("cls");
		wait(4);
		apps.vmusica();
	} else if(elige == 15) {
		system("cls");
		wait(4);
		paint();
	} else if(elige == 16) {
		system("cls");
		wait(4);
		aplicaciones(3);
	} else if(elige == 17 && sp_games == true) {
		system("cls");
		wait(4);
		apps.vsp_games();
	} else if(elige == 18) {
		system("cls");
		wait(4);
		dinero();
	} else if(elige == 19 && ide == true) {
		system("cls");
		wait(4);
		apps.vide();
	}
}

void Apps::vdb() {
	int elegir;
	string base;

	ifstream mydb("bases de datos/My DataBase.txt");
	ifstream cat("bases de datos/Cat.txt");

	ofstream wmydb;
	ofstream catw;

	wmydb.close();
	catw.close();

	cout<<endl<<endl<<endl;
	cout<<"\t\t\t";
	style.p("title");
	cout<<"BASES DE DATOS";
	cout<<endl<<endl;

	style.p("text");
	cout<<"\t\t1. Ver una base de datos existente"<<endl;
	cout<<"\t\t2. A"<<ascii(164)<<"adir datos a una base de datos"<<endl;
	cout<<"\t\t3. Eliminar los datos de una base de datos"<<endl;

	style.color(14);
	cout<<"\t\t4. Bases de datos personalizadas "<<ascii(15)<<endl<<endl;

	style.p("alert");
	cout<<"\t\t0. Salir"<<endl<<endl;

	style.p("greenalert");
	cout<<"\t\t\t>";
	cin>>elegir;

	system("cls");
	cout<<endl<<endl<<"\t\t";
	style.p("title");
	cout<<"Bien, ahora elige la base de datos que quieras"<<endl<<endl;

	style.p("text");
	cout<<"\t\t\tMy_DataBase.db"<<endl;
	cout<<"\t\t\tCat.db"<<endl<<endl;

	cout<<"\t\t\t\t>";
	cin>>base;

	string linea;
	string texto;

	if(elegir == 0) {
		system("cls");
		wait(2);
		elHome();
	} else if(elegir == 1) {
		if(base == "My_DataBase.db" || base == "My_DataBase") {
			system("cls");
			style.p("title");
			cout<<"--------------------------------------------------"<<endl;
			cout<<"\t\tMy DataBase.db"<<endl;
			cout<<"--------------------------------------------------"<<endl<<endl;

			style.color(15);
			while(getline(mydb, linea)) {
				texto = texto + linea + "\n";
			}

			cout<<texto<<endl;

			style.p("alert");
			cout<<endl<<endl;
			cout<<"\t\tPresiona una tecla para continuar...";

			getch();
			system("cls");
			wait(3);

			Apps apps;
			apps.vdb();
		} else if(base == "Cat.db" || base == "Cat.db") {
			system("cls");
			style.p("title");
			cout<<"--------------------------------------------------"<<endl;
			cout<<"\t\tCat.db"<<endl;
			cout<<"--------------------------------------------------"<<endl<<endl;

			style.color(15);
			while(getline(cat, linea)) {
				texto = texto + linea + "\n";
			}

			cout<<texto<<endl;

			style.p("alert");
			cout<<endl<<endl;
			cout<<"\t\tPresiona una tecla para continuar...";

			getch();
			system("cls");
			wait(3);

			Apps apps;
			apps.vdb();
		} else {
			system("cls");
			cout<<"\n\n\n\n";

			style.nbsp(4);
			style.p("alert");

			cout<<"No se pudo encontrar el nombre de la base de datos :("<<endl;
			cout<<"Asegurate de que este bien escrito el nombre de la base de datos";

			getch();
			system("cls");
			wait(1);

			Apps apps;
			apps.vdb();
		}

		style.p("alert");
		cout<<endl<<endl<<"Presiona una tecla para continuar...";

		getch();
		system("cls");
		wait(2);
		Apps::vdb();
	} else if(elegir == 2) {
		if(base == "My_DataBase.db" || base == "My_DataBase") {
			string nombreDt;
			string valorDt;

			system("cls");
			style.p("text");

			cout<<"\n\n\n\n\t\t\t";
			cout<<"Escribe el nombre del dato que quieras a"<<ascii(164)<<"adir >";
			cin>>nombreDt;

			cout<<"\n\n\t\t\t";
			cout<<"Que valor le quieres asignar a '"<<nombreDt<<"'? ";
			cin>>valorDt;

			while(getline(mydb, linea)) {
				texto = texto + linea + "\n";
			}

			mydb.close();

			wmydb.open("bases de datos/My_DataBase.txt", ios::out | ios::app);
			wmydb<<texto<<"Dato: "<<nombreDt<<" = "<<valorDt<<"\n";

			wmydb.close();

			cout<<"\n\n\t\t\tBien, se le ha a"<<ascii(164)<<"adido el valor"<<endl;
			cout<<"\t\t\tde "<<valorDt<<" a "<<nombreDt<<endl;

			getch();
			system("cls");
			wait(1);

			Apps apps;
			apps.vdb();
		} else if(base == "Cat" || base == "Cat.db") {
			string nombreDt;
			string valorDt;

			system("cls");
			style.p("text");

			cout<<"\n\n\n\n\t\t\t";
			cout<<"Escribe el nombre del dato que quieras a"<<ascii(164)<<"adir >";
			cin>>nombreDt;

			cout<<"\n\n\t\t\t";
			cout<<"Que valor le quieres asignar a '"<<nombreDt<<"'? ";
			cin>>valorDt;

			while(getline(cat, linea)) {
				texto = texto + linea + "\n";
			}

			cat.close();

			catw.open("bases de datos/Cat.txt", ios::out | ios::app);
			catw<<texto<<"Dato: "<<nombreDt<<" = "<<valorDt<<"\n";

			catw.close();

			cout<<"\n\n\t\t\tBien, se le ha a"<<ascii(164)<<"adido el valor"<<endl;
			cout<<"\t\t\tde "<<valorDt<<" a "<<nombreDt<<endl;

			getch();
			system("cls");
			wait(1);

			Apps apps;
			apps.vdb();
		} else {
			style.p("alert");
			cout<<"\n\n\n\t\tNo se pudo encontrar tu base de datos :/";

			getch();
			system("cls");
			wait(1);

			Apps apps;
			apps.vdb();
		}
	} else if(elegir == 3) {
		if(base == "My_DataBase.db" || base == "My_DataBase") {
			char yeoene[5];

			system("cls");
			cout<<"\n\n\n";

			style.p("alert");
			style.nbsp(4);

			cout<<"Estas seguro de que quieres eliminar los datos de esta base?"<<endl;
			style.nbsp(5);
			cout<<"Y / N > ";
			cin>>yeoene;

			if(yeoene == "y" || yeoene == "Y" || yeoene == "Yes" || yeoene == "yes") {
				remove("bases de datos/My_DataBase.db");

				cout<<"\n\n\n\t\tSe han eliminado los datos de esta base de datos";

				getch();
				system("cls");
				wait(1);

				Apps apps;
				apps.vdb();
			} else {
				system("cls");
				wait(1);

				Apps apps;
				apps.vdb();
			}
		} else if(base == "Cat.db" || base == "Cat") {
			char yeoene[5];

			system("cls");
			cout<<"\n\n\n";

			style.p("alert");
			style.nbsp(4);

			cout<<"Estas seguro de que quieres eliminar los datos de esta base?"<<endl;
			style.nbsp(5);
			cout<<"Y / N > ";
			cin>>yeoene;

			if(yeoene == "y" || yeoene == "Y" || yeoene == "Yes" || yeoene == "yes") {
				remove("bases de datos/Cat.txt");

				cout<<"\n\n\n\t\tSe han eliminado los datos de esta base de datos";

				getch();
				system("cls");
				wait(1);

				Apps apps;
				apps.vdb();
			} else {
				system("cls");
				wait(1);

				Apps apps;
				apps.vdb();
			}
		} else {
			style.p("alert");
			cout<<"\n\n\n\t\tNo se pudo encontrar tu base de datos :/";

			getch();
			system("cls");
			wait(1);

			Apps apps;
			apps.vdb();
		}
	} else if(elegir == 4) {
		system("cls");
		wait(3);

		if(basePremium == true) {
			Apps apps;
			apps.basePersonalizada();
		} else {
			int elegir;

			cout<<"\n\n\n\n";
			style.nbsp(3);
			style.p("alert");

			cout<<"NO TIENES DataBase Premium PARA PODER VER ESTO"<<endl<<endl;

			style.p("greenalert");
			cout<<"\t\t\t1. Quieres cambiarte a DataBase Premium"<<endl;
			cout<<"\t\t\tpara desbloquear esta opci"<<ascii(162)<<"n?";
			cout<<"\n\n\t\t\t2. Volver";
			cout<<"\n\n\t\t\t3. Salir";
			cin>>elegir;

			if(elegir == 1) {
				string siono;

				style.p("text");
				cout<<"\n\n\t\tPRECIO DEL PRODUCTO: $240.00"<<endl;
				cout<<"\t\tDesea comprarlo? Escriba 'Si' o 'No' >>";
				cin>>siono;

				if(siono == "si" || siono == "Si" || siono == "SI") {
					if(dinerooo >= 240) {
						system("cls");

						basePremium = true;

						if(basePremium == true) {
							cout<<"\n\n\n\t\tFelicidades! Has obtenido 'DataBase Premium'"<<endl;
						} else {
							cout<<"\n\n\n\t\tOcurrio un error en la transaccion :/";
						}

						cout<<"\t\tPresiona una tecla para continuar...";

						getch();
						system("cls");
						wait(2);

						Apps apps;
						apps.basePersonalizada();
					}
				} else {
					system("cls");
					wait(4);

					Apps apps;
					apps.vdb();
				}
			} else if(elegir == 2) {
				system("cls");

				Apps apps;
				apps.vdb();
			} else {
				system("cls");
				elHome();
			}
		}
	}
}

void Apps::basePersonalizada() {
	int opcion;

	style.p("title");
	cout<<"\n\n\n\n\t\t\tBASES DE DATOS PERSONALIZADAS"<<endl<<endl;

	style.p("text");
	cout<<"\t\t1. Crear una nueva base de datos"<<endl;
	cout<<"\t\t2. Ver una base de datos existente"<<endl;
	cout<<"\t\t3. A"<<ascii(164)<<"adir datos a una base de datos existente"<<endl;
	cout<<"\t\t4. Renombrar una base de datos"<<endl;
	cout<<"\t\t5. Eliminar una base de datos existente"<<endl<<endl;

	style.p("alert");
	cout<<"\t\t0. Salir"<<endl<<endl;

	style.p("text");
	cout<<"\t\t\t>";
	cin>>opcion;

	if(opcion == 1) {
		char direccion[250];
		char nombredb[250];

		cout<<endl<<endl<<endl;
		style.nbsp(3);

		cout<<"Que nombre le quieres poner a la base de datos? >>";
		cin>>nombredb;

		cout<<endl<<endl;
		style.nbsp(3);
		cout<<"Escribe la direccion del archivo, algo asi:"<<endl;
		style.nbsp(4);
		cout<<"db/"<<nombredb<<".txt"<<endl;
		cout<<endl<<"\t\t\t>";
		cin>>direccion;

		ofstream nueva_base(direccion);

		cout<<"\n\n\t\tSe ha creado tu base de datos!\nPuedes verla, porque es "<<direccion;

		getch();
		system("cls");
		wait(3);

		Apps apps;
		apps.basePersonalizada();
	} else if(opcion == 2) {
		char nombre[250];
		string linea;
		string texto;

		system("cls");
		cout<<endl<<endl<<endl<<endl<<"\t\t";
		cout<<"Escribe el nombre de la base de datos\n\t\t>";
		cin>>nombre;

		cout<<"---------------------------------------------"<<endl;
		style.color(15);
		ifstream bsdt(nombre);

		while(getline(bsdt, linea)) {
			texto = texto + linea + "\n";
		}

		cout<<texto<<endl<<endl;

		cout<<"---------------------------------------------"<<endl;

		getch();
		system("cls");
		wait(1);

		Apps apps;
		apps.basePersonalizada();
	} else if(opcion == 3) {
		char nombre[250];
		char bsdt[250];
		string nombreDt;
		string valorDt;

		system("cls");
		style.p("text");

		cout<<"\n\n\n\n\t\t\t";
		cout<<"Escribe el nombre de la base de datos >";
		cin>>nombre;

		cout<<endl<<endl<<"\t\t\t";

		cout<<"Escribe el nombre del dato que quieras a"<<ascii(164)<<"adir >";
		cin>>nombreDt;

		cout<<"\n\n\t\t\t";
		cout<<"Que valor le quieres asignar a '"<<nombreDt<<"'? ";
		cin>>valorDt;

		ofstream base_de_datos;
		ifstream base_datos(nombre);

		while(getline(base_datos, linea)) {
			texto = texto + linea + "\n";
		}

		base_de_datos.open(nombre, ios::out | ios::app);
		base_de_datos<<texto<<"Dato: "<<nombreDt<<" = "<<valorDt<<"\n";

		base_de_datos.close();

		cout<<"\n\n\t\t\tBien, se le ha a"<<ascii(164)<<"adido el valor"<<endl;
		cout<<"\t\t\tde "<<valorDt<<" a "<<nombreDt<<endl;

		getch();
		system("cls");
		wait(1);

		Apps apps;
		apps.basePersonalizada();
	} else if(opcion == 4) {
		char nombre[250];
		char nombr1[250];
		char nombr2[250];

		system("cls");
		style.p("text");

		cout<<"\n\n\n\n\t\t\t";
		cout<<"Escribe el nombre de la base de datos que quieras renombrar >";
		cin>>nombre;

		cout<<"\n\n\t\t\t";
		cout<<"Escribe el nuevo nombre para la base de datos >";
		cin>>nombr1;

		cout<<"\n\n\t\t\t";
		cout<<"Confirma el nuevo nombre de la base de datos >";
		cin>>nombr2;

		if(nombr1 == nombr2 || nombr2 == nombr1) {
			rename(nombre, nombr1);
			cout<<"\n\n\t\t\t";
			cout<<"Se ha renombrado '"<<nombre<<"' con '"<<nombr1<<"'";

			system("cls");
			wait(3);

			Apps apps;
			apps.basePersonalizada();
		} else {
			style.p("alert");
			cout<<"\n\n\t\t\t";
			cout<<"Los nombres no coinciden :(";

			system("cls");
			wait(3);

			Apps apps;
			apps.basePersonalizada();
		}
	} else if(opcion == 5) {
		char nombre[250];

		system("cls");
		style.p("text");

		cout<<"\n\n\n\n\t\t\t";
		cout<<"Escribe el nombre de la base de datos que quieras eliminar >";
		cin>>nombre;

		remove(nombre);

		cout<<"\n\n\t\t\tSe ha eliminado el archivo "<<nombre;

		system("cls");
		wait(3);

		Apps apps;
		apps.basePersonalizada();
	} else {
		system("cls");
		wait(3);

		Apps apps;
		apps.vdb();
	}
}

void Apps::vadmin_juegos() {
	int elige_la_opcion_del_administrador_de_juegos;

	system("cls");

	cout<<"\n\n\n";
	style.p("title");
	style.nbsp(2);
	cout<<"ADMINISTRADOR DE JUEGOS"<<endl<<endl;

	style.p("text");
	style.nbsp(2);
	cout<<"1. Liberar memoria"<<endl;
	cout<<"\t\t2. Ver la memoria"<<endl;

	style.nbsp(2);
	style.p("alert");
	cout<<"0. Salir"<<endl;

	style.p("text");
	style.nbsp(2);
	cout<<">";
	cin>>elige_la_opcion_del_administrador_de_juegos;

	if(elige_la_opcion_del_administrador_de_juegos == 1) {
		system("cls");
		kernel(7);
		cout<<"Se ha liberado la memoria que ocupaba el disco duro";
		system("pause");
		elHome();
	} else if(elige_la_opcion_del_administrador_de_juegos == 2) {
		system("cls");
		kernel(1);
	} else {
		system("cls");
		wait(4);
		elHome();
	}
}

void Apps::vmensajes() {
	bool chatting;
	string message;

	ifstream user("datos_guardados/user.txt");

	while(getline(user, linea)) {
		texto = texto + linea;
	}
	user.close();

	cout<<"\n\n\n";
	style.p("title");
	cout<<"\t\tESCRIBIR MENSAJES"<<endl<<endl;
	style.p("text");
	cout<<"\t\tEscribe /salir para salir"<<endl;
	cout<<"\t---------------------------------------------"<<endl<<endl;

	chatting = true;

	while(chatting == true) {
		cout<<"\t\t"<<texto<<": ";
		getline(cin, message);

		if(message == "/salir") {
			chatting = false;
			system("cls");
			wait(2);
			elHome();
		}
	}
}

void Apps::vmecanografia() {
	int frase;
	int respuestas_correctas = 0;
	int eleccion;

	string texto;

	bool aprendiendo = false;
	bool aprendi1 = false;
	bool aprendi2 = false;

	char *frasesLv1[] = {
		"Hola como estas, yo fui a comer un helado",
		"No se que decir ahora, que puedo decir?",
		"El objeto requerido no es real",
		"Vivimos en un mundo con tres dimensiones",
		"Acaso es este el fin del mundo?",
		"No creo que sea verdad, es mentira",
		"Porque llenar una cadena de caracteres?",
		"A decir verdad, no me he leido ese libro",
		"Ya viste su ultimo video? es buenisimo!!",
		"No puedo creer que esto en verdad este pasando!",
		"Podria ser que suceda, hasta ahora no estamos seguros",
		"La mente controla todo el cuerpo, sabias?",
		"Todo esto esta en una cadena de caracteres",
		"Aprender a programar es muy sencillo!",
		"Debes seguir, seguir, y seguir para lograr algo en la vida"
		"Si no puedes, intentalo una y otra vez hasta conseguirlo",
		"No crees que es dificil escribir en una computadora?",
		"Estas frases son muy largas, no?"
	};

	char *frasesLv2[] = {
		"!!Acabas de pasar al nivel #_2, y con eso como te sientes??",
		"__No era tan facil como creias --verdad??",
		"No te sientes estresado? | Por recibir estos cursos de 'mecanografia'",
		"Siento que es muy dificil esto | No se que pienses tu :/",
		"Cuando era pequeño, (osea en mis tiempos[osea mucho antes]) | Solia jugar pelota",
		"Esta parte es algo dificil & solo la tendras esta vez | Aparte, hay mas niveles",
		"La mecanografia es como la ciencia (o el arte) de escribir en el teclado",
		"Hay varios estilos de musica -<pop, rock, etc.>-",
		"El singno de mayor y menor que parecen flechas: ==> <==",
		"las MAYUsCULaS, tambien SON mUy impORtanTEs",
		"Si te equivocas, puedes volver a intentarlo | <Aqui siempre hay justicia ;)>",
		"--Puedes escribir mas rapido? --Si, si puedo --Enserio? --Si, lo hare"
	};

	char *frasesLv3[] = {
		"El pr0ducto sol1citado cuesta exactam3nte #$1293.09",
		"_-!?No puede ser, -esta muy decoradito el texto, no?!-_",
		"Silo nece sitas, nopuedes comp rarlo, pues es muy caro, vale mas de +$2903+",
		"||WOW, Es Probable Que Esta Hamburguesa No Este Tan Rica,|| ?Verdad?",
		">Esta consola no permite los caracteres extranios,\n\t\tpor lo tanto, usa el codigo ASCII que hace un poco mas dificil el trabajo",
		"eStO yA SE estA vOLvIenDo dIfICil, nO es aSI?",
		"Esta parte ya es mas facil ?verdad?, solo tienes que escribir, y escribir, y escribir :|",
		"--la BRILLANTINA brilla MUCHISIMO!!! --No lo creo!!! --CLARO que SI --La COMPRASTE en LA TIENDA",
		"ParA esCRIBir En uN paPEL nEceSitAS lApiz, aQui sOLo eS Un teClaDo y !!!listo!!!",
		"([--El cielo esta muy azul no crees? --Si, lo creo]) ([--Vamos al parque --Ok])",
	};

	cout<<"\n\n\n\n";
	style.nbsp(3);
	style.p("title");

	cout<<"APRENDE MECANOGRAFIA";
	cout<<endl<<endl;
	style.p("text");
	style.nbsp(2);

	cout<<"1. Comenzar modo ";
	style.p("greenalert");
	cout<<"normal"<<endl;
	style.p("text");
	cout<<"\t\t2. Comenzar modo ";
	style.p("alert");
	cout<<"dificil"<<endl;
	style.p("text");
	cout<<"\t\t3. Ver las oraciones"<<endl<<endl;
	style.p("alert");
	cout<<"\t\t0. Salir";

	style.p("text");
	cout<<"\t\t>";
	cin>>eleccion;

	if(eleccion == 1) {
		style.p("greenalert");
		system("cls");
		cout<<"\n\n\n\n\t\t\tComenzando en... ";
		wait(1);
		cout<<"3";
		wait(10);
		cout<<"\b2";
		wait(10);
		cout<<"\b3";
		wait(10);
		cout<<"\n\n\t\tRECUERDA QUE PUEDES PRESIONAR LA TELCA 'esc' PARA SALIR";
		cout<<"\n\t\tPRESIONA UNA TECLA PARA COMENZAR! ...";

		getch();
		goto nivelUno;
	} else if(eleccion == 2) {
		style.p("greenalert");
		system("cls");
		cout<<"\n\n\n\n\t\t\tComenzando en... ";
		wait(1);
		cout<<"3";
		wait(10);
		cout<<"\b2";
		wait(10);
		cout<<"\b3";
		wait(10);
		cout<<"\n\n\t\tRECUERDA QUE PUEDES PRESIONAR LA TELCA 'esc' PARA SALIR";
		cout<<"\n\t\tPRESIONA UNA TECLA PARA COMENZAR! ...";

		getch();
		goto dificilNivelUno;
	} else if(eleccion == 3) {
		style.p("title");
		cout<<"\n\n\n\t\tLAS PALABRAS Y ORACIONES DEL JUEGO SON:"<<endl<<endl;

		style.p("text");
		cout<<"\t\tNivel 1:"<<endl;
		for(int i = 0; i < 17; i++) {
			cout<<"\t\t|\t"<<frasesLv1[i]<<endl;
		}

		cout<<endl<<"\t\tNivel 2:"<<endl;
		for(int i = 0; i < 11; i++) {
			cout<<"\t\t|\t"<<frasesLv2[i]<<endl;
		}

		cout<<endl<<"\t\tNivel 3:"<<endl;
		for(int i = 0; i < 9; i++) {
			cout<<"\t\t|\t"<<frasesLv3[i]<<endl;
		}

		cout<<endl<<"\t\tEsas son todas las oraciones y frases que se usan en el juego"<<endl;
		cout<<"\t\tPresiona una tecla para salir"<<endl;

		getch();
		system("cls");
		wait(2);

		Apps apps;
		apps.vmecanografia();
	} else {
		system("cls");
		elHome();
	}

	nivelUno:
		respuestas_correctas = 0;
		aprendiendo = true;

		while(aprendiendo && respuestas_correctas <= 12) {

			frase = rand();
			frase = frase % 17;

			system("cls");
			cout<<"\n\n\n";
			style.p("title");

			style.nbsp(3);
			cout<<"APRENDE MECANOGRAFIA (nivel 1)";

			style.p("text");
			printf("\n\n\t\t%s", frasesLv1[frase]);
			cout<<"\n\n\t\t>";
			getline(cin, texto);

			if(texto == frasesLv1[frase]) {
				system("cls");
				style.p("greenalert");

				cout<<"\n\n\n\n\n\n\t\t\t\t\t";
				cout<<"CORRECTO"<<endl;
				cout<<"\t\t\t\tPresiona una tecla para continuar...";
				respuestas_correctas++;
				getch();
			} else {
				system("cls");
				style.p("alert");

				cout<<"\n\n\n\n\n\n\t\t\t\t\t";
				cout<<"INCORRECTO"<<endl<<"\t\t\t\tIntentalo otra vez :/"<<endl;
				cout<<"\t\t\t\tPresiona una tecla para continuar...";
				getch();
			}

			if(respuestas_correctas >= 12) {
				aprendiendo = false;
				style.p("greenalert");

				system("cls");
				cout<<endl<<endl<<endl<<endl;
				style.nbsp(2);
				cout<<"Felicidades! Acabas de pasar el primer nivel!\n";
				cout<<"\t\tEs de los mas faciles, ahora vamos con uno mas dificl!";

				getch();
				goto nivelDos;
			}

			if(kbhit()) {
				char tecla = getch();

				if(tecla == ESC) {
					system("cls");
					wait(2);

					Apps apps;
					apps.vmecanografia();
				}
			}
		}

	nivelDos:
		respuestas_correctas = 0;
		aprendi1 = true;
		system("cls");

		while(aprendi1 && respuestas_correctas <= 8) {
			frase = rand();
			frase = frase % 11;

			system("cls");
			cout<<"\n\n\n";
			style.p("title");

			style.nbsp(3);
			cout<<"APRENDE MECANOGRAFIA (nivel 2)";

			style.p("text");
			printf("\n\n\t\t%s", frasesLv2[frase]);
			cout<<"\n\n\t\t>";
			getline(cin, texto);

			if(texto == frasesLv2[frase]) {
				system("cls");
				style.p("greenalert");

				cout<<"\n\n\n\n\n\n\t\t\t\t\t";
				cout<<"CORRECTO"<<endl;
				cout<<"\t\t\t\tPresiona una tecla para continuar...";
				respuestas_correctas++;
				getch();
			} else {
				system("cls");
				style.p("alert");

				cout<<"\n\n\n\n\n\n\t\t\t\t\t";
				cout<<"INCORRECTO"<<endl<<"\t\t\t\tIntentalo otra vez :/"<<endl;
				cout<<"\t\t\t\tPresiona una tecla para continuar...";
				getch();
			}

			if(respuestas_correctas >= 8) {
				aprendi1 = false;
				style.p("greenalert");

				system("cls");
				cout<<endl<<endl<<endl<<endl;
				style.nbsp(2);
				cout<<"Felicidades! Acabas de pasar el segundo nivel!\n";
				cout<<"\t\tEs de los mas faciles, ahora vamos con uno super dificl!";

				getch();
				goto nivelTres;
			}

			if(kbhit()) {
				char tecla = getch();

				if(tecla == ESC) {
					system("cls");
					wait(2);

					Apps apps;
					apps.vmecanografia();
				}
			}
		}

	nivelTres:
		respuestas_correctas = 0;
		aprendi2 = true;
		system("cls");

		while(aprendi1 && respuestas_correctas <= 6) {
			frase = rand();
			frase = frase % 9;

			system("cls");
			cout<<"\n\n\n";
			style.p("title");

			style.nbsp(3);
			cout<<"APRENDE MECANOGRAFIA (nivel 3)";

			style.p("text");
			printf("\n\n\t\t%s", frasesLv3[frase]);
			cout<<"\n\n\t\t>";
			getline(cin, texto);

			if(texto == frasesLv3[frase]) {
				system("cls");
				style.p("greenalert");

				cout<<"\n\n\n\n\n\n\t\t\t\t\t";
				cout<<"CORRECTO"<<endl;
				cout<<"\t\t\t\tPresiona una tecla para continuar...";
				respuestas_correctas++;
				getch();
			} else {
				system("cls");
				style.p("alert");

				cout<<"\n\n\n\n\n\n\t\t\t\t\t";
				cout<<"INCORRECTO"<<endl<<"\t\t\t\tIntentalo otra vez :/"<<endl;
				cout<<"\t\t\t\tPresiona una tecla para continuar...";
				getch();
			}

			if(respuestas_correctas >= 6) {
				aprendiendo = false;
				style.p("greenalert");

				system("cls");
				cout<<endl<<endl<<endl<<endl;
				style.nbsp(2);
				cout<<"Felicidades! Acabas de pasar el ultimo nivel!\n";
				cout<<"\t\tLo unico que debes hacer ahora es seguir practicando para mejorar!";

				getch();
				system("cls");
				wait(1);

				Apps apps;
				apps.vmecanografia();
			}

			if(kbhit()) {
				char tecla = getch();

				if(tecla == ESC) {
					system("cls");
					wait(2);

					Apps apps;
					apps.vmecanografia();
				}
			}
		}

	dificilNivelUno:
		respuestas_correctas = 0;
		aprendiendo = true;

		while(aprendiendo && respuestas_correctas <= 14) {
			frase = rand();
			frase = frase % 17;

			system("cls");
			cout<<"\n\n\n";
			style.p("title");

			style.nbsp(3);
			cout<<"APRENDE MECANOGRAFIA (nivel 1)";

			style.p("text");
			printf("\n\n\t\t%s", frasesLv1[frase]);
			cout<<"\n\n\t\t>";
			getline(cin, texto);

			if(texto == frasesLv1[frase]) {
				system("cls");
				style.p("greenalert");

				cout<<"\n\n\n\n\n\n\t\t\t\t\t";
				cout<<"CORRECTO"<<endl;
				cout<<"\t\t\t\tPresiona una tecla para continuar...";
				respuestas_correctas++;
				getch();
			} else {
				system("cls");
				style.p("alert");

				cout<<"\n\n\n\n\n\n\t\t\t\t\t";
				cout<<"PERDISTE!!"<<endl<<"\t\t\t\tIntentalo otra vez :/"<<endl;
				cout<<"\t\t\t\tPresiona una tecla para continuar...";

				getch();
				aprendiendo = false;
				system("cls");

				Apps apps;
				apps.vmecanografia();
			}

			if(respuestas_correctas >= 14) {
				aprendiendo = false;
				style.p("greenalert");

				system("cls");
				cout<<endl<<endl<<endl<<endl;
				style.nbsp(2);
				cout<<"Felicidades! Acabas de pasar el primer nivel!\n";
				cout<<"\t\tEs de los mas faciles, ahora vamos con uno mas dificl!";

				getch();
				goto nivelDos;
			}

			if(kbhit()) {
				char tecla = getch();

				if(tecla == ESC) {
					system("cls");
					wait(2);

					Apps apps;
					apps.vmecanografia();
				}
			}
		}

	dificilNivelDos:
		respuestas_correctas = 0;
		aprendi1 = true;
		system("cls");

		while(aprendi1 && respuestas_correctas <= 10) {
			frase = rand();
			frase = frase % 11;

			system("cls");
			cout<<"\n\n\n";
			style.p("title");

			style.nbsp(3);
			cout<<"APRENDE MECANOGRAFIA (nivel 2 DIFICIL)";

			style.p("text");
			printf("\n\n\t\t%s", frasesLv2[frase]);
			cout<<"\n\n\t\t>";
			getline(cin, texto);

			if(texto == frasesLv2[frase]) {
				system("cls");
				style.p("greenalert");

				cout<<"\n\n\n\n\n\n\t\t\t\t\t";
				cout<<"CORRECTO"<<endl;
				cout<<"\t\t\t\tPresiona una tecla para continuar...";
				respuestas_correctas++;
				getch();
			} else {
				system("cls");
				style.p("alert");

				cout<<"\n\n\n\n\n\n\t\t\t\t\t";
				cout<<"PERDISTE!!"<<endl<<"\t\t\t\tIntentalo otra vez :/"<<endl;
				cout<<"\t\t\t\tPresiona una tecla para continuar...";

				getch();
				aprendiendo = false;
				system("cls");

				Apps apps;
				apps.vmecanografia();
			}

			if(respuestas_correctas >= 10) {
				aprendi1 = false;
				style.p("greenalert");

				system("cls");
				cout<<endl<<endl<<endl<<endl;
				style.nbsp(2);
				cout<<"Felicidades! Acabas de pasar el segundo nivel!\n";
				cout<<"\t\tEs de los mas faciles, ahora vamos con uno super dificl!";

				getch();
				goto nivelTres;
			}

			if(kbhit()) {
				char tecla = getch();

				if(tecla == ESC) {
					system("cls");
					wait(2);

					Apps apps;
					apps.vmecanografia();
				}
			}
		}

	dificilNivelTres:
		respuestas_correctas = 0;
		aprendi2 = true;
		system("cls");

		while(aprendi1 && respuestas_correctas <= 8) {
			frase = rand();
			frase = frase % 9;

			system("cls");
			cout<<"\n\n\n";
			style.p("title");

			style.nbsp(3);
			cout<<"APRENDE MECANOGRAFIA (nivel 3 DIFICIL)";

			style.p("text");
			printf("\n\n\t\t%s", frasesLv3[frase]);
			cout<<"\n\n\t\t>";
			getline(cin, texto);

			if(texto == frasesLv3[frase]) {
				system("cls");
				style.p("greenalert");

				cout<<"\n\n\n\n\n\n\t\t\t\t\t";
				cout<<"CORRECTO"<<endl;
				cout<<"\t\t\t\tPresiona una tecla para continuar...";
				respuestas_correctas++;
				getch();
			} else {
				system("cls");
				style.p("alert");

				cout<<"\n\n\n\n\n\n\t\t\t\t\t";
				cout<<"PERDISTE!!"<<endl<<"\t\t\t\tIntentalo otra vez :/"<<endl;
				cout<<"\t\t\t\tPresiona una tecla para continuar...";

				getch();
				aprendiendo = false;
				system("cls");

				Apps apps;
				apps.vmecanografia();
			}

			if(respuestas_correctas >= 8) {
				aprendiendo = false;
				style.p("greenalert");

				system("cls");
				cout<<endl<<endl<<endl<<endl;
				style.nbsp(2);
				cout<<"Felicidades! Acabas de pasar el ultimo nivel!\n";
				cout<<"\t\tLo unico que debes hacer ahora es seguir practicando para mejorar!";

				getch();
				system("cls");
				wait(1);

				Apps apps;
				apps.vmecanografia();
			}

			if(kbhit()) {
				char tecla = getch();

				if(tecla == ESC) {
					system("cls");
					wait(2);

					Apps apps;
					apps.vmecanografia();
				}
			}
		}
}

void Apps::vantivirus() {
	int eleg;

	cout<<endl<<endl<<endl;
	style.nbsp(3);
	style.p("title");
	cout<<"FREE ANTIVIRUS"<<endl<<endl;

	style.p("text");
	cout<<"\t\tQue quiere o desea hacer?"<<endl;
	cout<<"\n\t\tComputadora:"<<endl;
	cout<<"\t\t\t1. Ver estado del computador"<<endl;
	cout<<"\t\t\t2. Liberar espacio"<<endl;
	cout<<"\t\t\t3. Optimizar computadora"<<endl<<endl;

	cout<<"\t\tProteccion:"<<endl;
	cout<<"\t\t\t4. Privacidad del navegador"<<endl;
	cout<<"\t\t\t5. Comprobacion"<<endl;
	cout<<"\t\t\t6. Diagnostico de señal"<<endl;
	cout<<"\t\t\t7. Protector de documentos"<<endl;
	cout<<"\t\t\t8. Limpiador de registros"<<endl;

	style.p("alert");
	cout<<"\t\t0. Salir"<<endl<<endl;
	style.p("text");

	cout<<"\t\t>";
	cin>>eleg;

	switch(eleg) {
		case 1:
			int espera;

			system("cls");
			cout<<"\n\n\n\n\n\t\t\t\tViendo..."<<endl;

			espera = rand();
			espera = 5 + espera % 12;

			wait(espera);

			if(computersFast(work) == true) {
				style.p("greenalert");
				cout<<"\t\t\tSu computadora esta muy bien!"<<endl;
				cout<<"\t\t\tPresione una tecla para continuar"<<endl;

				getch();
				system("cls");
				wait(1);

				Apps apps;
				apps.vantivirus();
			} else {
				style.p("alert");
				cout<<"\t\tSu computadora está algo rara, deber"<<ascii(161)<<"as hacerle un chequeo"<<endl;
				cout<<"\t\t     Presiona una tecla para continuar";

				getch();
				system("cls");
				wait(1);

				Apps apps;
				apps.vantivirus();
			}

			break;
		case 2:
			int liberar;

			cout<<"\t\tCuanto espacio desea liberar? >";
			cin>>liberar;

			if(liberar > limite_liberar) {
				cout<<endl<<endl;
				cout<<"\t\tLo siento, las lineas que escribiste son mas de las que puedes eliminar"<<endl;
				cout<<"\t\tPresiona una tecla para continuar...";

				getch();
				system("cls");

				Apps apps;
				apps.vantivirus();
			} else {
				cout<<endl<<endl;
				cout<<"\t\tSe han eliminado "<<liberar<<" de la memoria"<<endl;
				cout<<"\t\tPresiona una tecla para continuar...";

				getch();
				system("cls");

				Apps apps;
				apps.vantivirus();
			}

			break;
		case 3:
			kernel(7);
			cout<<"\n\n\t\tSe ha optimizado!";
			cout<<"\t\tPresiona una tecla para continuar...";

			getch();
			system("cls");

			Apps apps;
			apps.vantivirus();
			break;
		case 4:
			system("cls");
			style.p("title");
			cout<<"\n\n\n\n\t\t";
			cout<<"PRIVACIDAD DEL NAVEGADOR"<<endl<<endl;
			style.p("text");

			cout<<"\t\tCookies: ninguna"<<endl;
			cout<<"\t\tDatos dados a internet: ninguno"<<endl;
			cout<<"\t\tPrivacidad: segura"<<endl;

			getch();
			system("cls");
			apps.vantivirus();
			break;
		case 5:
			style.p("greenalert");
			cout<<endl<<endl<<endl;
			cout<<"\t\tVerificando...";
			wait(13);
			cout<<endl<<"\t\tRevisando archivos";
			wait(6);
			cout<<endl<<"\t\tVerificando memoria";
			wait(9);
			cout<<endl<<"\t\tChequeando version";
			wait(11);
			cout<<endl<<endl<<"\t\tTodo en orden!";

			getch();
			system("cls");
			apps.vantivirus();
			break;
		case 6:
			style.p("greenalert");
			cout<<endl<<"\t\tEst"<<ascii(160)<<" buena!"<<endl;

			getch();
			system("cls");
			apps.vantivirus();
			break;
		case 7:
			style.p("greenalert");
			cout<<endl<<"\t\tNo se han detectado documentos en esta computadora :/"<<endl;

			getch();
			system("cls");
			apps.vantivirus();
			break;
		case 8:
			style.p("greenalert");
			cout<<endl<<"No hay registros que eliminar"<<endl;

			getch();
			system("cls");
			apps.vantivirus();
			break;
		default:
			system("cls");
			wait(3);
			elHome();
		break;
	}
}

/*
#define bt1 101
#define bt2 102


HWND boton1;
HWND boton2;

// This is where all the input to the window goes to
LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	switch(Message) {

		// Upon destruction, tell the main thread to stop
		case WM_DESTROY: {
			PostQuitMessage(0);
			break;
		}

		case WM_CREATE: {
			boton1 = CreateWindowEx(
				0, "button", "Botononon", WS_VISIBLE|WS_CHILD|0,
				0, 0, 80, 25, hwnd, (HMENU)bt1, 0, 0
			);

			boton2 = CreateWindowEx(
				0, "button", "Botoncito", WS_VISIBLE|WS_CHILD|0,
				120, 0, 80, 25, hwnd, (HMENU)bt2, 0, 0
			);
			break;
		}

		case WM_COMMAND: {
			if(LOWORD(bt1) == wParam) {
				printf("ae");
			} else {
				
			}

			break;
		}

		// All other messages (a lot of them) are processed using default procedures
		default:
			return DefWindowProc(hwnd, Message, wParam, lParam);
	}
	return 0;
}

// The 'main' function of Win32 GUI programs: this is where execution starts
int WINAPI ventanita(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASSEX wc; /* A properties struct of our window
	HWND hwnd; //A 'HANDLE', hence the H, or a pointer to our window
	MSG msg; // A temporary location for all messages

	// zero out the struct and set the stuff we want to modify
	memset(&wc,0,sizeof(wc));
	wc.cbSize		 = sizeof(WNDCLASSEX);
	wc.lpfnWndProc	 = WndProc; // This is where we will send messages to
	wc.hInstance	 = hInstance;
	wc.hCursor		 = LoadCursor(NULL, IDC_ARROW);
	wc.style         = CS_DBLCLKS;

	// White, COLOR_WINDOW is just a #define for a system color, try Ctrl+Clicking it
	wc.hbrBackground = (HBRUSH) COLOR_WINDOWFRAME;
	wc.lpszClassName = "WindowClass";
	wc.hIcon		 = LoadIcon(NULL, IDI_APPLICATION); // Load a standard icon
	wc.hIconSm		 = LoadIcon(NULL, IDI_APPLICATION); // use the name "A" to use the project icon

	if(!RegisterClassEx(&wc)) {
		// a
	}

	hwnd = CreateWindowEx(
		WS_EX_CLIENTEDGE,
		"WindowClass",
		"Your compiler",
		WS_VISIBLE|WS_OVERLAPPEDWINDOW,
		268, // x
		142, // y
		540, // width
		260, // height
		NULL,NULL,hInstance,NULL);

	if(hwnd == NULL) {
		// a
	}

	//
		// This is the heart of our program where all input is processed and
		// sent to WndProc. Note that GetMessage blocks code flow until it receives something, so
		// this loop will not produce unreasonably high CPU usage
	//
	while(GetMessage(&msg, NULL, 0, 0) > 0) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
} */


void Apps::vide() {
	int y = 6;
	int x = 4;
	bool writing = true;
	int numero = 1;

	string codigo;

	ifstream salida("datos_guardados/compiler.txt");
	ofstream entrada("datos_guardados/compiler.txt");

	style.p("title");
	cout<<"\n\n\t\t\tESCRIBE AQUI TU CODIGO"<<endl;

	style.p("alert");
	cout<<"\tS";
	style.p("text");
	cout<<"alir = '/salir'  |  ";
	style.p("alert");
	cout<<"E";
	style.p("text");
	cout<<"jecucion = '/exe'  |   ";
	style.p("alert");
	cout<<"R";
	style.p("text");
	cout<<"einiciar = '/reload'";
	cout<<endl<<endl;

	style.color(15);

	int print_times = 0;
	string secundario;
	int secundari;
	int secundario1;
	int secundarii;
	int secundario2;
	int secundariii;
	int secundario3;
	int secundariiii;
	int secundario4;

	string nombreVar;
	string value_var;

	int a;
	int b;
	string thing;
	string ae;
	string oe;

	int ycmp = 1;
	int xcmp = 82;

	gotoxy(xcmp, ycmp);
	cout<<"-----------------------------------------------------------------"<<endl;
	ycmp++;
	
	for(int i = 0; i < 40; i++) {
		gotoxy(xcmp-1,i);
		cout<<"|";
	}

    string asking;

    string theCondition;
    string inprint;

    int times;
    string printininin;

	do {
		gotoxy(x, y);
		getline(cin, codigo);

		y++;

		if(codigo == "/exe") {
			ycmp++;

			int s;
			string i;
			string o;
			string u;

			/*
                Bucles
			*/
			/*int aa;
			string ai;
			int ao;
			int au;
			
			if(cmp_for(aa, ai, "none", ao, au) == true) {
                cmp_for(times, printininin, "print", xcmp, ycmp);
			}*/

			/*
				Operadores logicos
			*/

			// El if (si) para las condicionales

			/*
                Funciones basicas
			*/

			// La funcion de imprimir en pantalla
			if(cmp_print(thing) == true) {
				gotoxy(xcmp, ycmp);
				cmp_print(secundario);
				cout<<endl;
				ycmp++;
			}

			// La funcion de preguntar al usuario
			string a;
			string e;

            if(cmp_ask(a, "none") == true) {

                gotoxy(xcmp, ycmp);
                getline(cin, asking);
                cmp_ask(asking, "ask");
                gotoxy(x, y);
                ycmp++;
            }

            if(cmp_if(i, o, u, "none") == true) {
                gotoxy(xcmp, ycmp);
                cmp_if(theCondition, asking, inprint, "check");
                ycmp++;
			}

			/*
				Operadores matematicos
			*/

			// Aqui esta la suma
			if(cmp_sum(secundari, secundario1, "none") == true) {
				gotoxy(xcmp, ycmp);
				cmp_sum(secundari, secundario1, "print");
				cout<<endl;
				ycmp++;
			}

			// Aqui esta la multiplicacion
			if(cmp_multi(secundarii, secundario2, "none") == true) {
				gotoxy(xcmp, ycmp);
				cmp_multi(secundarii, secundario2, "print");
				cout<<endl;
				ycmp++;
			}

			/* Aqui esta la division
			if(cmp_div(secundariii, secundario3, "none") == true) {
				gotoxy(xcmp, ycmp);
				cmp_div(secundariii, secundario3, "print");
				cout<<endl;
				ycmp++;
			}*/

			// Aqui esta la resta
			if(cmp_res(secundariiii, secundario4, "none") == true) {
				gotoxy(xcmp, ycmp);
				cmp_res(secundariiii, secundario4, "print");
				cout<<endl;
				ycmp++;
			}


			gotoxy(x, y);
		}



		if(codigo == "if") {

            gotoxy(x+2, y-1);
			style.color(2);
			cout<<"\b\bif";
			style.color(15);

			gotoxy(x+4, y);
			cout<<"condition: ";
			getline(cin, theCondition);
			y++;
			gotoxy(x+4, y);
			cout<<"then: ";
			getline(cin, inprint);

			cmp_if(theCondition, asking, inprint, "true");
		} else if(codigo == "for") {
		    int xd;
		    int uwu;

            gotoxy(x+3, y-1);
			style.color(2);
			cout<<"\b\b\bfor";
			style.color(15);
			gotoxy(x+4, y);
			cout<<"int times: ";
			cin>>times;

			y++;
			gotoxy(x+4, y);
			cout<<"then: ";
			cin>>printininin;
			cmp_for(times, printininin, "true", xd, uwu);
		} else if(codigo == "print") {
			// Imprimir en pantalla

			gotoxy(x+5, y-1);
			style.p("text");
			cout<<"\b\b\b\b\bprint";
			style.color(15);
			gotoxy(x+4, y);
			getline(cin, secundario);

			y++;
			print_times++;
		} else if(codigo == "ask") {
            gotoxy(x+3, y-1);
			style.p("text");
			cout<<"\b\b\bask";
			style.color(15);
			gotoxy(x, y);
			string RESOLT;

			cmp_ask(RESOLT, "true");
        } else if(codigo == "sum" || codigo == "+") {
			// Suma
			gotoxy(x+3, y-1);
			style.p("text");
			cout<<"\b\b\bsum";
			style.color(15);
			gotoxy(x, y);

			cout<<"\t";
			cin>>secundari;
			cout<<"\t";
			cin>>secundario1;

			cmp_sum(secundari, secundario1, "true");
		} else if(codigo == "multi" || codigo == "*") {
			// Multiplicacion

			gotoxy(x+5, y-1);
			style.p("text");
			cout<<"\b\b\b\b\bmulti";
			style.color(15);
			gotoxy(x, y);

			cout<<"\t";
			cin>>secundarii;
			cout<<"\t";
			cin>>secundario2;

			cmp_multi(secundarii, secundario2, "true");
		} else if(codigo == "res" || codigo == "-") {
			// Resta

			gotoxy(x+3, y-1);
			style.p("text");
			cout<<"\b\b\bres";
			style.color(15);
			gotoxy(x, y);

			cout<<"\t";
			cin>>secundariii;
			cout<<"\t";
			cin>>secundario3;

			cmp_res(secundariii, secundario3, "true");
		} else if(codigo == "div" || codigo == "/") {
			// Division

			gotoxy(x+3, y-1);
			style.p("text");
			cout<<"\b\b\bdiv";
			style.color(15);
			gotoxy(x, y);

			cout<<"\t";
			cin>>secundariiii;
			cout<<"\t";
			cin>>secundario4;

			cmp_div(secundariiii, secundario4, "true");
		}
		
		/*
		HINSTANCE hInstance;
	    HINSTANCE hPrevInstance;
	    LPSTR lpCmdLine;
	    int nCmdShow;
	
	    ventanita(hInstance, hPrevInstance, lpCmdLine, nCmdShow); */
	} while(writing == true);
}

void Apps::vmusica() {


	MessageBox(NULL, "Esta aplicacion en verdad no existe :/","Error!",MB_ICONEXCLAMATION|MB_OK);
	/*
			 ;;;;;;;;;;;;;;;;;;;
		     ;;;;;;;;;;;;;;;;;;;
		     ;                 ;
		     ;                 ;
		     ;                 ;
		     ;                 ;
		     ;                 ;
		     ;                 ;
		     ;                 ;
		,;;;;;            ,;;;;;
		;;;;;;            ;;;;;;
		`;;;;'            `;;;;
	*/

	cout<<"\n\n\n\t\t\tMUSICA"<<endl<<endl<<endl;

	cout<<"\t     ;;;;;;;;;;;;;;;;;;;"<<endl;
	cout<<"\t     ;;;;;;;;;;;;;;;;;;;"<<endl;
	cout<<"\t     ;                 ;"<<endl;
	cout<<"\t     ;                 ;"<<endl;
	cout<<"\t     ;                 ;"<<endl;
	cout<<"\t     ;                 ;"<<endl;
	cout<<"\t     ;                 ;"<<endl;
	cout<<"\t     ;                 ;"<<endl;
	cout<<"\t     ;                 ;"<<endl;
	cout<<"\t,;;;;;            ,;;;;;"<<endl;
	cout<<"\t;;;;;;            ;;;;;;"<<endl;
	cout<<"\t`;;;;'            `;;;;"<<endl;

	style.p("alert");
	gotoxy(42, 6);
	cout<<"Lo sentimos, este programa no est"<<ascii(160)<<" disponible por";

	gotoxy(42, 7);
	cout<<"el momento, la versi"<<ascii(162)<<"n de este sistema operativo es la";

	gotoxy(42, 8);
	cout<<"1.0.1, por lo tanto, su sistam est"<<ascii(160)<<" muy joven, entonces";

	gotoxy(42, 9);
	cout<<"van a haber ciertas aplicaciones que no se van a poder ejecutar debido al estado";

	gotoxy(42, 10);
	cout<<"de el compilador, el cual est"<<ascii(160)<<" en la consola, entonces es";

	gotoxy(42, 11);
	cout<<"muy dificil de ejecutar para su sistema, talvez no lo pueda ejecutar en esta versi"<<ascii(162)<<"n.";

	gotoxy(42, 12);
	cout<<"Debe esperar hasta la siguiente version para poder correr este programa :/";

	getch();
	system("cls");
	wait(1);
	elHome();
}

void cmd() {
	bool escribing;
	string command;
	
	cout<<endl<<endl<<endl;
	
	while(escribing == true) {
		cout<<"\n\t\t>";
		getline(cin, command);
		
		if(command == "salir" || command == "exit") {
			escribing = false;
			system("cls");
			elHome();
		} else if(command == "cm info") {
			cout<<"\n\t\t\tCRIPI-MAX\n";
			cout<<"\t\t\tProducto: AD2F-2AD3-X8MD"<<endl<<endl;
		}
	}
}


/*
	Interfaz gráfica
*/

/*
	* Aqui se van a almacenar todas las funciones y cosas relacionadas con la
	configuracion y editar la interfaz grafica del dispotivo para hacer un uso
	del computador mucho mas bonito para el usuario
	
	* Tambien puedes ver y edi
*/

string textou;

void inicio(char type[], bool editing) {
	if(type == "main") {
		style.p("text");
		cout<<"\n\n\n";
		cout<<"\t\t***************************************************"<<endl;
		cout<<"\t\t**                                               **"<<endl;
		cout<<"\t\t**             C R I P I - M A X                 **"<<endl;
		cout<<"\t\t**                                               **"<<endl;
		cout<<"\t\t***************************************************"<<endl;
	} else {
		int the_x_position = 12;
		
		if(editing == true) {
			system("cls");
			style.p("text");
			cout<<"\n\n\n\n\t\t";
			
			cout<<"Escribe, que texto quieres aniadir?\n\t\t> ";
			getline(cin, textou);
			
			if(texto.length() > 1 && texto.length() < 10) {
				the_x_position = 22;
				cout<<"\n\n\t\tSe ha aniadido correctamente el mensaje '"<<texto<<"'"<<endl;
				getch();
				system("cls");
				config();
			} else if(texto.length() > 10 && texto.length() < 20) {
				the_x_position = 16;
				cout<<"\n\n\t\tSe ha aniadido correctamente el mensaje '"<<texto<<"'"<<endl;
				getch();
				system("cls");
				config();
			} else if(texto.length() > 20 && texto.length() < 30) {
				the_x_position = 12;
				cout<<"\n\n\t\tSe ha aniadido correctamente el mensaje '"<<texto<<"'"<<endl;
				getch();
				system("cls");
				config();
			} else if(texto.length() > 30 && texto.length() < 40) {
				the_x_position = 8;
				cout<<"\n\n\t\tSe ha aniadido correctamente el mensaje '"<<texto<<"'"<<endl;
				getch();
				system("cls");
				config();
			} else if(texto.length() > 40 && texto.length() < 50) {
				the_x_position = 4;
				cout<<"\n\n\t\tSe ha aniadido correctamente el mensaje '"<<texto<<"'"<<endl;
				getch();
				system("cls");
				config();
			} else if(texto.length() > 50) {
				cout<<"\n\n\t\tLo sentimos, pero el mensaje es muy largo D:"<<endl;
				getch();
				system("cls");
				config();
			}
		}
		
		if(editing == false) {
				style.p("text");
				cout<<"\n\n\n";
				cout<<"\t\t***********************************************************"<<endl;
				cout<<"\t\t**                                                       **"<<endl;
				cout<<"\t\t**                 C R I P I - M A X                     **"<<endl;
				cout<<"\t\t**                                                       **"<<endl;
				cout<<"\t\t**                                                       **"<<endl;
				cout<<"\t\t**                                                       **"<<endl;
				cout<<"\t\t***********************************************************"<<endl;
				
				gotoxy(the_x_position+8, 8-1);
				cout<<textou;
				
				gotoxy(0, 11);
			}
	}
}

void gestionar_colores() {
	int elegir_opc_gtcl;
	int elegir_opc_color;
	
	system("cls");
	cout<<endl<<endl<<endl;
	style.p("title");
	cout<<"\t\t\tGESTIONAR COLORES DEL DISPOSITIVO"<<endl<<endl;
	style.p("text");
	cout<<"\t\t1. Cambiar el color del sistema"<<endl;
	cout<<"\t\t2. Ver los colores y temas seleccionados"<<endl<<endl;
	style.p("alert");
	cout<<"\t\t0. Salir"<<endl;
	
	style.p("text");
	cout<<"\n\t\t>";
	cin>>elegir_opc_gtcl;
	
	switch(elegir_opc_gtcl) {
		case 1: {
			system("cls");
			cout<<endl<<endl<<endl;
			style.p("title");
			cout<<"\t\tCOLORES Y TEMAS DISPONIBLES PARA EL SISTEMA"<<endl<<endl;
			
			color(15);
			cout<<"\t\tOpciones a elegir:"<<endl<<endl;
			
			color(15);
			cout<<"\t\t1. Main: "<<endl;
			color(1);
			cout<<"\t\t   ESTE ES UN TITULO"<<endl;
			color(9);
			cout<<"\t\t   ESTE ES SOLO UN TEXTO"<<endl<<endl;
			
			color(15);
			cout<<"\t\t2. Light: "<<endl;
			color(3);
			cout<<"\t\t   ESTE ES UN TITULO"<<endl;
			color(14);
			cout<<"\t\t   ESTE ES SOLO UN TEXTO"<<endl<<endl;
			
			color(15);
			cout<<"\t\t3. Pink colors: "<<endl;
			color(4);
			cout<<"\t\t   ESTE ES EL TITULO"<<endl;
			color(13);
			cout<<"\t\t   ESTE ES SOLO UN TEXTO"<<endl<<endl;
			
			color(15);
			cout<<"\t\t4. Hacker: "<<endl;
			color(2);
			cout<<"\t\t   ESTE ES EL TITULO"<<endl;
			color(10);
			cout<<"\t\t   ESTE ES SOLO UN TEXTO"<<endl<<endl;
			
			color(15);
			cout<<"\t\t5. Basic classic: "<<endl;
			color(8);
			cout<<"\t\t   ESTE ES EL TITULO"<<endl;
			color(7);
			cout<<"\t\t   ESTE ES SOLO UN TEXTO"<<endl<<endl;
			
			color(15);
			cout<<"\t\t6. Resaltado"<<endl;
			color(91);
			cout<<"\t\t   ESTE ES EL TITULO"<<endl;
			color(19);
			cout<<"\t\t   ESTE ES EL TEXTO"<<endl;
			
			style.p("text");
			cout<<endl<<"\t\tElige >";
			cin>>elegir_opc_color;
			
			switch(elegir_opc_color) {
				case 1: {
					color__text = 9;
					color__title = 1;
					
					system("cls");
					style.p("greenalert");
					cout<<"Felicidades!"<<endl;
					cout<<"Se ha cambiado el tema del sistema operativo!"<<endl;
					getch();
					system("cls");
					elHome();
					break;
				}
				
				case 2: {
					color__title = 3;
					color__text = 14;
					
					system("cls");
					style.p("greenalert");
					cout<<"Felicidades!"<<endl;
					cout<<"Se ha cambiado el tema del sistema operativo!"<<endl;
					getch();
					system("cls");
					elHome();
					break;
				}
				
				case 3: {
					color__title = 4;
					color__text = 13;
					
					system("cls");
					style.p("greenalert");
					cout<<"Felicidades!"<<endl;
					cout<<"Se ha cambiado el tema del sistema operativo!"<<endl;
					getch();
					system("cls");
					elHome();
					break;
				}
				
				case 4: {
					color__title = 2;
					color__text = 10;
					
					system("cls");
					style.p("greenalert");
					cout<<"Felicidades!"<<endl;
					cout<<"Se ha cambiado el tema del sistema operativo!"<<endl;
					getch();
					system("cls");
					elHome();
					break;
				}
				
				case 5: {
					color__title = 8;
					color__text = 7;
					
					system("cls");
					style.p("greenalert");
					cout<<"Felicidades!"<<endl;
					cout<<"Se ha cambiado el tema del sistema operativo!"<<endl;
					getch();
					system("cls");
					elHome();
					break;
				}
				
				case 6: {
					color__title = 91;
					color__text = 19;
					
					system("cls");
					style.p("greenalert");
					cout<<"Felicidades!"<<endl;
					cout<<"Se ha cambiado el tema del sistema operativo!"<<endl;
					getch();
					system("cls");
					elHome();
					break;
				}
			}
			break;
		}
	}
}













void Apps::vsp_games() {
	system("cls");
	elHome();
}

void Apps::asignar_valores() {
	Apps apps;

	admin_juegos = false;
	antivirus = false;
	db = false;
	mecanografia = false;
	ide = false;
	sp_games = false;
	mensajes = false;
	musica = false;

	all = true;
}

/*
	Aqui termina el codigo!
*/

/*
	* Este solo es el primer sistema operativo de cripimax el cual
	solo es una prueba, no tiene tantas funciones como los
	reales pero por lo menos es bastante bueno.
	
	Especificaciones:
		* Cripi-Max.cpp = 7621 lineas y 166443 caracteres
		
		* Car game.cpp    = 228 lineas y 5046 caracteres
		* Flappy Bird.cpp = 258 lineas y 5240 caracteres
		* Navesitas.cpp   = 312 lineas y 6120 caracteres
		* Snake.cpp       = 188 lineas y 3031 caracteres
		
		* Compiler.h          = 157 lineas y 3174 caracteres
		* Funciones.h         = 72 lineas y 4287 caracteres
		* Juego_flappy_bird.h = 227 lineas y 4581 caracteres
		* Juego_navesitas.h   = 221 lineas y 4393 caracteres
		* Juego_snake.h       = 157 lineas y 2593 caracteres
		* Sp_Graphs.h         = 77 lineas y 7524 caracteres
		* Sponky.h            = 66 lineas y 1398 caracteres
		
		* TOTAL .h     = 977 lineas y 23,561 caracteres
		* TOTAL .cpp   = 8607 lineas y 185,880 caracteres
		
		* TOTAL TODO   = 9584 lineas y 2,059,438 caracteres
*/

/*
	Y bueno solo eso trae el sistema operativo de CRIPI-MAX, espero
	que el OS sea de su agrado.
	
	Nos vemos al siguiente producto de Cripi-Max!!
*/
