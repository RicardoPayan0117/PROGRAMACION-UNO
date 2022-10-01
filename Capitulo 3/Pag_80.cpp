#include <iostream>

int readnumber()
{
	std::cout << "ingrese un numero :";
	int x{};
	std::cin >> x;
	return x;	
}
void writeanswer( int x)
{
	std:: cout <<" el cociente es:"<< x;
}
int main()
{
	int x{ 0 };
	int y{ 0 };
	
	x = readnumber();
	x = readnumber();
	writeanswer(x/y);

	return 0;
}