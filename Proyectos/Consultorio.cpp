#include <iostream>
#include <string.h>
#include <iomanip>
#include <ctime>

using namespace std;
	
	int a, mes, dia, hora, minutos, segundos; 			//se usan para guardar la hora y fecha actual.
	int aC, mesC, diaC;									//Cima fecha(fecha de la ultima cita).
	int opcion, aux, citasPorDia;						//Se usa para elegir, se usa cuando se requiere una variable entera vacia.
	int cimaCitas = 1, cimaDoc = 8;						//Cima de las matrices.
	int numeroDoctores[10];								//Matriz para la cantidad de doctores
	string dato, fh;									//Para guardar datos.
	string doctores[10][4];								//Guarda los datos de los doctores.
	string citas[100][8];								//Guarda las citas del doctor1 : ID_Doctor, ID_Cita, paciente -> Nombre, Edad, sexo, Fecha, Hora. 

	void fechaHora(); void inicializarDoctores(); void menuClientes(); void menuDoctores(); 
	void opcionInvalida(); void salir();
	void ingresarCita(); void mostrarCitas(); void eliminarCita();
	
int main(){
	system("color 0d");
		
		fechaHora(); 
		inicializarDoctores();
		
		cout << "Que tipo de usuario es:  \n";		//pregunta para entrar en el menu.
		cout << "1) Cliente. \n";
		cout << "2) Doctor. \n";
		
		cin  >> opcion; //Uso opcion para entrar en los menus.
 			system("cls");
 		if (opcion == false){         //Comprueba que el usuario ingrese un numero.
 			system("cls");
	system("color 0c"); //Color rojo.
			cout << "Solo se aceptan numeros.  \n";
			system("pause");
			cin.clear();
			fflush(stdin);
			return main();                 //Regresa al inicio del menu en caso de que no sea un numero.
	}else{
		if (opcion == 1){
        menuClientes();  
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
        	
        	case 8: // opcion 8(Return).
				system("cls");	
        			return main(); // regresar.
        	break; //Fin case 8;
        	
            case 1: // Opcion 1(Permite ingresar una cita nueva en la agenda). 
				ingresarCita(); 
					return main();            
            break;
            
            case 2: // Opcion 3(Eliminar una cita agendada). 
            	eliminarCita(); 
					return main();             
            break;
          
            default: //cualquier otra opcion.
				opcionInvalida();
					return main();
            break;  
            
   	      }//fin switch.
        }// else validacion.
		}else if(opcion == 2){
        menuDoctores();  
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
        	break; //Fin case 9;
            
           	case 8: // opcion 8(Return).
				system("cls");	
        			return main(); // regresar.
        	break; //Fin case 8;
        	
			case 1: // Opcion 4(Mostrar todos las citas). 
            	mostrarCitas();  
					return main();             
            break;
            
            default: //cualquier otra opcion.
				opcionInvalida();
					return main();
            break;  
            
   	      }//fin switch.
        }// else validacion.
		}else{
			cout << "opcion invalida.  \n";
			system("pause");
			cin.clear();
			fflush(stdin);
			return main();                 //Regresa al inicio del menu en caso de que no sea un numero.
		}
		}//Fin else elegir menu.
	}//Fin main.
	
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

void inicializarDoctores(){

 aC = a, mesC = mes, diaC = dia + 1;
 	
doctores[1][0] = "1";								//ID del doctor.
doctores[1][1] = "Juan Perez";						//Nombre.
doctores[1][2] = "Otorrinolaringologo";				//Especialidad.
doctores[1][3] = "8AM-2PM y 4PM-6PM";				//Horario.

doctores[2][0] = "2";
doctores[2][1] = "Alberto Lopez";
doctores[2][2] = "Nutriologo";
doctores[2][3] = "8AM-2PM y 4PM-6PM";	

doctores[3][0] = "3";
doctores[3][1] = "Andrea Isabel";
doctores[3][2] = "Pediatra";
doctores[3][3] = "8AM-2PM y 4PM-6PM";	

doctores[4][0] = "4";
doctores[4][1] = "Maleny Soto";
doctores[4][2] = "Cirugía general";
doctores[4][3] = "8AM-2PM y 4PM-6PM";	

doctores[5][0] = "5";
doctores[5][1] = "Jhony Bae";
doctores[5][2] = "Traumatologo";
doctores[5][3] = "8AM-2PM y 4PM-6PM";

doctores[6][0] = "6";
doctores[6][1] = "Alondra Urias";
doctores[6][2] = "Radiologo";
doctores[6][3] = "8AM-2PM y 4PM-6PM";		

doctores[7][0] = "7";
doctores[7][1] = "Oscar Meza";
doctores[7][2] = "Cardiologo";
doctores[7][3] = "8AM-2PM y 4PM-6PM";	

} //Fin funcion inicializar doctores. 

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

void menuDoctores(){ //Muestra las opciones del programa
	system("color 0d"); //Color morado.
	
	cout << " \n";
	cout << "___________________________________________________________________________________________________________________________________________________________________________________________________________________\n";
	cout << a << "/" << mes << "/" << dia << " ----> " 					//imprime la fecha actual.
		 << hora << ":" << minutos << ":" << segundos << ".\n";			//imprime la hora actual.
 	cout << " \n";
	cout << "1) Mostrar citas. \n";
	cout << " \n";
	cout << "8) Return.  \n";
	cout << "9) Salir.  \n";
	cout << " \n";
	cout << "___________________________________________________________________________________________________________________________________________________________________________________________________________________\n";	cout <<endl;

} //Fin funcion menu.

void menuClientes(){ //Muestra las opciones del programa
	system("color 0d"); //Color morado.
	
	cout << " \n";
	cout << "___________________________________________________________________________________________________________________________________________________________________________________________________________________\n";
	cout << a << "/" << mes << "/" << dia << " ----> " 					//imprime la fecha actual.
		 << hora << ":" << minutos << ":" << segundos << ".\n";			//imprime la hora actual.
 	cout << " \n";
	cout << "1) Agendar cita. \n";
	cout << "2) Eliminar cita. \n";
	cout << " \n";
	cout << "8) Return.  \n";
	cout << "9) Salir.  \n";
	cout << " \n";
	cout << "___________________________________________________________________________________________________________________________________________________________________________________________________________________\n";	cout <<endl;

} //Fin funcion menu.

void ingresarCita(){ //Permite agendar una cita.
	system("color 0a"); // Color verde.
		system("cls");
		
		cout << "Doctores: " <<endl;    		//Mensaje de inicio.
		
		for(int i = 1; i < cimaDoc; i++){ 		//Imprime los doctores.  
		cout << "ID: " << doctores[i][0] << " \n"
			 << "nombre: " << doctores[i][1] << " \n"
			 << "Especialidad: " << doctores[i][2] << " \n"
			 << "Horario: " << doctores[i][3] << " \n" 
			 << " \n";   
		}
		cout << "Seleccione un doctor: ";
		cin  >> opcion; //Uso opcion para seleccionar un doctor.
 		cout << " \n";
 		if (opcion == false){         //Comprueba que el usuario ingrese un numero.
 			system("cls");
	system("color 0c"); //Color rojo.
			cout << "Solo se aceptan numeros.  \n";
			system("pause");
			cin.clear();
			fflush(stdin);
			return ingresarCita();                 //Regresa al inicio del menu en caso de que no sea un numero.
	}else{  //si, si es un numero entra al "else".
		system("cls");
	
		citas[cimaCitas][0] = to_string(cimaCitas);	//ID_Cita.
		citas[cimaCitas][1] = to_string(opcion);		//Convierte la variable opcion en ID_Doctor.
				
		cout << "Ingrese su nombre: ";
			cin.ignore();                   //No se para que es pero si lo quito no jala =(.
		getline(cin, dato);                 //Pide el nombre del cliente.
		citas[cimaCitas][2] = dato; 		//Almacena en la matriz para guardarlo.  
		cout << "Ingrese su edad: ";
		getline(cin, dato);                 //Pide la edad del cliente.
		citas[cimaCitas][3] = dato; 		//Almacena en la matriz para guardarlo.  
		cout << "Ingrese su sexo: ";
		getline(cin, dato);                 //Pide el sexo del cliente.
		citas[cimaCitas][4] = dato; 		//Almacena en la matriz para guardarlo.  
		cout << "Motivo de su visita: ";
		getline(cin, dato);                 //Pide el motivo de su visita.
		citas[cimaCitas][5] = dato; 		//Almacena en la matriz para guardarlo.  
				
		fh = to_string(aC) + "/" + to_string(mesC) + "/" + to_string(diaC); //Une el año, dia y mes, ademas lo hace tipo string.
		citas[cimaCitas][6] = fh; 											//Lo guarda en la matriz.
				
		if(cimaCitas == 1){	    						//Da la hora de la cita.
			citas[cimaCitas][7] = "8:00AM - 8:59AM";
		}else if(cimaCitas == 2){
			citas[cimaCitas][7] = "9:00AM - 9:59AM";
		}else if(cimaCitas == 3){	
			citas[cimaCitas][7] = "10:00AM - 10:59AM";
		}else if(cimaCitas == 4){	
			citas[cimaCitas][7] = "11:00AM - 11:59AM";
		}else if(cimaCitas == 5){	
			citas[cimaCitas][7] = "12:00PM - 12:59PM";
		}else if(cimaCitas == 6){
			citas[cimaCitas][7] = "1:00PM - 1:59PM";
		}else if(cimaCitas == 7){
			citas[cimaCitas][7] = "4:00 PM - 4:59PM";
		}else if(cimaCitas == 8){
			citas[cimaCitas][7] = "5:00 PM - 5:59PM";
		}else{ 
			cout << "Algo salio mal...???" <<endl;			//Para validar.
		}
				
		cout << "Su cita se agendo correctamente. \n";		//valida y Le muestra al clienta la hora y fecha de su cita.
			cout << "  \n";		
		cout << "El dia de su fecha es: " << citas[cimaCitas][6] << ". \n";	
		cout << "La hora de su cita es: " << citas[cimaCitas][7] <<endl;
		
        cimaCitas++;
        }// else validacion.	
	system("pause");
	system("cls");
} //Fin funcion ingresarCita.

void mostrarCitas() { //Permite mostrar todas las citas.
 	system("color 0a"); // Color verde.
		
	cout << "Seleccione un doctor: ";
	cin  >> opcion; //Uso opcion para entrar en los case.
	fh = to_string(opcion);
 	cout << " \n";
 	if (opcion == false){         //Comprueba que el usuario ingrese un numero.
 		system("cls");
		system("color 0c"); //Color rojo.
		cout << "Solo se aceptan numeros.  \n";
		system("pause");
		cin.clear();
		fflush(stdin);
		return ingresarCita();                 //Regresa al inicio del menu en caso de que no sea un numero.
	}else{  //si, si es un numero entra al "else".
		system("cls");
		
		if(cimaCitas == 1){
			cout << "No hay citas para mostrar." <<endl;
		}else{	
 			cout << " \n";
			cout << "___________________________________________________________________________________________________________________________________________________________________________________________________________________\n";		
			for(int i = 1; i <cimaCitas; i++){ //empieza desde el primer fila de la matriz hasta la cima que seria la ultima fila con eventos.  
				if(citas[i][1] == fh){
					cout 
					<< "ID_Cita: " 	<< citas[i][0] << " \n"
					<< "ID_Doctor: "<< citas[i][1] << " \n"
		 	 		<< "Nombre: " 	<< citas[i][2] << " \n"
		 	 		<< "Edad: " 	<< citas[i][3] << " \n"
			 		<< "Sexo: " 	<< citas[i][4] << " \n" 
			 		<< "Motivo: " 	<< citas[i][5] << " \n"
			 		<< "Fecha: " 	<< citas[i][6] << " \n" 
			 		<< "Hora: " 	<< citas[i][7] << " \n"
			 		<< " \n";   
				}else{}//Fin if-else.
			}//Fin ciclo for.
		cout << "___________________________________________________________________________________________________________________________________________________________________________________________________________________\n";		
		cout << " "<<endl; 
 				}//Fin else Mostrar.
	system("pause");
 	system("cls");
 	}//Fin else validacion.
 } //Fin funcion mostrarCitas.
 
 void eliminarCita(){ //Funcion eliminar evento.
 	system("color 0a"); // Color verde;
	
	cout << "Ingrese el ID de la cita que desea eliminar: \n";
	cin  >> opcion;													//Pide el ID de la cita a eliminar.
		fh = to_string(opcion);										//Lo convierte a string y guarda en fh.
		
	if(opcion > 0 and opcion < cimaCitas){							//Valida que la cita sea valida.
		system("color 0c"); //Color rojo.
		
		cout << "Cita valida. \n Para eliminarla ingrese el nombre del paciente: \n";
		cin  >> dato;
		if(dato == citas[opcion][2]){
			system("cls");
			cout << "la cita --> \n\n"
					<< "ID_Cita: " 	<< citas[opcion][0] << " \n"
					<< "ID_Doctor: "<< citas[opcion][1] << " \n"
		 	 		<< "Nombre: " 	<< citas[opcion][2] << " \n"
		 	 		<< "Edad: " 	<< citas[opcion][3] << " \n"
			 		<< "Sexo: " 	<< citas[opcion][4] << " \n" 
			 		<< "Motivo: " 	<< citas[opcion][5] << " \n"
			 		<< "Fecha: " 	<< citas[opcion][6] << " \n" 
			 		<< "Hora: " 	<< citas[opcion][7] << " \n"
			 		<< " \n-->Se elimino correctamente. "<<endl;   
			for(int i = opcion; i < cimaCitas; i++){
				aux = opcion + 1;		//aux siempre vale uno mas que opcion;
				citas[opcion][0] = citas[aux][0];	//Guarda los datos del evento superior(aux) en la pocision inferior(opcion).	
				citas[opcion][1] = citas[aux][1];
				citas[opcion][2] = citas[aux][2];
				citas[opcion][3] = citas[aux][3];
				citas[opcion][4] = citas[aux][4];
				citas[opcion][5] = citas[aux][5];
				citas[opcion][6] = citas[aux][6];
				citas[opcion][7] = citas[aux][7];	//...
			}//Fin for.
				cimaCitas--; //Reduce la cima para borrar el ultimo elemento que queda repetido
		}else{ 
			cout << "El nombre que ingreso es incorrecto. "<<endl;
				return eliminarCita();
		}	
	}else{cout << "El ID de cita que ingreso no existe. "<<endl; }
	system("pause");
 	system("cls");
} // Fin funcion eliminar evento.
