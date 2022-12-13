#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

using namespace std;

	string usuario;
	string tareas[50][2];
	string ingresaTarea;
	
	int opcion, numeroDeTarea, tarea;
	int cimaTarea = 0, entrar = 1, indice = -1;

void menu() // menu para ver las opciones.
{
	system("color 0d");
	
	cout << "_______________________________________________________________________" <<endl;
 	cout << endl;
	cout << "1) Ingresar una tarea. " <<endl;
	cout << "2) Poner una tarea en progreso. " <<endl;	
	cout << "3) Poner una tarea en terminado. " <<endl;
	cout << "4) Buscar una tarea. " <<endl;
	cout << "5) Mostrar todas las tareas. " <<endl;
	cout << endl;
	cout << "0) Salir. " <<endl;
	cout << endl;
 	cout << "_______________________________________________________________________" <<endl;
 	cout << endl;
} //Fin void menu.
 
void ingresarTarea() //void opcion 1.
{
	system("color 0a");
	cout << "Describa la tarea: " <<endl;
	cin>> tareas[cimaTarea][1];//ingresa la tarea en la cima(espacio libre mas alto de la matriz)
	tareas[cimaTarea][2] = "| No iniciada       |"; //anota el esatdo de la tarea(en este caso no iniciada).
	cimaTarea++;//eleva el valor de cima en uno para apuntar al siguiente espacio libre.
	
}

 void tareaProgreso() //void opcion 2.
 {
 	system("color 0a");
 	
 	cout << "Ingrese el numero de la tarea que desea poneer en progreso: " <<endl;
 	cin  >> numeroDeTarea;//columana en la que ingresa el estado de la tarea(en progreso).
 	tareas [numeroDeTarea][2] = "| Tarea en progreso |";
 }
 
void tareaTerminada() //void opcion 3.
 {
 	system("color 0a");
 	
 	cout << "Ingrese el numero de la tarea a terminar: " <<endl;
 	cin  >> numeroDeTarea;//columana en la que ingresa el estado de la tarea(terminada).
 	tareas [numeroDeTarea][2] = "| Tarea terminda    |";
 }
 
 void buscarTarea() //void opcion 4.
 {
 	system("color 0a");
 	
 	if (cimaTarea == 0){ // revisa que haya tareas para buscart.
		cout<< "No tienes tareas." <<endl;
	}else{ //si hay tareas busca.
		cout << "Que tarea desea buscar?" <<endl;
 	
	 	cin >> tarea;
 	}
 }
 
 
void mostrarTareas() //void opcion 5.
 {
 	system("color 0a");
 	
 	if (cimaTarea == 0){ // revisa que haya tareas para mostar.
	cout<< "No hay tareas para mostar." <<endl;
	}else{//si hay tareas busca.
		for(int i = 0; i < cimaTarea; i++){ 
		cout << "Tarea " << i << " " << tareas[i][2] << " " << tareas[i][1] <<endl;  
		}
 	}
 }
 
 void opcionInvalida()//void para la opcion default.
{
	system("color 0c");
	
	cout << "Opcion invalida." <<endl;
	cout << "Ingrese una opcion valida." <<endl;
	cout << endl;	
}

void salir() //void opcion 0.
{
	system("cls");
	system("color 0c");
	
   	cout <<endl;
	cout << "Gracias por usar el programa...";
	cout <<endl;
}

void ingresarUsuario()//void para usuario incorrecto
{
system("color 0c");
			
			cout << endl;
			cout << "El usaurio que ingreso no existe." <<endl;
			cout << endl;
			
			cout << "Desea intentarlo otra vez:" <<endl;
			cout <<endl;
			cout << "1) Si." <<endl;
			cout << "2) No." <<endl;
			cout << endl;
}

int main() //main
{
system("color 0d");

cout << "Ingrese su usario: ";
cin  >> usuario;
 
 	if(usuario != "KRLP2001")
		{
			ingresarUsuario();
			cout << "Opcion: " <<endl;
			cin  >> opcion;
			
			char ch = opcion;
			if (isdigit(ch)){
        	cout <<endl;
    }else{
    	cout << "Solo se pueden ingresar numeros" <<endl;
	}		
			switch(opcion) //se usa para intentar ingresar el usaurio otra vez o salir del programa.
			{
			case 1:
				return main();
			break;
			
			case 2:
				return 0;
			break;
			}
    while(entrar == 1 ) //Mantiene el programa abierto.
    {
        menu();  
		
		cout << "Opcion: ";
		cin  >> opcion; //Uso opcion para entrar en los case.
 		cout <<endl;
 		
        switch(opcion)
        {
        	case 0: // opcion 0(cierra el programa).	
        		salir();
        		return 0;
        	break; //Fin case 0;
        	
            case 1: // Opcion 1(Ingresar una tarea). 
            	ingresarTarea();               
            break;
 
 			case 2: // Opcion 2(Poner una tarea en progreso).           	
	           	tareaProgreso();          	
            break;
 
 			case 3:// Opcion 3(Poner una tarea en terminado).
        		tareaTerminada();	
            break; 
            
            case 4:// Opcion 4(Buscar una tarea).
 				buscarTarea();
            break; 
            
            case 5: //Opcion 5(Mostrar las tareas).
				mostrarTareas();
            break; 
 
            default: //cualquier otra opcion.
				opcionInvalida();
            break;  
   		} //fin switch.
     }// fin while_entrar.
  }//Fin usaurio.
}//Fin main.	