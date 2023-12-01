#include <iostream>

int main(){
	int count{1};
	int sum{0};
	
	while (count <= 5){
		int x{};
		
		std::cout<< "ingresa un entero #"<<count << ":";
		std::cin >> x;
		sum += x;
		++count;
	}
	
	std::cout<< "la suma de todos los numeros ingresados es:"<< sum << '\n';
	
	return 0;
	
}
