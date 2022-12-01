#include <iostream>

void addAndPrint(auto x, auto y)
{
	
	std::cout << x + y;
	
}

int main()
{

	addAndPrint(2,3);
	addAndPrint(4.5, 6.7);	
	
}