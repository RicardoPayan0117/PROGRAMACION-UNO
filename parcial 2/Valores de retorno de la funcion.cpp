#include <iostream>

int main()
{
	//obtener un valor del usuario
	std::cout << "ingrese un entero: ";
	int num{};
	std::cin >> num;
	
	//imprime el valor duplicado
	std::cout << num << " duplicado es: " << num * 2 <<'\n';
	
	return 0;
	
	
}
