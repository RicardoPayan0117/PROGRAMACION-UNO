#include <iostream>
#include <cmath>

void printSqrt(double value){
	
	if (value >= 0.0)
	std::cout << "la raiz es cuadrada de" << value << "es" << std::Sqrt(value) <<'\n';
	else
	std::cout << "error:" << value "es negativo\n";
	
	
}