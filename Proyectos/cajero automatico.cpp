#include<iostream>

using namespace std;
	
	string  PINentrada, cambio, cambio1, cambio2;	//el cambio1, cambio2 para el pin.
	string usuario[2] = {"Ricardop", "Juang"};
	string PIN[2] = {"2001", "1234"}; 
	int saldo[2] = {2500, 3200};
	int entrar = 1, opcion, depositar, retirar, i, a; //i se usa para elegir la posicion de saldo que este usando y a para la contraria; 

void cambioPIN()
{
	system("color 0c");
	
	cout << "Ingrese el nuevo PIN: " <<endl;
	cin  >> cambio1;
	cout << "Confirme el nuevo PIN: " <<endl;
	cin  >> cambio2;
	if (cambio1 != cambio2){
		cout << "No coincide con el PIN anterior." <<endl;
	}else if(cambio1 == PIN[i]){
		cout << "Esta ingresando su PIN actual, ingrese uno nuevo." <<endl;
	}else{
		cout <<endl;
		cout << "El PIN se cambio exitosamente." <<endl;
			PIN[i] = cambio1;
	}
}
	
void transferirSaldo()
{
	system("color 0a");
	
		cout << "Ingrese el monto a transferir: " <<endl;
			cin >> retirar;
		if (retirar >(saldo[i] - 0)){
				cout <<"Su saldo es insuficiente." <<endl;
			
		}else if(retirar <= 0){
			cout << "No puedes de transferir un saldo negativo" <<endl; 
			}else{
				saldo[i] = saldo[i] - retirar;
				saldo[a] = saldo[a] + retirar;
				cout << "Se uso la cuenta "<< usuario[i] <<" para transferir un total de " << retirar <<"$." <<endl;
				cout << "Tu saldo actual es "<< saldo[i] << "$." <<endl;	
			}
}	
	
void depositarSaldo()
{
	system("color 0a");
	
	cout << " Ingrese la cantidad para depositar: " <<endl;
	cin >> depositar;
	if(depositar <= 0){
		cout << "No puedes de depositar un saldo negativo" <<endl; 
	}else{
		saldo[i] = saldo[i] + depositar;
		cout << " Tu saldo es " << saldo[i] << "$." <<endl;
	}
}

void retirarSaldo()
{
	system("color 0a");
	
	cout << "Ingrese el monto a retirar: " <<endl;
			cin >> retirar;
		if (retirar >(saldo[i] - 0)){
				cout <<"Su saldo es insuficiente." <<endl;
			
		}else if(retirar <= 0){
			cout << "No puedes de retirar un saldo negativo" <<endl; 
			}else{
				saldo[i] = saldo[i] - retirar;
				cout << "\n Por favor, cobrar dinero en efectivo, " << retirar <<"$." <<endl;
				cout << "\n Tu saldo actual es "<< saldo[i] << "$." <<endl;
			}
}

void ingresarPIN()//void para usuario incorrecto
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

void salir() //void opcion 0.
{
	system("cls");
	system("color 0c");
	
   	cout <<endl;
	cout << "Gracias por usar el cajero automatico..." <<endl;
	cout <<endl;
}

 void opcionInvalida()//void para la opcion default.
{
	system("color 0c");
	
	cout << "Opcion invalida." <<endl;
	cout << "Ingrese una opcion valida." <<endl;
	cout << endl;
	system("pause");	
}

void verificarSaldo()
{
	system("color 0a");
	
	cout << "Su saldo es de " << saldo[i] << "$." <<endl;
	cout <<endl;
	system("pause");	
} 

void menu() // menu para ver las opciones.
{
	system("color 0d");
	cout << "_______________________________________________________________________" <<endl;	
	cout << "             	                            Usuario: " <<usuario[i] << "." <<endl;
	cout << "_______________________________________________________________________" <<endl;
	cout << "***Bienvenido al cajero automatico***" <<endl;
	cout << endl;
	cout << "1) Verificar saldo." <<endl;
	cout << "2) Retirar dinero." <<endl;
	cout << "3) Depositar dinero." <<endl;
	cout << "4) Tranferir." <<endl;
	cout << endl;
	cout << "5) Cambiar de usaurio." <<endl;
	cout << "6) Cambiar PIN." <<endl;
	cout << "0) Salir." <<endl;
	cout << endl;
	cout << "Que movimiento desea realizar? \n";
 	cout << "_______________________________________________________________________" <<endl;
 	cout << endl;
} //Fin void menu.

int main() //main
{
system("color 0d");

	cout << "Ingrese el usuario: " <<endl;
	cin  >> cambio;
	if (cambio == usuario[0]){
		cout << "Ingrese su PIN: " <<endl;
		cin >> PINentrada;
		if(PINentrada == PIN[0]){
		while(entrar == 1 ){ //Mantiene el programa abierto.}
		
		i = 0;
		a = 1;		
		menu();
		cout << "opcion: ";
		cin >> opcion;
		cout <<endl;
	if (opcion == false){
		cout << "ingrese una opcion valida." <<endl;
		cin.clear();
		fflush(stdin);
	}else{
		switch(opcion)
        {
        	case 0: // opcion 0(cierra el programa).	
        		salir();
        		return 0;
        	break; //Fin case 0;
        	
            case 1: // Opcion 1(verificar saldo). 
            	verificarSaldo();               
            break;
 
 			case 2: // Opcion 2(retirar).           	
	           	retirarSaldo();          	
            break;
 
 			case 3:// Opcion 3(depositar).
        		depositarSaldo();	
            break; 
            
            case 4:// Opcion 4(transferir).
 				transferirSaldo();
            break; 
            
            case 5: //Opcion 5(cambiar usuario).
				return main();
            break; 
            
 			case 6: //Opcion 6(cambiar PIN).
				cambioPIN();
            break; 
            
            default: //cualquier otra opcion.
				opcionInvalida();
            break;  
   		} //fin switch.
	}
    }// fin while_entrar. 	
	 	}else{
			cout << "el PIN ingresado es incorrecto." <<endl;
			return main();
		} 
 }else if (cambio == usuario[1]){
		cout << "Ingrese su PIN: " <<endl;
		cin >> PINentrada;
		if(PINentrada == PIN[1]){
			
 	while(entrar == 1 ){ //Mantiene el programa abierto.}
		i = 1;
		a = 0;
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
        	
            case 1: // Opcion 1(Verificar saldo). 
            	verificarSaldo();               
            break;
 
 			case 2: // Opcion 2(retirar).           	
	           	retirarSaldo();          	
            break;
 
 			case 3:// Opcion 3(depsitar).
        		depositarSaldo();	
            break; 
            
            case 4:// Opcion 4(Transferir).
 				transferirSaldo();
            break; 
            
            case 5: //Opcion 5(cambiar usaurio).
				return main();
            break; 
            
            case 6: //Opcion 6(cambiar PIN).
				cambioPIN();
 
            default: //cualquier otra opcion.
				opcionInvalida();
            break;  
   		} //fin switch.
     }// fin while_entrar. 
     	}else{
			cout << "el usuario ingresado es incorrecto." <<endl;
			return main();	
		} 
		}else{
				ingresarPIN();
			while(entrar == 1 ){ //Mantiene el programa abierto.}
				
				cout << "opcion: ";
				cin >> opcion;
				cout <<endl;
		if (opcion == false){
			cout << "ingrese una opcion valida." <<endl;
			cout << "_______________________________________________" <<endl;
			cin.clear();
			fflush(stdin);
		}else{
			switch(opcion) //se usa para intentar ingresar el usaurio otra vez o salir del programa.
			{
			case 1:
				return main();
			break;
			
			case 2:
				return 0;
			break;
			
			default:
				cout << "Opcion invalida.";
			break;
		}
		}
	}
 }//fin usuario.
}//Fin main.	