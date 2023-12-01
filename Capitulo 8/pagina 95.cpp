#include <iostream>

int main(){
	int sum{ 0 };
	for (int count{0}; count < 10; ++count)
	{
		std::cout<< "ingrese in numero a sumar o 0 para salir: "
		int num{};
		std::cin >> num;
		
		if(num == 0){
		
		}break;
		sum += num;
}
	std::cout<< "la suma de todos los numeros ingresador es" << sum << "\n";
	
	return 0;
}
			