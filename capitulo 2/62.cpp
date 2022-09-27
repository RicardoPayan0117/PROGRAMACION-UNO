#include <iostream>

// x no esta dentro del alcance en ninguna parte de esta funcion
void doSomething ()
{
	std::cout << "¡hola! \n";
}

int main()
{
	//x no se puede usar aqui porque aun no esta a dentro del alcance
	int x {0}; //x ingresa al alcance aqui y ahora se puede usar
	doSomething();
	return 0;
	//x se sale del alcance aqui y uya no se puede usar
}
