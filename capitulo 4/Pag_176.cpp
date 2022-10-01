#include <cstdint>
#include <iostream>
int main()
{
	std:: cout<< "ingrese edad\n";
	std:: uint8_t age{};
	std:: cin >> age;
	
	std:: cout << "tienes la edad para manejar";
	if (age>=18)
	std:: cout << "x";
	else 
	std::cout <<" ";
	std::cout << "]\n" ;
	return 0;
}