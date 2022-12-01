#include <iostream>

using namespace std;

int main()
{
	//Declaracion.
	string usuario;
	string tareas[50][2];
	int salirEntrar;
	int opcion;
	int cima = 0;
	//inicio del programa.
	cout << "Ingrese su usario: ";
	cin  >> usuario;
	//conprueba el usaurio.
	 salirEntrar = 0;
	while(salirEntrar == 0)
	{
	
		if(usuario != "KRLP2001")
		{
			cout << "\n";
			cout << "El usaurio que ingreso no existe." <<endl;
			cout << "\n";
					salirEntrar = 1;
		} else {
			//menu.
			cout << "\n";
			cout << "1)ingrese una tarea. " <<endl;
			cout << "2)Poner una tarea en progreso. " <<endl;	
			cout << "3)Poner una tarea en terminado. " <<endl;
			cout << "4)Buscar una tarea. " <<endl;
			cout << "5)Mostrar todas las tareas. " <<endl;
			cout << "6)salir. " <<endl;
			cin  >> opcion;
			cout << "\n";
			
		switch(opcion)
			{
				//Opcion 1(ingresar tarea).
				case 1:
						
					cout << "Describa la tarea:" <<endl;
					cin>> tareas[cima][1];
					cima++;	
					
				break;
				//Opcion 2(Tarea en progreso).
				case 2:
					
					
					
				break;
					//Opcion 3(Tarea terminada).
				case 3:
					
					
					
				break;
					//Opcion 4(Buscar tarea).
				case 4:
					
					
					
				break;
				//Opcion 5(Mostrar todas las tareas).
				case 5:
					
					for(int i = 0; i < cima; i++){
					cout << "Tarea" << i << tareas[i] << endl; 
					}
								
				break;
				//Opcion 6(salir).
				case 6:
					
					cout << "Vuelva pronto...";
					salirEntrar = 1;
					
				break;
				//default.
				default:
					
					cout << "opcion invalida. " <<endl;
					cout << "Ingrese una opcion valida. " << endl;
					cout << "\n";
					
				break;
				
			}//fin switch.
		}//fin if(Usuario).
	}//fin while.
	
	return 0;
		
}//fin main.