#include <iostream>

int main(){
	
	int selection;
	
	do{
		std<<"por favor selecciones una opcion\n";
		std<<"1) suma\n";
		std<<"2) resta\n";
		std<<"3) multiplicacion\n";
		std<<"4) division\n";
		std::cin >> selection;
	}
	while (selection != 1 && selection != 2 && selection != 3 && selection != 4);
	
	std::cout << "selecciona la opcion #"<< selection << "\n";
	
	return 0;
	
}