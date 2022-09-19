#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h> 

int saldo = 2500;
float depositar, retirar;
int opcion, pin, G;
char transaction ='s';

int main(void){
	
	setlocale(LC_ALL, "");

	while (pin != 2001){
		printf("Por favor, ingrese su PIN:\n");
		scanf("%d", &pin);
		if (pin != 2001)
		printf("ingrese su contraseña.\n");
	}
	do{
		printf("***Bienvenido al cajero automático***\n");
		printf("1. Verificar saldo.\n");
		printf("2. Retirar dinero.\n");
		printf("3. Depositar dinero.\n");
		printf("4. Salir.\n");
		printf("**************************************************\n\n");
		printf("Ingrese su elección:\n");
		scanf("%d", &opcion);
		switch (opcion){
		
		case 1:
			printf("\n Tu balance en S/%d ", saldo); break;
		
		case 2:
			printf("\n Ingrese el monto a retirar:\n");
			scanf("%f", &retirar);
			if (retirar >(saldo - 500)){
				printf("\n Saldo insuficiente.");
			}
			else{
				saldo = saldo - retirar;
				printf("\n\n Por favor, cobrar dinero en efectivo.");
				printf("\n Tu saldo actual es %f", saldo);
			} break;
		
		case 3:
			printf("\n Ingrese la cantidad para depositar:\n");
			scanf("%f", &depositar);
            saldo = saldo + depositar;
			printf("Tu saldo es %f", saldo); break;
		
		case 4:
			printf("\n Gracias por usar el cajero automático!"); break;
		
		default:
			printf("\n Elección inválida");
		}
	
		printf("\n\n\n ¿Desea tener otra transacción?(s/n): \n");
		fflush(stdin);
		scanf("%c", &transaction);
		if (transaction == 'n'|| transaction == 'N')
                    G = 1;
	} while (!G);
	printf("\n\n Gracias por utilizar el servicio del cajero automático!");
}
