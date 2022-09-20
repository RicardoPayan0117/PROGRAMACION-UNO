#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h> 

int saldo = 2500;
float depositar, retirar;
int opcion, pin, G;
char transaction ='s';

using namespace std;

int main(void)
{
	
	setlocale(LC_ALL, "");

	while (pin != 2001){
		cout <<" Ingrese su PIN:\n";
		cin >> pin;
		if (pin != 2001)
		cout << " El PIN proporcionado es incorrecto. \n";
	
	}
	do  {
		cout << " \n";
		cout << "***Bienvenido al cajero automático***\n";
		cout << " \n";
		cout << "1. Verificar saldo.\n";
		cout << "2. Retirar dinero.\n";
		cout << "3. Depositar dinero.\n";
		cout << "4. Salir.\n";
		cout << " \n";
		cout << " ¿Que movimiento desea realizar? \n";
		cin >> opcion;
			cout << " \n";
		switch (opcion)

		{
		
		case 1:
			cout << "\n Su saldo es de " << saldo << "$.";
		break;
		
		case 2:
			cout << " Ingrese el monto a retirar:\n";
			cin >> retirar;
		if (retirar >(saldo - 0)){
				cout <<"\n Su saldo es insuficiente.";

			}
			else{
				saldo = saldo - retirar;
				cout << "\n Por favor, cobrar dinero en efectivo, " << retirar <<"$.";
				cout << "\n Tu saldo actual es "<< saldo << "$.";
			} break;
		
		case 3:
			cout << " Ingrese la cantidad para depositar:\n";
			cin >> depositar;
            saldo = saldo + depositar;
			cout << " Tu saldo es " << saldo << "$."; 
			break;
		
		case 4:
			cout << "\n Gracias por usar el cajero automático!";
			break;
		
		default:
			cout << "\n Elección inválida";	
			break;
	
			}
	
		cout << "\n\n\n ¿Desea tener otra transacción?(s/n): \n";
		fflush(stdin);
		cin >>transaction;
		if (transaction == 'n'|| transaction == 'N')
                    G = 1;
	} while (!G);
	cout << "\n\n Gracias por utilizar el cajero automático";
}
