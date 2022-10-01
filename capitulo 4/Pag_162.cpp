#include <iostream>
#include "constants.h"

int main()
{
	
	std :: cout << "ingrese el radio ";
	int radius{};
	
	double circumference { 2.0 * radius * constant :: pi };
	std :: cout << "La circunferencia es: " << circunference << '\n';
	
	return 0;
	
	
}
