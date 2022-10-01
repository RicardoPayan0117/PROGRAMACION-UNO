#include <iostream>

int main()
{
	std:: cout << " ingrese un caracter";
	char ch{};
	
	std :: cin>> ch;
	std :: cout << ch<< "tienes el codigo ascii"<< static_cast<int>(ch)<< '\n';
	
	std :: cin >> ch;
	std :: cout << ch<< "tienes el codigo ascii"<< static_cast<int>(ch)<< '\n';
	return 0;
}