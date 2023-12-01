#include<iostream>
#include <string>

int main(){
	
	std::cout<<"selecciona 1 o 2:";
	int choice{};
	std::cin >> choice;
	
	std::cout<< "ahora ingrese su nombre:";
	std::string name{};
	std::getline(std::cin, name);
	
	std::cout<<"hola," << name << ", seleccionaste " << choice << "\n";
	
	return 0;
}