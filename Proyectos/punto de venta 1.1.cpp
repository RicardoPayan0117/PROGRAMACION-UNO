#include <iostream>
#include <string>

using namespace std;

string inventario[20][4];

string clientes[5][2];

const int total_compras = 100;

double compras[total_compras][4];

double montos[5] = {0, 0, 0, 0, 0};

int identificador_cliente = 0;

int indice_compra = 0;



void inicializar_productos()
{
	
			system("color 0a");
	setlocale(LC_ALL, "");
	
inventario [0][0] = "Cocacola";      	//nombre del producto.
inventario [0][1] = "25";		 		//precio del producto.
inventario [0][2] = "15";				//existencias.
inventario [0][3] = "5";		    	//existencias minimas.

inventario [1][0] = "Sabritas";         //nombre del producto.
inventario [1][1] = "20";		        //precio del producto.
inventario [1][2] = "15";		        //existencias.
inventario [1][3] = "5";		        //existencias minimas.

inventario [2][0] = "Atun    ";        //nombre del producto.
inventario [2][1] = "15";	       	   //precio del producto.
inventario [2][2] = "15";	           //existencias.
inventario [2][3] = "5";		       //existencias minimas.

inventario [3][0] = "Galletas";        //nombre del producto.
inventario [3][1] = "12";		       //precio del producto.
inventario [3][2] = "15";		       //existencias.
inventario [3][3] = "5";		       //existencias minimas.



}
   


void mostrar_menu()
{
    cout<<"ID    PRODUCTOS    PRECIO    EXISTENCIAS    EX_MINIMAS\n";
    for(int i=0; i<=20; i++)
    {
        cout<<i<<"  - ";
        for(int j=0; j<=3; j++)
        {
            cout<<inventario[i][j] + "         ";
        }
        cout<<endl;
    }
}

int ingresar_clientes()
{
	system("cls");
	string nombre_cliente;
	cout << "---------------   Bienvenido   -------------- \n";
	cout << "\n ";
	cout<<"INGRESE EL NOMBRE DEL CLIENTE: ";
	getline(cin>>ws,nombre_cliente);
	
	clientes[identificador_cliente][0] = identificador_cliente;
    clientes[identificador_cliente][1] = nombre_cliente;
    
    identificador_cliente += 1;
    return identificador_cliente - 1;
}

void registrar_monto(int identificador_cliente, int idproducto, double cantidad)
{
    double precio = stoi(inventario[idproducto][1]);
    montos[identificador_cliente] += precio * cantidad;
}

void ingresar_compra(int identificador_cliente)
{
	int idproducto;
	double cantidad;
	int opcion = 2;
	mostrar_menu();
	
	while(opcion == 2)
	{
	cout<<"PRODUCTO: ";
	cin>>idproducto;
	cout<<"CANTIDAD:";
	cin>>cantidad; 
	
		compras[indice_compra][0] = identificador_cliente;
        compras[indice_compra][1] = idproducto;
        compras[indice_compra][2] = cantidad;
       
        
        indice_compra += 1;
        registrar_monto(identificador_cliente, idproducto, cantidad);
        
        cout<<" "<<endl;
		cout<<"ELIJA UNA OPCION: "<<endl;
		cout<<" "<<endl;
		cout<<" 2:SEGUIR COMPRANDO.   /    1:SALIR DEL PUNTO DE VENTA. "<<endl;
        cin>>opcion;
	}
	
}

void mostrar_compra(int identificador_cliente)
{
	system("cls");
	cout<<clientes[identificador_cliente][1]<<endl;
	for (int i = 0; i<indice_compra; i++)
	{
		if(compras[i][0] == identificador_cliente)
		{
			int idproducto = compras[i][1];
			string nombre_producto = inventario[idproducto][0];
			double cantidad = compras[i][2];
			cout<<"TOTAL DE LA COMPRA : "<<cantidad<<" ";
			cout<<"PRODUCTO: "<<nombre_producto<<endl;
		}
	}
	cout<<"TOTAL: "<<montos[identificador_cliente]<<endl;
}

int calcular_total_vendido()
{
    int total = 0;
    for(int i = 0; i <= 4; i++)
    {
        total += montos[i];
    }
    return total;
}

int main()
{
	int opcion = 0;
    inicializar_productos();

    for(int i = 0; i <= 4; i++)
    {
        int identificador_cliente = ingresar_clientes();
        ingresar_compra(identificador_cliente);
        mostrar_compra(identificador_cliente);

        cout<<"DESEA INGRESAR OTRO CLIENTE? \n";
        cout<<"1 = SI  2 = NO\n";
     
        cin>>opcion;

        if(opcion != 1)
        {
            break;
        }
    }
    double monto_total = calcular_total_vendido();
    cout<<"EL MONTO DE LA COMPRA ES: "<<monto_total<<endl;
    
    return 2;
}