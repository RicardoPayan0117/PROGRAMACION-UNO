#include <iostream>
#include <string.h>
#include <iomanip>
#include <ctime>

using namespace std;

	int opcion;					     //Lo usa el switch para elegir las opciones.
	int entrar = 1, cimaEventos = 0; //Entrar mantiene el programa abierto, cimaEventos marca un espacio libre para agendar un evento.
	string eventos[100][5];    		 //Esta matriz guarda los datos de los eventos(fecha, hora, lugar, nombre y descripcion).
	string dato;                     //Se usa paraagrregar un dato que luego se manda a la matriz.
	
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
} //Fin menu 

 void opcionInvalida(){ //void para la opcion default.

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
	
	cout << "Ingrese el nombre del evento: ";
	cin.ignore();                       //No se para que es pero si lo quito no jala =(
	getline(cin, dato);                 //Pide el nombre del evento-
		eventos[cimaEventos][1] = dato; //Almacena el evento en la matriz para guardarlo.
		
	cout << "Describe el evento: ";
	getline(cin, dato); 
		eventos[cimaEventos][2] = dato;
		
	cout << "Ingrese el lugar del evento: ";
	getline(cin, dato); 
		eventos[cimaEventos][3] = dato;
		
	cout << "Ingrese la fecha del evento: ";
	getline(cin, dato); 
		eventos[cimaEventos][4] = dato;
		
	cout << "Ingrese la hora del evento: ";
	getline(cin, dato); 
		eventos[cimaEventos][5] = dato;
	
	cimaEventos++;//eleva el valor de cima en uno para apuntar al siguiente espacio libre.

} //Fin ingresar evento.

void mostrarEventos() //void opcion 5.
 {
 	system("color 0a");
 	
 	if (cimaEventos == 0){ // revisa que haya tareas para mostar.
	cout<< "No hay eventos para mostar." <<endl;
	}else{//si hay tareas imprime.
		for(int i = 0; i < cimaEventos; i++){ //empieza desde el primer fila de la matriz hasta la cima que seria la ultima fila con eventos.  
		cout << "| Evento #" << i << " | Nombre: " << eventos[i][1] << " | Descripcion: " << eventos[i][2]  << " |Lugar: " << eventos[i][3]  << " | Fecha: " << eventos[i][4]  << " | Hora: " << eventos[i][5] << " |"<<endl;  
		}
 	}
 }

void editarEvento(){
	cout << "Ingrese el numero de evento: " <<endl;
	cin  >> opcion;
	
		if (opcion == false){ //este if compruba que el usuario este ingresando un numero y no una letra/caracter especial.
		cout << "Debe ingresar el numero de evento." <<endl;
		cin.clear();    //Los use para que el programa no se cicle.
		fflush(stdin);  //
		editarEvento(); //Regresa a el inicio de la funcion(void).
		
	}else{
		if(opcion > 0 and opcion < cimaEventos){ // Este if comprube que el numero que ingreso el usuario exista en la matriz.
				cout << "El evento a editar es el siguiente: "<<endl;	//Se usa para mostrar el evento selecionado.
	cout << "| Evento #" << opcion << " | Nombre: " << eventos[opcion][1] << " | Descripcion: " << eventos[opcion][2]  << " |Lugar: " << eventos[opcion][3]  << " | Fecha: " << eventos[opcion][4]  << " | Hora: " << eventos[opcion][5] << " |"<<endl;  
				// aqui empieza la edicion del evento.
		}else{
				cout << "El numero que ingreso no existe en la matriz. "<<endl;
				editarEvento();
			 } //Fin comprobacion numero valido.
		 } //Fin comprobacion numero.
} //Fin void editarEvento;

int main(){
	system("color 0d");
		
		   while(entrar == 1 ){ //Mantiene el programa abierto.
        menu();  
		
		cout << "Opcion: ";
		cin  >> opcion; //Uso opcion para entrar en los case.
 		cout <<endl;
 		
 		if (opcion == false){         //Comprueba que el usuario ingrese un numero.
		cout << "Opcion invalida." <<endl;
		cin.clear();
		fflush(stdin);
		return main();                 //Regresa al inicio del menu en caso de que no sea un numero.
	}else{  //si, si es un numero entra al "else".
       switch(opcion){
        	case 9: // opcion 9(cierra el programa).	
        		salir();
        		return 0; // Cierra el programa.
        	break; //Fin case 9;
        	
            case 1: // Opcion 1(Permite ingresar una tarea nueva). 
            	ingresarEvento();               
            break;
            
            case 2: // Opcion 2(Permite editar una tarea ya existente). 
            	editarEvento();               
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