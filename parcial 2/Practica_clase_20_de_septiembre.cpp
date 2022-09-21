#include <iostream>

int add(int x, int y)
{

return x + y;

}

void printResult(int z)
{
	
	std::cout << " La respuesta es: " << z << '\n';
	
}

int getuserinput()

{
	
	std::cout << "ingrese un nuemro: ";
	int x{};
	std::cin >> x;
	return x;
	
}

int main()
{
	
	int x { getuserinput () };
	int y { getuserinput () };

	int z { add (x,y) };
	printResult (z);
	
	return 0; 
}
