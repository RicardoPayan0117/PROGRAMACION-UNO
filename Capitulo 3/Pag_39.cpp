#include <iostream>
int add(int x, int y )
{
	return x + y;
}
void printresult(int z)
{
	std:: cout<< "la respuesta es:" <<z<< '\n';
}
int getUserInput()
{
	std::cout << "ingrese un numero: ";
	int x{	};
	std:: cin >> x;
	return x;
}
int main ()
{
	int x{ getUserInput() };
	int y{ getUserInput() };
	
	std:: cout <<x << "+" << y<< '\n';
	int z{add (x,5 )};
	printresult(z);
	
	return 0;
}