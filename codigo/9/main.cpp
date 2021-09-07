#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Fecha {
	private:
		unsigned int dia,mes,anio,hora,minutos,segundos;
		friend int main();
	public:
		Fecha(int,int,int,int,int,int);
		void operator -(Fecha&);
		Fecha operator --();
};

Fecha:: Fecha(int dia,int mes,int anio,int hora,int minutos,int segundos) {
	this -> dia=dia;
	this -> mes=mes;
	this -> anio=anio;
	this -> hora=hora;
	this -> minutos=minutos;
	this -> segundos=segundos;
};

void Fecha:: operator -(Fecha& fecha1) {
	if(hora > fecha1.hora) {
		cout << "Diferencia anio: " << anio -fecha1.anio << "             ";
		cout << "Diferencia en mes: " << mes - fecha1.mes <<endl;
		cout << "Diferencia en Dia: " << dia - fecha1.dia << "          ";
		cout << "Diferencia en hora: " << hora - fecha1.hora<< endl;
		cout << "Diferencia en Minutos: " << minutos - fecha1.hora<<"      ";
		cout << "Diferencia en segundos: " << segundos - fecha1.segundos<<endl;
	} else {
		cout << "La otra fecha tiene la hora mayor" <<endl;
	}
};

Fecha Fecha::operator --() {
	anio--;
	mes-=2;
	dia-=10;
	hora-=3;
	minutos -=15;
	segundos -=5;
	return *this;
};

enum firstdate {
	anio=2021, mes= 5,dia =7, hora = 3, minutos= 20, segundos=15
};

int main() {
	Fecha fecha2(anio, mes, dia, hora, minutos, segundos);

	Fecha fecha1 = fecha2;

	cout << "Fecha 1: Formato = (DD/MM/YYYY - hh:mm:ss) = " << fecha2.dia << "/" <<
	     fecha2.mes << "/" << fecha2.anio << " - " << fecha2.hora << ":"<< fecha2.minutos
	     << ":" << fecha2.segundos << endl;

	--fecha1;


	cout << "Fecha 2: Formato = (DD/MM/YYYY - hh:mm:ss) = " << fecha1.dia << "/" <<
	     fecha1.mes << "/" << fecha1.anio << " - " << fecha1.hora <<":"<< fecha1.minutos
	     << ":" << fecha1.segundos << endl << endl;



	fecha2 - fecha1;
	return 0;
}