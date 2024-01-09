#include <iostream>
#include <string.h>
#include <iomanip>
#include <ctime>
#include <fstream>

using namespace std;
	
	int a, mes, dia, hora, minutos, segundos; 			//se usan para guardar la hora y fecha actual.
	int aC, mesC, diaC;									//Cima fecha(fecha de la ultima cita).
	int opcion, aux, citasPorDia;						//Se usa para elegir, se usa cuando se requiere una variable entera vacia.
	int cimaCitas = 1, cimaDoc = 2;						//Cima de las matrices.
	int numeroDoctores[12];								//Matriz para la cantidad de doctores
	string dato, fh, txt ,linea, ingresarTexto;									//Para guardar datos.
	string doctores[12][4];								//Guarda los datos de los doctores.
	string citas[100][8];								//Guarda las citas del doctor1 : ID_Doctor, ID_Cita, paciente -> Nombre, Edad, sexo, Fecha, Hora. 	
	void fechaHora(); void inicializarDoctores(); void menuClientes(); void menuDoctores(); 
	void opcionInvalida(); void salir();
	void ingresarCita(); void mostrarCitas(); void eliminarCita(); void consultarCitas();
	void ingresarDoctor(); void editarDoctor(); void eliminarDoctor(); void mostrarDoctores();
	
int main(){
	system("color 0d");
	
		ifstream archivo("Doctores.txt"); //Abre la conexion con el txt.
				int f = 1, c = 0;
			while (getline(archivo, linea)){
			    doctores[f][c] = linea;
				c++;
				if(c == 5){ 
				c = 0;
				f++;
				cimaDoc++;
				}else{}	
			} 
		ofstream archivo2("Doctores.txt"); //para ingresar texto.
		
		ifstream archivo3("Citas.txt"); //Abre la conexion con el txt.
				int fi = 0, co = 0;
			while (getline(archivo, linea)){
			    citas[fi][co] = linea;
				co++;
				if(co == 9){ 
				co = 0;
				fi++;
				cimaCitas++;
				}else{}	
			} 
		ofstream archivo4("Citas.txt"); //para ingresar texto.
		
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
			
				ingresarTexto = "";
			for(int i = 1; i < cimaDoc; i++){  //Se usa para guardar los datos de la matriuz en un txt antes de salir.
				ingresarTexto = ingresarTexto + "\n" + doctores[i][0] + "\n" + doctores[i][1] + "\n" + doctores[i][2] + "\n" + doctores[i][3] //-
				 + "\n"; //junta todos los datos en una sola variable separados pon un salto de linea.
				 } 
				archivo2 << ingresarTexto;//guarda los datos ya juntos en el .txt;
				archivo.close();  //Cierra la conexion con el txt.
				archivo2.close();  //Cierra la conexion con el txt.
				
			for(int i = 1; i < cimaCitas; i++){  //Se usa para guardar los datos de la matriuz en un txt antes de salir.
				ingresarTexto = ingresarTexto + "\n" + citas[i][1] + "\n" + citas[i][2] + "\n" + citas[i][3] + "\n" + citas[i][4] //-
				 + "\n" + citas[i][5] + "\n" + citas[i][6] + "\n" + citas[i][7] + "\n" + citas[i][8] + "\n"; //junta todos los datos en una sola variable separados pon un salto de linea.
				 } 
				archivo4 << ingresarTexto;//guarda los datos ya juntos en el .txt;
				archivo3.close();  //Cierra la conexion con el txt.
				archivo4.close();  //Cierra la conexion con el txt.
					
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
            
            case 3: // Opcion 3(Eliminar una cita agendada). 
            	consultarCitas(); 
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
            
            case 2: // Opcion 2(permite ingresar un doctor). 
            	ingresarDoctor(); 
					return main();             
            break;
            
            case 3: // Opcion 3(permite editar un doctor). 
            	editarDoctor(); 
					return main();             
            break;
            
            case 4: // Opcion 4(permite eliminar un doctor). 
            	eliminarDoctor(); 
					return main();             
            break;
            
             case 5: // Opcion 4(permite msotrar los doctores). 
            	mostrarDoctores(); 
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
	cout << "2) Ingresar Doctor. \n";
	cout << "3) Editar Doctor. \n";
	cout << "4) Eliminar Doctor. \n";
	cout << "5) Mostrar Doctores. \n";
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
	cout << "1) Agendar Cita. \n";
	cout << "2) Eliminar Cita. \n";
	cout << "3) Consultar Cita. \n";
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

void ingresarDoctor(){ //Funcion IngresarDoctor.
	system("cls");
	system("color 0a"); //Color rojo.
	
	cout << "Su ID de Docotor es: " <<cimaDoc << ". \n";	//Imprime tu ID.
		fh = to_string(cimaDoc); 							//Convierte el ID a string.
		doctores[cimaDoc][0] = fh; 							//Guarda el ID.
		
	cout << "Ingrese su nombre: ";
		cin.ignore();                   					//No se para que es pero si lo quito no jala =(.
	getline(cin, dato);                						//Pide el nombre del cliente.
	doctores[cimaDoc][1] = dato; 							//Almacena en la matriz para guardarlo.  
	cout << "Ingrese su especialidad: ";
	getline(cin, dato);                 					//Pide la edad del cliente.
	doctores[cimaDoc][2] = dato; 							//Almacena en la matriz para guardarlo.  
  	
  	doctores[cimaDoc][3] = "8AM-2PM y 4PM-6PM";				//Da el horario.
	cout << "Su horario es: " << "8AM-2PM y 4PM-6PM \n";
	
	cimaDoc++;						 						//Aumenta la cima.
  	system("pause");
 	system("cls");
} //Fin funcion ingresarDoctor.

void editarDoctor(){ //Funcion editarDoctor.
	system("cls");
	system("color 0a"); //Color verde.
	
	cout << "Ingrese el ID del doctor que desea editar: \n";
	cin  >> opcion;													//Pide el ID de la cita a eliminar.
		fh = to_string(opcion);										//Lo convierte a string y guarda en fh.
		
	if(opcion > 0 and opcion < cimaDoc){							//Valida que la cita sea valida.
		system("color 0c"); //Color rojo.
		
		cout << "Para editarlo ingrese el codigo de seguridad: \n";
		cin  >> dato;
		if(dato == "KRLP"){
			system("color 0a"); //Color verde.
		
			system("cls");
			cout << "Su ID de Docotor es: " <<opcion << ". \n";	//Imprime tu ID.
				fh = to_string(cimaDoc); 							//Convierte el ID a string.
				doctores[cimaDoc][0] = fh; 							//Guarda el ID.
			
			cout << "EL nombre ingresado es: " << doctores[opcion][1] << ".\n";
			cout << "Ingrese el nuevo nombre: ";
			cin.ignore();                   						//No se para que es pero si lo quito no jala =(.
			getline(cin, dato);                						//Pide el nombre del cliente.
			doctores[opcion][1] = dato; 							//Almacena en la matriz para guardarlo.  
			cout << "La especialidad ingresada es: " << doctores[opcion][2] << ".\n";
			cout << "Ingrese la nueva especialidad: ";
			getline(cin, dato);                 					//Pide la edad del cliente.
			doctores[opcion][2] = dato; 							//Almacena en la matriz para guardarlo.  
  	
		  	doctores[opcion][3] = "8AM-2PM y 4PM-6PM";				//Da el horario.
			cout << "Su horario es: " << "8AM-2PM y 4PM-6PM \n";
			
		}else{ 
			cout << "El Pin que ingreso es incorrecto. "<<endl;
				return eliminarCita();
		}	
	}else{cout << "El ID de doctor que ingreso no existe. "<<endl; }
	

	
   	system("pause");
 	system("cls");
} //Fin funcion editarDoctor.

void eliminarDoctor(){ //Funcion eliminarDoctor.
	system("cls");
	system("color 0a"); //Color rojo.
	
	cout << "Ingrese el ID del doctor que desea eliminar: \n";
	cin  >> opcion;													//Pide el ID de la cita a eliminar.
		fh = to_string(opcion);										//Lo convierte a string y guarda en fh.
		
	if(opcion > 0 and opcion < cimaDoc){							//Valida que la cita sea valida.
		system("color 0c"); //Color rojo.
		
		cout << "Para eliminarlo ingrese el codigo de seguridad: \n";
		cin  >> dato;
		if(dato == "KRLP"){
			system("cls");
			cout << "El doctor --> \n\n"
					<< "ID_Doctor: " 	<< doctores[opcion][0] << " \n"
					<< "Nombre: "<< doctores[opcion][1] << " \n"
		 	 		<< "Especialidad: " 	<< doctores[opcion][2] << " \n"
		 	 		<< "Horario " 	<< doctores[opcion][3] << " \n"
			 		<< " \n-->Se elimino correctamente. "<<endl;   
			for(int i = opcion; i < cimaCitas; i++){
				aux = opcion + 1;		//aux siempre vale uno mas que opcion;
				doctores[opcion][0] = doctores[aux][0];	//Guarda los datos del evento superior(aux) en la pocision inferior(opcion).	
			 	doctores[opcion][1] = doctores[aux][1];
				doctores[opcion][2] = doctores[aux][2];
				doctores[opcion][3] = doctores[aux][3];	//...
			}//Fin for.
				cimaDoc--; //Reduce la cima para borrar el ultimo elemento que queda repetido
		}else{ 
			cout << "El Pin que ingreso es incorrecto. "<<endl;
				return eliminarCita();
		}	
	}else{cout << "El ID de doctor que ingreso no existe. "<<endl; }
	
	system("pause");
	system("cls");
} //Fin funcion eliminarDoctor.

void mostrarDoctores(){ //Funcion mostrarDoctores.
	system("cls");
	system("color 0a"); //Color rojo.
	
	cout << "Doctores: " <<endl;    		//Mensaje de inicio.
	
	for(int i = 1; i < cimaDoc; i++){ 		//Imprime los doctores.  
		cout << "ID: " << doctores[i][0] << " \n"
			 << "nombre: " << doctores[i][1] << " \n"
			 << "Especialidad: " << doctores[i][2] << " \n"
			 << "Horario: " << doctores[i][3] << " \n" 
			 << " \n";   
	}//Fin for imprimir doctores.
	
	system("pause");
	system("cls");
} //Fin funcion mostrarDoctores. 

void consultarCitas(){ //Funcion consultar citas.
	system("color 0a"); //Color morado.
	
	cout << "Ingrese su nombre para consultar su cita: ";
		cin.ignore();                   						//No se para que es pero si lo quito no jala =(.
			getline(cin, dato);                						//Pide el nombre del cliente.
			doctores[opcion][1] = dato; 
	
	for(int i = 1; i <cimaCitas; i++){ //empieza desde el primer fila de la matriz hasta la cima que seria la ultima fila con eventos.  
		if(citas[i][2] == dato){
			cout
			<< "ID_Cita: " 	<< citas[i][0] << " \n"
			<< "ID_Doctor: "<< citas[i][1] << " \n"
		 	<< "Nombre: " 	<< citas[i][2] << " \n"
		 	<< "Edad: " 	<< citas[i][3] << " \n"
			<< "Sexo: " 	<< citas[i][4] << " \n" 
			<< "Motivo: " 	<< citas[i][5] << " \n"
			<< "Fecha: " 	<< citas[i][6] << " \n" 
			<< "Hora: " 	<< citas[i][7] << " \n"; 
		}else{
		cout << "No se encontraron citas con este nombre." <<endl;
		}//Fin if-else.
	}//Fin ciclo for.
	
	system("pause");
	system("cls");
} //Fin funcion consultarCitas.	