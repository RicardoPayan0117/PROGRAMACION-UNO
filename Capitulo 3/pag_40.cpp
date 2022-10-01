#include <iostream>

int add (int x, int y)
{
	
	return x + y;
	
}

void printresult(int z)
{
	
	std :: cout << "La respuesta es : " << z << '\n';
}

int getuserinput()
{

	std :: cout << "ingrese un numero";
	int x{};
	std :: cin >> x;
	return --x;
	
}

int main ()
{
	
	int x { getuserinput () };
	int y { getuserinput () };
	
	int z {add(x, y)};
	printresult(z);
	
	return 0;
	
}