#include <iostream>

using namespace std;

	string usuario;
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

void ingresarUsuario(){ //void para usuario incorrecto
system("color 0c");
			
			cout << endl;
			cout << "El usaurio que ingreso no existe." <<endl;
			cout << endl;
			
			cout << "Desea intentarlo otra vez:" <<endl;
			cout <<endl;
			cout << "1) Si." <<endl;
			cout << "2) No." <<endl;
			cout << endl;
} // fin ingresar usuario.

void ingresarEvento(){ //void opcion 1.
	system("color 0a");
	
	cout << "Nombre del evento: " <<endl;
	
} //Fin ingresar evento.

int main(){
	system("color 0d");

cout << "Ingrese su usario: ";
cin  >> usuario;
 
 	if(usuario != "KRLP2001")
		{
			ingresarUsuario();
			cout << "Opcion: " <<endl;
			cin  >> opcion;
				
			switch(opcion) //se usa para intentar ingresar el usaurio otra vez o salir del programa.
			{
			case 1:
				return main();
			break;
			
			case 2:
				return 0;
			break;
			}
	
		}else{
    while(entrar == 1 ) //Mantiene el programa abierto.
    {
        menu();  
		
		cout << "Opcion: ";
		cin  >> opcion; //Uso opcion para entrar en los case.
 		cout <<endl;
 		
 		if (opcion == false){
		cout << "Opcion invalida." <<endl;
		cin.clear();
		fflush(stdin);
	}else{
        switch(opcion)
        {
        	case 9: // opcion 0(cierra el programa).	
        		salir();
        		return 0;
        	break; //Fin case 0;
        	
            case 1: // Opcion 1(Ingresar una tarea). 
            	ingresarEvento();               
            break;
            
            default: //cualquier otra opcion.
				opcionInvalida();
            break;  
   		} //fin switch.
      }// fin while_entrar.
    }//Fin usaurio.
  }// Fin comprovacion opcion. 
}//Fin main.