#include<iostream>
#include<string>
using namespace std;

struct Fecha {

	int dia;
	int mes;
	int anyo;

};

struct Nombre {

	string nombre;
	string apellido1;
	string apellido2;

};

struct NIF {

	int numero;
	char letra;

};

int main() {

	Fecha a, b, c;
	NIF kev;

	a.dia = 1;
	a.mes = 5;
	a.anyo = 1531;

	b.dia = 2;
	b.mes = 2;
	b.anyo = 2155;

	c.dia = 10;
	c.mes = 12;
	c.anyo = 0;

	kev.numero = 12345678;
	kev.letra = 'h';

	cout << a.dia << "/" << a.mes << "/" << a.anyo << "\n";
	cout << kev.numero<<kev.letra<<"\n";

	system("pause");
	return 0;
}