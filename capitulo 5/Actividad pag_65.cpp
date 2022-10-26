#include <cmath>
#include <algorithm>}
#include <iostream>

bool aproximateyEqual (double a, double b, double epsilon)
{
	
	return (std::abs(a- b) <=(std::max(std::abs(a), std::abs(b)) +epsilon));
	
}

int main()
{
	
	double a{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };
	
		std::cout << aproximateyEqual (a, 1.0, 1e-8) << '\n';
	
		std::cout << aproximateyEqual (a-1.0, 0.0, 1e-8) << '\n';

}