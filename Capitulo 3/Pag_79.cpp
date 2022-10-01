#include <iostream>

int readNumber(int x)
{
	
	std :: cout << "por favor ingrese un nnumero: ";
	std :: cin >> x;
	
	return 0;
	
}

void writeAnswer(int x)
{
	
	std :: cout << "la suma es: " << x;
	
}

int main()
{
	
	int x{ 0 };
	readNumber(x);
	x = x + readNumber(x);
	writeAnswer (x);
	
	return 0;
	
}