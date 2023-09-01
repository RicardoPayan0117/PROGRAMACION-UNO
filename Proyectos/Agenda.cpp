#include <iostream>

using namespace std;

	int opcion;		//Lo usa el switch para elegir las opciones.
	int entrar = 1, cimaEventos = 0; // entrar mantiene el programa abierto, cimaEventos marca un espacio libre para agendar un evento.
	string eventos[100][5];    //Esta matris guarda los datos de los eventos(fecha, hora, lugar, nombre y descripcion).
	
void menu(){ //Muestra las opciones del programa
	system("color 0d");
	
	cout << "_______________________________________________________________________" <<endl;
 	cout << endl;
	cout << "1) Ingresar un evento. " <<endl;
	cout << "2) Editar evento. " <<endl;
	cout << "3) Eliminar un evento. " <<endl;
	cout << "4) Mostrar todod los eventos. " <<endl;
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
	
	cout << "Ingrese el nombre del evento: " <<endl;
	cin  >> eventos[cimaEventos][1];	//cin  >> Eventos[cimaEvento][1];//ingresa el dato del evento en la cima(espacio libre mas alto de la matriz)
	cout << "Describe el evento: " <<endl;
	cin  >> eventos[cimaEventos][2];
	cout << "Ingrese el lugar del evento: " <<endl;
	cin  >> eventos[cimaEventos][3];
	cout << "Ingrese la fecha del evento: " <<endl;
	cin  >> eventos[cimaEventos][4];
	cout << "Ingrese la hora del evento: " <<endl;
	cin  >> eventos[cimaEventos][5];
	cimaEventos++;//eleva el valor de cima en uno para apuntar al siguiente espacio libre.
	
} //Fin ingresar evento.

void mostrarEventos() //void opcion 5.
 {
 	system("color 0a");
 	
 	if (cimaEventos == 0){ // revisa que haya tareas para mostar.
	cout<< "No hay eventos para mostar." <<endl;
	}else{//si hay tareas busca.
		for(int i = 0; i < cimaEventos; i++){ 
		cout << "Evento #" << i << " " << eventos[i][1] << " " << eventos[i][2]  << " " << eventos[i][3]  << " " << eventos[i][4]  << " " << eventos[i][5] <<endl;  
		}
 	}
 }

int main(){
	system("color 0d");
		
		   while(entrar == 1 ){ //Mantiene el programa abierto.
        menu();  
		
		cout << "Opcion: ";
		cin  >> opcion; //Uso opcion para entrar en los case.
 		cout <<endl;
 		
 		if (opcion == false){
		cout << "Opcion invalida." <<endl;
		cin.clear();
		fflush(stdin);
		return main();
	}else{
       switch(opcion){
        	case 9: // opcion 9(cierra el programa).	
        		salir();
        		return 0;
        	break; //Fin case 9;
        	
            case 1: // Opcion 1(Ingresar una tarea). 
            	ingresarEvento();               
            break;
            
             case 4: // Opcion 5(Mostrar todos los eventos). 
            	mostrarEventos();               
            break;
            
            default: //cualquier otra opcion.
				opcionInvalida();
            break;  
            
   	      }//fin switch.
        }// else validacion.
      }// Fin while entrar.
	}//Fin main.