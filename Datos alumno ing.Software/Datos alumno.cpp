#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
 char nombre[30];
 char apellidoPaterno[20];
 char apellidoMaterno[20];
 char diaDeNacimiento[5];
 char mesDeNacimiento[5];
 char aDeNacimiento[5];
 char peliculaFavorita[50];
 
 
int main()
{
cout<< "ingrese su nombre(s) : "<<endl;
cin>> nombre;

cout<< "ingrese su apellido paterno :"<<endl;
cin>> apellidoPaterno;

cout<< "ingrese su apellido materno :"<<endl;
cin>> apellidoMaterno;

cout<< "ingrese su dia de nacimiento :"<<endl;
cin>> diaDeNacimiento;

cout<< "ingrese su mes de nacimiento :"<<endl;
cin>> mesDeNacimiento;

cout<< "ingrese su año de nacimiento :"<<endl;
cin>> aDeNacimiento;

cout<< "ingrese su pelicula favorita :"<<endl;
cin>> peliculaFavorita;

	
	return 0;
}
