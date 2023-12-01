#include <iostream>

int main()
{
	while(true){
		std::cout<<"ingrese 0 para salir, otra para continuar:";
		int num{};
		std::cin >> num;
		
		if (num == 0){
		}break;
	}
	std::cout<<"ya salimos!!!\n";
	
	return 0;
}