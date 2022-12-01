#include <iostream>

void incrementAndPrint()
{
	
	static int s_value{ 1 };
	++s_value;
	std::cout << s_value << "\n";
	
}

int main()
{
	
	incrementAndPrint();
	incrementAndPrint();
	incrementAndPrint();
	
	return 0;
	
}