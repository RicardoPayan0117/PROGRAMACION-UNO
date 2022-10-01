#include <iostream>

int add (int x, int y)

{
	return x + y ;
}
void testadd()
{
	std::cout << "esta funcion deberia de imprimir : 2 0 0 0 -2 \n";
	std::cout << add(1,1) << " ";
		std::cout << add(-1,1) << " ";
			std::cout << add(1,-1) << " ";
				std::cout << add(-1,-1) << " ";	
}
int main()
{
	testadd();
	
	return 0;
}