#include <iostream>

using namespace std;

	int opcion, entrar = 1;
	
void menu(){ //Muestra las opciones del programa
	system("color 0d");
	
	cout << "_______________________________________________________________________" <<endl;
 	cout << endl;
	cout << "1) Ingresar un evento. " <<endl;
	cout << "2) Editar evento. " <<endl;
	cout << "3) Eliminar un evento. " <<endl;
	cout << "5) Mostrar todod los eventos. " <<endl;
	cout << endl;
	cout << "9) Salir. " <<endl;
	cout << endl;
 	cout << "_______________________________________________________________________" <<endl;
 	cout << endl;
} //Fin void menu 

 void opcionInvalida(){ //void para la opcion default.
	system("color 0c");
	
	cout << "Opcion invalida." <<endl;
	cout << "Ingrese una opcion valida." <<endl;
	cout << endl;	
} //Fin opcion invalida.

void salir(){ //void opcion 0.{
	system("cls");
	system("color 0c");
	
   	cout <<endl;
	cout << "Gracias por usar el programa...";
	cout <<endl;
} //Fin salir.

void ingresarEvento(){ //void opcion 1.
	system("color 0a");
	
	cout << "Nombre del evento: " <<endl;
	
} //Fin ingresar evento.

int main(){
	system("color 0d");

        menu();  
		
		cout << "Opcion: ";
		cin  >> opcion; //Uso opcion para entrar en los case.
 		cout <<endl;
 		
 		if (opcion == false){
		cout << "Opcion invalida." <<endl;
		cin.clear();
		fflush(stdin);
	}else{
       switch(opcion){
        	case 9: // opcion 9(cierra el programa).	
        		salir();
        		return 0;
        	break; //Fin case 9;
        	
            case 1: // Opcion 1(Ingresar una tarea). 
            	ingresarEvento();               
            break;
            
            default: //cualquier otra opcion.
				opcionInvalida();
            break;  
   	      } //fin switch.
        }// fin while_entrar.
	}//Fin main.