#include <iostream>

int g_x {};

void doSomething()
{

	g_x = 3;
	std::cout << g_x << "\n";

}

int main ()
{
	
	doSomething();
	std::cout << g_x << "\n";
	
	g_x = 5;
	std::cout << g_x << "\n";
	
	return 0;
	
}