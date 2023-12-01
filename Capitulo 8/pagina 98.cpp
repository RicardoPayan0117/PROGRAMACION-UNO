#include <iostream>

int breakKOrReturn(){
	while(true){
		std::cout<< "ingrese 's' para salir o 'r' para regresar";
		char ch;
		std::cin >> ch;
		
		if(ch == 's'){
			
		}break;
		if(ch == 'r'){
		
		}return 1;
	}
	std::cout<< "Nos salimos del ciclo\n";
	return 0;
}

int main(){
	
	int returnValue{breakKOrReturn() };
	std::cout<< "function breakKOrReturn regreso" << returnValue << '\n';
	
	return 0;
}