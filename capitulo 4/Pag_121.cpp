#include <iostream>

int main()
{
	
	std :: cout << "ingrese un numero: ";
	
	char ch{};
	std :: cin >> ch;
	std :: cout << ch << "tiene el codigo ASCII " << static_cast<int>(ch) << '\n';
	
	return 0;
	
}