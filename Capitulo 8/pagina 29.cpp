#include <iostream>
#include <string>

int main(){
	
	std::string primernombre{};
	std::string apellido{};
	
	std::cout << "nombre:";
	std::cin >> primernombre;
	
	std:cout<<"apellido:";
	std::cin >> apellido;
	
	if(std::string fullname{ primernombre + ' ' + apellido}; fullname.length() > 20)
	{
		std::cout << " " << fullname << "\"es demasiado largo!\n";
		
	}
	else{
		std::cout << "tu nombre es" << fullname << "\n";
		
	}
	
	
	return 0;
	
}