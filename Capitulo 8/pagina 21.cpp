#include <iostream>

int main(){
	
	std::cout << "ingresaste un numero";
	int x{};
	std::cin >> x;

	std::cout << "ingresaste otro entero";
	int y;
	std::cin >> y;
	
	if (x > 0 && y > 0)
		std::cout << "ambos numeros son positivos\n";

    else if (x > 0 || y > 0)
	std::cout << "uno de los numeros es positivo";
	
	else
	std::cout<< "ninguno numero es positivo\n";
	
	return 0;
}