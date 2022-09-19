#include <iostream>

// void significa que la funcion no devuelve un valor a la persona que llama
void returnNothing ()
{
	std::cout << "hola" << '\n';
	//esta funcion devuelve un valor,  por lo que se necesita una declaracion de devolucion	 
}

int main()
{
	returnNothing (); //bien: se llama a la funcion returnNothing(), no se devuelve ningun valor
	 //error: esta linea no se compilara. debera comentarlo para continuar.
	return 0;
}
