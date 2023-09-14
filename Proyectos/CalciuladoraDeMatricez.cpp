#include <iostream>

using namespace std;

	int filas, columnas, opcion; //opcion -> Lo usa el switch para elegir las opciones, conteo -> guarda una multiplicacion de filas*colunas.
	int entrar = 1; //Entrar mantiene el programa abierto.
	int matriz1[100][100]; 
	int matriz2[100][100]; 
	int matriz3[100][100]; //Matriz 1 y 2 se ingresan los datos iniciales, en la 3 se guarda el resultado.
	
void menu(){ //Muestra las opciones del programa
	system("color 0d");
	
	cout << "_______________________________________________________________________ \n";
 	cout << " \n";
	cout << "1) Suma de matricez. \n";
	cout << "2) Resta de matricez. \n";
	cout << "3) Multiplicacion de matricez. \n";
	cout << "4) Division de matricez. \n";
	cout << " \n";
	cout << "9) Salir. \n";
	cout << " \n";
 	cout << "_______________________________________________________________________ \n";
 	cout << " " <<endl;
} //Fin menu 

 void opcionInvalida(){ //void para la opcion default.
	system("color 0c");
	
	cout << "Opcion invalida. \n";
	cout << "Ingrese una opcion valida. \n";
	system("pause");
	cout << " " <<endl;
} //Fin opcion invalida.

void salir(){ //void opcion 0.{
	system("cls");
	system("color 0c");
	
   	cout << " \n";
	cout << "Gracias por usar el programa...";
	cout << " " <<endl;
} //Fin salir.

void ingresarDatos(){
	system("color 0b");
	
	cout << "Ingrese el numero de filas(F) de la matriz: "; 
	cin  >> filas;
		if (filas == false){         //Comprueba que el usuario ingrese un numero.
		system("color 0c");
		system("cls"); 
		cout << "Opcion invalida. \n";
		cin.clear();
		fflush(stdin);
			system("pause");
    		system("cls"); 
		return ingresarDatos();                 //Regresa al inicio de la funcion en caso de que no sea un numero.
	}else{
    cout << "Ingrese el numero de columnas(C) de la matriz: "; 
	cin  >> columnas;
	if (columnas == false){         //Comprueba que el usuario ingrese un numero.
		system("color 0c");
		system("cls"); 
		cout << "Opcion invalida. \n";
		cin.clear();
		fflush(stdin);
			system("pause");
    		system("cls"); 
		return ingresarDatos();                 //Regresa al inicio de la funcion en caso de que no sea un numero.
	}else{
	cout << " \n";
	
	cout << "Ingrese los datos de la matriz #1. \n";                
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "F" << i << ", C" << j <<" -> ";
			cin  >> matriz1[i][j];
        }
    }
	cout << " \n";
	cout << "Ingrese los datos de la matriz #2. \n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "F" << i << ", C" << j <<" -> ";
		    cin  >> matriz2[i][j];
        }
    }
    cout << " \n";
    
	}//Fin else columnas.
	}//fin else filas.
}//Fin sumMat.

void imprimirMatriz(){
	for (int i = 0; i < columnas; i++) {
    	for (int j = 0; j < filas; j++) {
    		cout << matriz3[i][j] << " ";
    	}                               //mostrar matriz...
    	cout << " \n";
    }
}

int main(){
	system("color 0d");
		
		   while(entrar == 1 ){ //Mantiene el programa abierto.
        menu();  
		
		cout << "Opcion: ";
		cin  >> opcion; //Uso opcion para entrar en los case.
 		cout << " \n";
 		
 		if (opcion == false){         //Comprueba que el usuario ingrese un numero.
			system("color 0c");
	system("cls"); 
	cout << "Opcion invalida. \n";
	cout << "Solo se aceptan numeros. \n";
	system("pause");
	system("cls"); 
		cin.clear();
		fflush(stdin);
		return main();                 //Regresa al inicio del menu en caso de que no sea un numero.
	}else{  //si, si es un numero entra al "else".
       switch(opcion){
        	case 9: // opcion 9(cierra el programa).	
        		salir();
        		return 0; // Cierra el programa.
        	break; //Fin case 9;
            
            case 1: // opcion 2(suma dos matrices y lo muestra).	
        		ingresarDatos();
        			for (int i = 0; i < columnas; i++) { //este ciclo muestra la suma de las dos matricez.
    					for (int j = 0; j < filas; j++) {
    						cout << "F" << i << ", C" << j << " -> " << "M1: " 
								 << matriz1[i][j] << " + " << "M2: " << matriz2[i][j] << " = "<< matriz1[i][j]+matriz2[i][j] <<"\n";
								 
    						matriz3[i][j] = matriz1[i][j] + matriz2[i][j]; //guarda el resultado de la suma de las matricez 1 y 2;
						}                               
    				}
    			cout << " \n";	
    			cout << "Resultado de la suma: \n";	
				imprimirMatriz();
				cout << " \n";
        	break; //Fin case 1;
        	
        	case 2: // opcion 2(resta dos matrices y lo muestra).
        		ingresarDatos();
        			for (int i = 0; i < columnas; i++) { //este ciclo muestra la resta de las dos matricez.
    					for (int j = 0; j < filas; j++) {
    						cout << "F" << i << ", C" << j << " -> " << "M1: " 
								 << matriz1[i][j] << " - " << "M2: " << matriz2[i][j] << " = " << matriz1[i][j]-matriz2[i][j] << " \n";
								 
    						matriz3[i][j] = matriz1[i][j] - matriz2[i][j]; //guarda el resultado de la resta de las matricez 1 y 2;
						}                               
    				}
    			cout << " \n";	
    			cout << "Resultado de la resta: \n";	
				imprimirMatriz();
				cout << " \n";
        	break; //Fin case 2;
        	
        	case 3: // opcion 3(multiplica dos matrices y lo muestra).
        		ingresarDatos();
        			for (int i = 0; i < columnas; i++) { //este ciclo muestra la multiplicacion de las dos matricez.
    					for (int j = 0; j < filas; j++) {
    						cout << "F" << i << ", C" << j << " -> " << "M1: " 
								 << matriz1[i][j] << " * " << "M2: " << matriz2[i][j] << " = " << matriz1[i][j]*matriz2[i][j] << " \n";
								 
    						matriz3[i][j] = matriz1[i][j] * matriz2[i][j]; //guarda el resultado de la resta de las matricez 1 y 2;
						}                               
    				}
    			cout << " \n";	
    			cout << "Resultado de la multiplicacion: \n";	
				imprimirMatriz();
				cout << " \n";
        	break; //Fin case 3;
        	
        	case 4: // opcion 4(divide dos matrices y lo muestra).
        		ingresarDatos();
        			for (int i = 0; i < columnas; i++) { //este ciclo muestra la division de las dos matricez.
    					for (int j = 0; j < filas; j++) {
    						if (matriz2[i][j] == 0) {
    							system("cls");
    							//inserta el mensaje que gustes atte minmin
    							cout<<"como estas pendejo, no puedes dividir entre 0\n";
    							system("pause");
    							system("cls"); 	
    							break;
								}
    						cout << "F" << i << ", C" << j << " -> " << "M1: " 
								 << matriz1[i][j] << " / " << "M2: " << matriz2[i][j] << " = " << matriz1[i][j]/matriz2[i][j] << " \n";
								 
    						matriz3[i][j] = matriz1[i][j] / matriz2[i][j]; //guarda el resultado de la resta de las matricez 1 y 2;
						}                               
    				}
    			cout << " \n";	
    			cout << "Resultado de la division: \n";	
				imprimirMatriz();
				cout << " \n";
        	break; //Fin case 4;	
        	
            default: //cualquier otra opcion.
				opcionInvalida();
            break;  
            
   	      }//fin switch.
        }// else validacion.
      }// Fin while entrar.
	}//Fin main.