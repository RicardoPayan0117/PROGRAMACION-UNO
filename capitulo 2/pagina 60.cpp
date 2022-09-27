#include <iostream>

void doSomething ()
{
	std::cout << "¡hola! \n";
}

int main()
{
	int x {0}; //la vida de x comienza aqui
	doSomething(); //x sigue vivo durante la llamada de funcion
	return 0;
	//la vida de x termina aqui
}
