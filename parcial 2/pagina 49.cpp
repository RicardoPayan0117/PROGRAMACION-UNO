#include <iostream>
//ad() toma dos enteros como parametros y devuelve el resultado de su suma
//los valoreas de x,y estan determinados por la funcion que llama a add(

int add (int x, int y)
{
	return x + y;
}

//main no toma parametros
int main()
{
	std::cout << add (4,5) << '\n'; // los argumentos 4 y 5 pasan a la funcion add()
	return 0;
}
