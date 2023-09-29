#include <iostream>
#include <string.h>
#include <iomanip>
#include <ctime>

using namespace std;
	
	int a, mes, dia, hora, minutos, segundos; 		//se usan para guardar la hora y fecha actual.
	int int1, int2, int3, int4, int5;               //se usan para alacenar datos de manera temporal.
	int opcion;					     		  		//Lo usa el switch para elegir las opciones.
	int editar = 0, entrar = 1, cimaEventos = 1; 	//Entrar mantiene el programa abierto, cimaEventos marca un espacio libre para agendar un evento.
	string eventos[100][5];    				  		//Esta matriz guarda los datos de los eventos(fecha, hora, lugar, nombre y descripcion).
	string fh;										//se usan para guardar los datos y creaer un acadena para almacenar ->fh.
	string dato;                     		  		//Se usa paragregar un dato que luego se manda a la matriz.
	
void menu(){ //Muestra las opciones del programa
	system("color 0d");
	cout << " \n";
	cout << "_______________________________________________________________________ \n";
	cout << a << "/" << mes << "/" << dia << " ----> " 					//imprime la fecha actual.
		 << hora << ":" << minutos << ":" << segundos << ".\n";			//imprime la hora actual.
 	cout << " \n";
	cout << "1) Ingresar un evento. \n";
	cout << "2) Editar evento. \n";
	cout << "3) Eliminar un evento. \n";
	cout << "4) Mostrar todos los eventos. \n";
	cout << " \n";
	cout << "9) Salir.  \n";
	cout << " \n";
 	cout << "_______________________________________________________________________ \n";
	cout <<endl;
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

	cout << "Opcion invalida. \n";
	cout << "Ingrese una opcion valida. \n";
	cout << endl;
} //Fin funcion invalida.

void salir(){ //funcion salir.
	system("cls");
	system("color 0c");
	
   	cout << " \n";
	cout << "Gracias por usar el programa...";
	cout <<endl;
} //Fin funcion salir.

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

} //Fin ingresar evento.

void validarFecha(){ //Funcion validar fecha.
	cout << " \n";
	cout << "Fecha del evento en numeros.  \n";
	cout << "Ingrese el año: ";
	cin  >> int1;
	if(int1 < a){	//Valida que el año agregado sea de un año que no haya pasado.
		cout << "El año que ingreso es invalido. \n";
		return validarFecha();
	}else{
	cout << "Ingrese el mes: ";
	cin  >> int2;
		if(int2 < 0 || int2 > 12){ //Valida que el mes sea valido, un numero del 1 al 12.
			cout << "El mes que a ingreso es invalido ingrese un numero del 1 al 12. \n";
			return validarFecha();
		}else{
			if(int1 == a && int2 < mes){ //Valida que si el año es el actual el mes no haya pasado.
				cout << "El mes que a ingreso es invalido. \n";
			return validarFecha();
			}else{
				cout << "Ingrese el dia: ";
				cin  >> int3;
				if(int1 == a and int2 == mes and int3 < dia){ //valida que si el año y el mes es el actual el dia no haya pasado.
					cout << "El dia que ingreso ya paso. \n";
					return validarFecha();
				}else{
				if(int2 == 1){										//estos validan que el dia que ingrese el usaurio sea valido pra el mes.
					if(int3 < 1 || int3 > 31){
						cout << "El dia que ingreso es invalido, enero solo tiene 31 dias. \n";
						return validarFecha();
					}else{
						
						cout << "La fecha que ingreso es: " << int1 << "/" << int2 << "/" << int3 <<endl;
					}
				}else if(int2 == 2){
					if(int3 < 1 || int3 > 28){
						cout << "El dia que ingreso es invalido, febrero solo tiene 28 dias. \n";
						return validarFecha();
					}else{
						
						cout << "La fecha que ingreso es: " << int1 << "/" << int2 << "/" << int3 <<endl;
					}
				}else if(int2 == 3){
					if(int3 < 1 || int3 > 31){
						cout << "El dia que ingreso es invalido, marzo solo tiene 31 dias. \n";
						return validarFecha();
					}else{
						
						cout << "La fecha que ingreso es: " << int1 << "/" << int2 << "/" << int3 <<endl;
					}
				}else if(int2 == 4){
					if(int3 < 1 || int3 > 30){
						cout << "El dia que ingreso es invalido, abril solo tiene 30 dias. \n";
						return validarFecha();
					}else{
						
						cout << "La fecha que ingreso es: " << int1 << "/" << int2 << "/" << int3 <<endl;
					}
				}else if(int2 == 5){
					if(int3 < 1 || int3 > 31){
						cout << "El dia que ingreso es invalido, mayo solo tiene 31 dias. \n";
						return validarFecha();
					}else{
						
						cout << "La fecha que ingreso es: " << int1 << "/" << int2 << "/" << int3 <<endl;
					}
				}else if(int2 == 6){
					if(int3 < 1 || int3 > 30){
						cout << "El dia que ingreso es invalido, junio solo tiene 30 dias. \n";
						return validarFecha();
					}else{
						
						cout << "La fecha que ingreso es: " << int1 << "/" << int2 << "/" << int3 <<endl;
					}
				}else if(int2 == 7){
					if(int3 < 1 || int3 > 31){
						cout << "El dia que ingreso es invalido, julio solo tiene 31 dias. \n";
						return validarFecha();
					}else{
						
						cout << "La fecha que ingreso es: " << int1 << "/" << int2 << "/" << int3 <<endl;
					}
				}else if(int2 == 8){
					if(int3 < 1 || int3 > 31){
						cout << "El dia que ingreso es invalido, agosto solo tiene 31 dias. \n";
						return validarFecha();
					}else{
						
						cout << "La fecha que ingreso es: " << int1 << "/" << int2 << "/" << int3 <<endl;
					}
				}else if(int2 == 9){
					if(int3 < 1 || int3 > 30){
						cout << "El dia que ingreso es invalido, septiembre solo tiene 30 dias. \n";
						return validarFecha();
					}else{
						
						cout << "La fecha que ingreso es: " << int1 << "/" << int2 << "/" << int3 <<endl;
					}
				}else if(int2 == 10){
					if(int3 < 1 || int3 > 31){
						cout << "El dia que ingreso es invalido, octubre solo tiene 31 dias. \n";
						return validarFecha();
					}else{
						
						cout << "La fecha que ingreso es: " << int1 << "/" << int2 << "/" << int3 <<endl;
					}
				}else if(int2 == 11){
					if(int3 < 1 || int3 > 30){
						cout << "El dia que ingreso es invalido, noviembre solo tiene 30 dias. \n";
						return validarFecha();
					}else{
						
						cout << "La fecha que ingreso es: " << int1 << "/" << int2 << "/" << int3 <<endl;
					}
				}else if(int2 == 12){
					if(int3 < 1 || int3 > 31){
						cout << "El dia que ingreso es invalido, diciembre solo tiene 31 dias. \n";
						return validarFecha();
					}else{
						
						cout << "La fecha que ingreso es: " << int1 << "/" << int2 << "/" << int3 <<endl;
					}
				}			
					fh = to_string(int1) + "/" + to_string(int2) + "/" + to_string(int3); //comvierte la fecha ingresada en una cadena de texto.
					eventos[cimaEventos][4] = fh;										  //guarda la cadena de texto.
				}	
			}
		}	
	}
} //Fin funcion validar fecha.

void validarHora(){
		cout << "Ingrese la hora del evento en formato 24hrs: ";
	cin  >> int4;
	if(int4 < 1 || int4 > 24){
			cout << "El horario que ingreso es invalido.1 \n";
			return validarHora();
	}else{	
		if(int1 == a and int2 == mes and int3 == dia and int4 < hora){
			cout << "El horario que ingreso es invalido.2 \n";
			return validarHora();
		}else{
			cout << "Ingrese los minutos: ";
			cin  >> int5;
			if(int5 < 1 || int5 > 60 ){
				cout << "El horario que ingreso es invalido.3 \n";
				return validarHora();
			}else{
				if(int1 == a and int2 == mes and int3 == dia and int4 == hora and int5 < minutos){
					cout << "El horario que ingreso es invalido.2 \n";
					return validarHora();
			}else{
				fh = to_string(int4) + ":" + to_string(int5); //comvierte la fecha ingresada en una cadena de texto.
				eventos[cimaEventos][5] = fh;	
				cout << "La hora que ingreso es: " << fh <<endl;

			}
			}		
		}
	}
	
	cimaEventos++;//eleva el valor de cima en uno para apuntar al siguiente espacio libre.
}

void mostrarEventos() //void opcion 5.
 {
 	system("color 0a");
 	
 	if (cimaEventos == 0){ // revisa que haya tareas para mostar.
 		system("cls");
		system("color 0c");
	cout<< "No hay eventos para mostar. \n";
			system("pause");
	}else{//si hay tareas imprime.
		for(int i = 1; i < cimaEventos; i++){ //empieza desde el primer fila de la matriz hasta la cima que seria la ultima fila con eventos.  
		cout << "| Evento #" << i << " | Nombre: " << eventos[i][1] << " | Descripcion: " << eventos[i][2]  
			 << " |Lugar: " << eventos[i][3]  << " | Fecha: " << eventos[i][4]  << " | Hora: " << eventos[i][5] << " | \n";  
		}
 	}
 }

void editarEvento(){
	cout << "Ingrese el numero de evento:  \n";
	cin  >> opcion;
	
		if (opcion == false){ //este if compruba que el usuario este ingresando un numero y no una letra/caracter especial.
		cout << "Debe ingresar el numero de evento. \n";
		cin.clear();    //Los use para que el programa no se cicle.
		fflush(stdin);  //
		editarEvento(); //Regresa a el inicio de la funcion(void).
		
	}else{
		if(opcion >= 0 and opcion < cimaEventos){ // Este if comprube que el numero que ingreso el usuario exista en la matriz.
			cout << "El evento a editar es el siguiente: \n";	//Se usa para mostrar el evento selecionado.
			cout << "| Evento #" << opcion << " | Nombre: " << eventos[opcion][1] << " | Descripcion: " << eventos[opcion][2] 
				 << " |Lugar: " << eventos[opcion][3]  << " | Fecha: " << eventos[opcion][4]  << " | Hora: " << eventos[opcion][5] << " | \n";  
				// aqui empieza la edicion del evento.
				
		}else{
				cout << "El ID de evento que ingreso no existe. \n";
				editarEvento();
			 } //Fin comprobacion numero valido.
		 } //Fin comprobacion numero.
} //Fin void editarEvento;

int main(){
	system("color 0d");
		  		
		   while(entrar == 1 ){ //Mantiene el programa abierto.
		fechaHora();  
        menu();  
		
		cout << "Opcion: ";
		cin  >> opcion; //Uso opcion para entrar en los case.
 		cout << " \n";
 		
 		if (opcion == false){         //Comprueba que el usuario ingrese un numero.
		cout << "Opcion invalida.  \n";
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
				validarFecha(); 
				validarHora();            
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
