#include <iostream>
int main()
{
	unsigned short x {65535};
	std:: cout<< "x era:" << x << '\n';
	
	x = 65536;
	std:: cout<< "x es ahora:" << x<< '\n';
	
	x = 65537;
	std:: cout<< "x es ahora:" << x<< '\n';
	
}