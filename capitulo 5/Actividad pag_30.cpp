#include <iostream>
#include <cmath>
#include <cstdint>

std::int_fast64_t pow(int base, int exp)
{
	
	std::int_fast64_t result {1};
	while (exp)
	{
		
		if (exp & 1)
			result *=base;
		exp >>= 1;
		base *= base;
		
	}
	
	return result;
	
}

int main()
{
	
	std::cout << pow(7, 12);
	double x{ std::pow(3.0, 4.0) };
	
	return 0;
}