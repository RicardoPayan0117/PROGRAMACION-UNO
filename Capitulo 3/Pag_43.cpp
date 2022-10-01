#include <iostream>

int getuserinput()
{
	
	std :: cerr << "llamada a getuserinput() \n";
	std :: cout << "ingrese un numero: ";
	int x{};
	std :: cin >> x;
	return x;
	
}

int main()
{
	
	std :: cerr << "llamada a main() \n";
	int x{ getuserinput () };
	std :: cout << "usted ingreso: " << x;
	
	return 0; 
	
}