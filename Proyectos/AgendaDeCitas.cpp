#include <iostream>
#include <string.h>
#include <iomanip>
#include <ctime>

using namespace std;
	
	int a, mes, dia, hora, minutos, segundos; 		//se usan para guardar la hora y fecha actual.
	int opcion;					     		  		//Lo usa el switch para elegir las opciones.
	int cimaEventos = 1; 							//CimaEventos marca el espacio libre mas alto de la matriz para agendar el evento en la cima.
	string citas[100][4];    				  		//Esta matriz guarda los datos de las citas(Nombre, telefono, id del doctor y fecha/hora).
	string doctores[10][4];							//Guarda los datos de los doctores.
	
void inicializarDoctores(){
	
doctores[1][0] = "1";								//ID del doctor.
doctores[1][1] = "Juan Perez";						//Nombre.
doctores[1][2] = "Otorrinolaringologo";				//Especialidad.
doctores[1][3] = "8AM-2PM y 3PM-6PM";				//Horario.

doctores[2][0] = "2";
doctores[2][1] = "Alberto Lopez";
doctores[2][2] = "Nutriologo";
doctores[2][3] = "8AM-2PM y 3PM-6PM";	

doctores[3][0] = "3";
doctores[3][1] = "Andrea Isabel";
doctores[3][2] = "Pediatra";
doctores[3][3] = "8AM-2PM y 3PM-6PM";	

doctores[4][0] = "4";
doctores[4][1] = "Maleny Soto";
doctores[4][2] = "Cirugía general";
doctores[4][3] = "8AM-2PM y 3PM-6PM";	

doctores[5][0] = "5";
doctores[5][1] = "Jhony Bae";
doctores[5][2] = "Traumatologo";
doctores[5][3] = "8AM-2PM y 3PM-6PM";

doctores[6][0] = "6";
doctores[6][1] = "Alondra Urias";
doctores[6][2] = "Radiologo";
doctores[6][3] = "8AM-2PM y 3PM-6PM";		

doctores[7][0] = "7";
doctores[7][1] = "Oscar Meza";
doctores[7][2] = "Cardiologo";
doctores[7][3] = "8AM-2PM y 3PM-6PM";	

} //Fin funcion inicializar doctores. 
 
void menu(){ //Muestra las opciones del programa
	system("color 0d"); //Color morado.
	
	cout << " \n";
	cout << "___________________________________________________________________________________________________________________________________________________________________________________________________________________\n";
	cout << a << "/" << mes << "/" << dia << " ----> " 					//imprime la fecha actual.
		 << hora << ":" << minutos << ":" << segundos << ".\n";			//imprime la hora actual.
 	cout << " \n";
	cout << "1) Agendar cita. \n";
	cout << "2) Editar cita. \n";
	cout << "3) Eliminar cita. \n";
	cout << "4) Mostrar todas las citar. \n";
	cout << " \n";
	cout << "9) Salir.  \n";
	cout << " \n";
	cout << "___________________________________________________________________________________________________________________________________________________________________________________________________________________\n";	cout <<endl;

} //Fin funcion menu.

void fechaHora(){
	
	time_t t;						//sirve para que la libreria
	t = time(NULL);                 //ctime obtenga la hora actual
	struct tm *fecha;				//y usa el struct tm para poder 
	fecha = localtime (&t);			//usar el comando fecha.
	
	a = fecha->tm_year+1900;		// usa el struct de arriba para almacenar
	mes = fecha->tm_mon+1;			//los datos en una variable que se usara
	dia = fecha->tm_mday;			//para poder comparar.
	hora = fecha->tm_hour;
	minutos = fecha->tm_min;
	segundos = fecha->tm_sec;

}//Fin funcion fechaHora.

 void opcionInvalida(){ //void para la opcion default.
	system("color 0c"); //Color rojo.
	
	cout << "Opcion invalida. \n";
	system("pause");
	system("cls");
} //Fin funcion invalida.

void salir(){ //Cierra el programa.
	system("cls");
	system("color 0c"); //Color rojo.
	
   	cout << " \n";
	cout << "Gracias por usar el programa...";
} //Fin funcion salir.

void ingresarCita(){ //Permite agendar una cita.
	system("color 0a"); // Color verde.
	
	system("pause");
	system("cls");
} //Fin funcion ingresarCita.

void mostrarCitas() { //Permite mostrar todas las citas.
 	system("color 0a"); // Color verde.
 	
	system("pause");
 	system("cls");
 } //Fin funcion mostrarCitas.

void editarCita(){      //Permite editar una cita.
	system("color 0a"); // Color verde.
	
	system("pause");
 	system("cls");	
} //Fin funcion editarCita;

void eliminarCita(){ //Permite elimar una cita.
 	system("color 0a"); // Color verde.
	
	system("pause");
	system("cls");
} // Fin funcion eliminarCita.

int main(){
	system("color 0d");
		fechaHora(); 
        menu();  
		
		cout << "Opcion: ";
		cin  >> opcion; //Uso opcion para entrar en los case.
 		cout << " \n";
 		if (opcion == false){         //Comprueba que el usuario ingrese un numero.
 			system("cls");
	system("color 0c"); //Color rojo.
			cout << "Solo se aceptan numeros.  \n";
			system("pause");
			cin.clear();
			fflush(stdin);
			return main();                 //Regresa al inicio del menu en caso de que no sea un numero.
	}else{  //si, si es un numero entra al "else".
       switch(opcion){
        	case 9: // opcion 0(cierra el programa).	
        		salir();
        		return 0; // Cierra el programa.
        	break; //Fin case 0;
        	
            case 1: // Opcion 1(Permite ingresar una cita nueva en la agenda). 
            	ingresarCita();    
						return main();       
            break;
            
            case 2: // Opcion 2(Permite editar una cita ya existente). 
            	editarCita();
					return main();               
            break;
            
             case 3: // Opcion 3(Eliminar una cita agendada). 
            	eliminarCita(); 
					return main();             
            break;
            
            case 4: // Opcion 4(Mostrar todos las citas). 
            	mostrarCitas();  
					return main();             
            break;
            
            default: //cualquier otra opcion.
				opcionInvalida();
				return main();
            break;  
            
   	      }//fin switch.
        }// else validacion.
	}//Fin main.