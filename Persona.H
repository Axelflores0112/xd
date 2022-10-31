#pragma once
#include<sstream>
#include<iostream>
#include<string>
#include<list>
#include<SFML/Audio.hpp>
using namespace std;
using namespace sf;
class Persona {
public:
	string datos_p1;
	string datos_p2;
	string datos_p3;
	string datos_p4;
	string datos_p5;
	Persona(string, string, string, string, string);

};
class Identificacion: public Persona {
private:
	string datos_identificacion1;
	string datos_identificacion2;
	string datos_identificacion3;
	string datos_identificacion4;
	string datos_identificacion5;
public:
	Identificacion(string, string, string, string, string, string, string, string, string, string);
	void mostrar_datosI();
	void mostrar_datosI2();
	void mostrar_datosI3();
	void mostrar_datosI4();
	void mostrar_datosI5();
};
class Pasaporte {
private:
	string datos_pasaporte1;
	string datos_pasaporte2;
	string datos_pasaporte3;
	string datos_pasaporte4;
	string datos_pasaporte5;
public:
	Pasaporte(string, string, string, string, string);
	void mostrar_datosP();
	void mostrar_datosP2();
	void mostrar_datosP3();
	void mostrar_datosP4();
	void mostrar_datosP5();
};
class Game {
private:
	int eleccion;
public:
	Game(int);
	void jugar();
};

Persona::Persona(string, string , string , string, string) {
	datos_p1 = {"-----Identificacion-----" "\n" "Axel David Flores Bajonero" "\n" "21 anios" "\n" "01/12/2000" "\n" "Sexo:H" "\n" "ID:AD011200" "\n" "Anio de registro: 2018" "\n" "Firma: ADflores" "\n" "------------------------"};
	datos_p2 = {"-----Identificacion-----" "\n" "Bibiana Bajonero Reyes" "\n" "48 anios" "\n" "01/11/1974" "\n" "Sexo:M" "\n" "ID:BB01174" "\n" "Anio de registro: 1992" "\n" "Firma:Bibiana Bajonero " "\n" "------------------------" };
	datos_p3 = {"-----Identificacion-----" "\n" "Megumi Katou" "\n" "20 anios" "\n" "26/09/2001" "\n" "Sexo:M" "\n" "ID:MK260901" "\n" "Anio de registro: 2017" "\n" "Firma:Megumi(*-*) " "\n" "------------------------" };
	datos_p4 = {"-----Identificacion-----" "\n" "Luka Bezheni Smirnov" "\n" "34 anios" "\n" "02/04/1974" "\n" "Sexo:H" "\n" "ID:LB020474" "\n" "Anio de registro: 1992" "\n" "Firma: LK_AD" "\n" "------------------------" };
	datos_p5 = {"-----Identificacion-----" "\n" "Chisato Nishikigi" "\n" "17 anios " "\n" "23/09/2005" "\n" "Sexo:M" "\n" "ID:CN230905" "\n" "Anio de registro: N/A" "\n" "Firma:chisatoUwU " "\n" "------------------------"};

}
Identificacion::Identificacion(string _datos_p1 , string _datos_p2, string _datos_p3, string _datos_p4, string _datos_p5, string _datos_identificacion1, string _datos_identificacion2, string _datos_identificacion3, string _datos_identificacion4, string _datos_identificacion5): Persona(_datos_p1,_datos_p2,_datos_p3,_datos_p4,_datos_p5) {
	datos_identificacion1 ;
	datos_identificacion2 = _datos_identificacion2;
	datos_identificacion3 = _datos_identificacion3;
	datos_identificacion4 = _datos_identificacion4;
	datos_identificacion5 = _datos_identificacion5;
}
Pasaporte::Pasaporte(string _datos_pasaporte1, string _datos_pasaporte2, string _datos_pasaporte3, string _datos_pasaporte4, string _datos_pasaporte5) {
	datos_pasaporte1 = { "-----------Pasaporte-----------" "\n" "Axel David Flores Bajonero" "\n" "21 anios" "\n" "01/12/2000" "\n" "Sexo:H" "\n" "ID:AD011200" "\n" "Numero de pasaporte:A01245" "\n" "Fecha de expiracion:01/12/28" "\n" "Firma: ADflores" "\n" "-------------------------------" };
	datos_pasaporte2 = { "-----------Pasaporte-----------" "\n" "Bibiana Bajonero Reyes" "\n" "48 anios" "\n" "01/11/1976" "\n" "Sexo:M" "\n" "ID:BB01174" "\n" "Numero de pasaporte:F05642" "\n" "Fecha de expiracion:06/09/22" "\n" "Firma:Bibiana Bajonero " "\n"  "-------------------------------" };
	datos_pasaporte3 = { "-----------Pasaporte-----------" "\n" "Megumi Katou" "\n" "20 anios" "\n" "26/09/2001" "\n" "Sexo:M" "\n" "ID:MK260901" "\n" "Numero de pasaporte:H01365" "\n" "Fecha de expiracion:17/10/25" "\n" "Firma:Megumi(*-*)" "\n" "-------------------------------" };
	datos_pasaporte4 = { "-----------Pasaporte-----------" "\n" "Luka Bezheni Smirnov" "\n" "34 anios" "\n" "02/04/1974" "\n" "Sexo:H" "\n" "ID:LB020474" "\n" "Numero de pasaporte:G89314" "\n" "Fecha de expiracion:31/12/24" "\n" "Firma: LK_AD" "\n"  "-------------------------------" };
	datos_pasaporte5 = { "-----------Pasaporte-----------" "\n" "Chisato Nishikigi" "\n" "17 anios " "\n" "23/09/2005" "\n" "Sexo:M" "\n" "ID:CN230905" "\n" "Numero de pasaporte:P21315" "\n" "Fecha de expiracion:22/03/20" "\n" "Firma:chisatoUwU" "\n"  "-------------------------------" };
	
}
Game::Game(int _eleccion) {
	eleccion = _eleccion;
}

void Game::jugar() {
	Music zelda;
	zelda.openFromFile("sounds/zelda 1.ogg");
	zelda.setVolume(10);
	Music zelda2;
	zelda2.openFromFile("sounds/zelda 1.ogg");
	zelda2.setVolume(10);
	Music zelda3;
	zelda3.openFromFile("sounds/zelda 1.ogg");
	zelda3.setVolume(10);
	Music zelda4;
	zelda4.openFromFile("sounds/zelda 1.ogg");
	zelda4.setVolume(10);
	Music opening;
	opening.openFromFile("sounds/opening.ogg");
	opening.setVolume(20);
	Music menosp;
	menosp.openFromFile("sounds/BE.ogg");
	menosp.setVolume(25);
	Music goode;
	goode.openFromFile("sounds/BP.ogg");
	goode.setVolume(25);
	Music bonusp;
	bonusp.openFromFile("sounds/GE.ogg");
	bonusp.setVolume(25);
	Music bad;
	bad.openFromFile("sounds/bad.ogg");
	bad.setVolume(25);
	Music error;
	error.openFromFile("sounds/error.ogg");
	error.setVolume(25);
	Music error2;
	error2.openFromFile("sounds/error.ogg");
	error2.setVolume(25);
	Music error3;
	error3.openFromFile("sounds/error.ogg");
	error3.setVolume(25);
	Music error4;
	error4.openFromFile("sounds/error.ogg");
	error4.setVolume(25);
	Music niveles;
	niveles.openFromFile("sounds/niveles.ogg");
	niveles.setVolume(40);
	Music nivel4;
	nivel4.openFromFile("sounds/nivel 4.ogg");
	nivel4.setVolume(20);
	int score = 0;
	string N1, N2, N3, N4, N5,N4p,user;
	opening.play();
	cout << "PAPERS PLASE" << endl;
	cout << "En este juego tomas el papel de un inspector de inmigracion con el objetivo de conseguir dinero y mantener a tu familia feliz"<<endl;
	system("pause");
	cout << "1.Jugar" << endl;
	cout << "0.Salir" << endl;
	cin >> eleccion;
	do {
		opening.stop();
		niveles.play();
		if (eleccion == 1) {
			cout << "Hola cuales es tu nombre?" << endl;
			cin >> user;
			system("cls");
			cout << "Nivel 1" << endl;
			cout << "\tScore " << score << endl;
			cout <<"Inspector " << user << ": Papeles por favor." << endl;
			cout << endl;
			cout << "Persona 1: claro!" << endl;
			cout << endl;
			Identificacion p1("", "", "", "", "", "", "", "", "", "");
			p1.mostrar_datosI();
			cout << "\n" << endl;
			Pasaporte pa1("", "", "", "", "");
			pa1.mostrar_datosP();
			cout << "Dejar pasar?" << endl;
			cout << "Si" << endl;
			cout << endl;
			cout << "No" << endl;
			cin >> N1;
			if (N1 == "si") {
				cout << "!la documentacion esta correcta!" << endl;
				cout << endl;
				score += 5;
				cout << "tu puntaje actual es: " << score << endl;
				niveles.stop();
				zelda.play();
			}
			else {
				cout << "!La documentacion estaba incorrecta!" << endl;
				cout << endl;
				score -= 5;
				cout << "tu puntaje actual es: " << score << endl;
				niveles.stop();
				error.play();
			}

			cout << "Presiona 2 para avanzar" << endl;
			cin >> eleccion;
			system("cls");
			niveles.play();
			if (eleccion == 2) {
				cout << "Nivel 2" << endl;
				cout << "\tScore " << score << endl;
				cout << "Inspector " << user<< ": Hola buen dia,Papeles por favor" << endl;
				cout << endl;
				cout << "Persona 2: claro en un momento se los paso!" << endl;
				cout << endl;
				Identificacion p2("", "", "", "", "", "", "", "", "", "");
				p2.mostrar_datosI2();
				cout << "\n" << endl;
				Pasaporte pas2("", "", "", "", "");
				pas2.mostrar_datosP2();
				cout << "Dejar pasar?" << endl;
				cout << "si" << endl;
				cout << endl;
				cout << "no" << endl;
				cin >> N2;
				if (N2 == "no") {
					cout << "!la documentacion esta incorrecta!" << endl;
					cout << endl;
					score += 5;
					cout << "tu puntaje actual es: " << score << endl;
					niveles.stop();
					zelda2.play();
				}
				else {
					cout << "!La documentacion estaba incorrecta!" << endl;
					cout << endl;
					score -= 5;
					cout << "tu puntaje actual es: " << score << endl;
					niveles.stop();
					error2.play();
				}
			}
			cout << "Presione 3 para continuar" << endl;
			cin >> eleccion;
			system("cls");
			if (eleccion == 3) {
				niveles.play();
				cout << "Nivel 3" << endl;
				cout << "\tScore " << score << endl;
				cout << "Inspector " << user<< ": Hola que tal me permite sus papeles por favor" << endl;
				cout << endl;
				cout << "Persona 3: Denme un momento" << endl;
				cout << endl;
				Identificacion p3("", "", "", "", "", "", "", "", "", "");
				p3.mostrar_datosI3();
				cout << "\n" << endl;
				Pasaporte pas3("", "", "", "", "");
				pas3.mostrar_datosP3();
				cout << "Dejar pasar?" << endl;
				cout << "si" << endl;
				cout << endl;
				cout << "no" << endl;
				cin >> N3;
				if (N3 == "si") {
					cout << "!la documentacion esta correcta!" << endl;
					cout << endl;
					score += 5;
					cout << "tu puntaje actual es: " << score << endl;
					niveles.stop();
					zelda3.play();
				}
				else {
				cout << "!La documentacion estaba incorrecta!" << endl;
				cout << endl;
				score -= 5;
				cout << "tu puntaje actual es: " << score << endl;
				niveles.stop();
				error3.play();
				}
			}
			cout << "Presione 4 para continuar" << endl;
			cin >> eleccion;
			niveles.stop();
			nivel4.play();
			system("cls");
			if (eleccion == 4) {
				cout << "Nivel 4" << endl;
				cout << "\tScore " << score << endl;
				cout << "Inspector " << user << ": Hola que tal me permite sus papeles por favor" << endl;
				cout << endl;
				cout << "Persona 4: Mmmmm espere" << endl;
				cout << endl;
				Identificacion p4("", "", "", "", "", "", "", "", "", "");
				p4.mostrar_datosI4();
				cout << "\n" << endl;
				Pasaporte pas4("", "", "", "", "");
				pas4.mostrar_datosP4();
				cout << "Esta persona luce algo sospechosa pero puden ser ideas mias" << endl;
				cout << endl;
				cout << "Dejarlo pasar?" << endl;
				cout << "si" << endl;
				cout << endl;
				cout << "no" << endl;
				cout << endl;
				cout << "x.Esperar ordenes" << endl;
				cin >> N4;
				if (N4 == "x") {
					cout << "Despues de investigar un rato al sospechoso no se puede concluir que hacer, unos quieren dejarlo pasar y otros no" << endl;
					cout << "para libarse del problema tu jefes dejan que tu des el veredicto final" << endl;
					cout << "Entonces que eliges??" << endl;
					cout << "si" << endl;
					cout << endl;
					cout << "no" << endl;
					cin >> N4p;
					if (N4p == "no") {
						
						score += 50;
						nivel4.stop();
						cout << "La persona si era terrorista! Tu jefes impresionados por la buena decison tomada te dan un bono (0o0)" << endl;
						cout << "tu puntaje actual es: " << score << endl;
						bonusp.play();
					}
					else {
						score -= 50;
						nivel4.stop();
						cout << "La persona si era terrorista! Tu jefes decepcionados te miran de mala forma (-_-)" << endl;
						cout << "tu puntaje actual es: " << score << endl;
						menosp.play();
					}
				}
				if (N4 == "si") {
					nivel4.stop();
					score -= 20;
					cout << "Si era un terroista! mala suerte, nadie se entero que fuiste tu quine lo dejo pasar" << endl;
					cout << ", por lo que pudes seguir con tu empleo " << endl;
					cout << "tu puntaje actual es: " << score << endl;
					error.play();
				}
				if (N4 == "no") {
					nivel4.stop();
					score += 20;
					cout << "La persona si era terrorista! buen trabajo en no dejarlo pasar optienes una bonificacion" << endl;
					cout << "tu puntaje actual es: " << score << endl;
					zelda4.play();
				}
			}
			cout << "Presione 5 para continuar" << endl;
			cin >> eleccion;
			nivel4.stop();
			bonusp.stop();
			menosp.stop();
			niveles.play();
			system("cls");
			if (eleccion == 5) {
				cout << "Nivel 5 (ultimo)" << endl;
				cout << "\tScore " << score << endl;
				cout << "Inspector " << user << ": Hola papeles por favor" << endl;
				cout << endl;
				cout << "Persona 5: !Claro denme, un momento!" << endl;
				cout << endl;
				Identificacion p5("", "", "", "", "", "", "", "", "", "");
				p5.mostrar_datosI5();
				cout << "\n" << endl;
				Pasaporte pas5("", "", "", "", "");
				pas5.mostrar_datosP5();
				cout << "Dejar pasar?" << endl;
				cout << "si" << endl;
				cout << endl;
				cout << "no" << endl;
				cin >> N5;
				if (N5 == "si") {
					cout << "!La documentacion esta correcta!" << endl;
					cout << endl;
					score += 5;
					cout << "tu puntaje actual es: " << score << endl;
				}
				else {
					cout << "!La documentacion estaba incorrecta!" << endl;
					cout << endl;
					score -= 5;
					cout << "tu puntaje actual es: " << score << endl;
				}
			}
			system("cls");
			if (score > 0) {
				niveles.stop();
				goode.play();
				cout << "Good ending" << endl;
				cout << endl;
				cout << "Tu y tu familia viven feliz y pacificamente :)" << endl;
				cout << endl;
			}
			else {
				niveles.stop();
				bad.play();
				cout << "Bad ending" << endl;
				cout << endl;
				cout << "Te quedate sin trabajo tu y tu familia  mueren (X_X)" << endl;
				cout << endl;
			}
		}
		cout << "!Gracias por jugar! /(0-0)/" << endl;
		cout << endl;
		cout << "\tScore final " << score << endl;
		score = 0;
		cout << "1.Volver a Jugar" << endl;
		cout << endl;
		cout << "0.Salir" << endl;
		cin >> eleccion;
	}while (eleccion != 0);
}

void Identificacion::mostrar_datosI() {
	datos_identificacion1 = datos_p1;
	cout << datos_identificacion1 << endl;
}
void Identificacion::mostrar_datosI2() {
	datos_identificacion2 = datos_p2;
	cout << datos_identificacion2 << endl;
}
void Identificacion::mostrar_datosI3() {
	datos_identificacion3 = datos_p3;
	cout << datos_identificacion3 << endl;
}
void Identificacion::mostrar_datosI4() {
	datos_identificacion4 = datos_p4;
	cout << datos_identificacion4 << endl;
}
void Identificacion::mostrar_datosI5() {
	datos_identificacion5 = datos_p5;
	cout << datos_identificacion5 << endl;
	
}

void Pasaporte::mostrar_datosP(){
	cout << datos_pasaporte1 << endl;
}
void Pasaporte::mostrar_datosP2() {
	cout << datos_pasaporte2 << endl;
}
void Pasaporte::mostrar_datosP3() {
	cout << datos_pasaporte3 << endl;
}
void Pasaporte::mostrar_datosP4() {
	cout << datos_pasaporte4 << endl;
}
void Pasaporte::mostrar_datosP5() {
	cout << datos_pasaporte5 << endl;
}
