#include <iostream>

int main()
{
	double zero {0.0};
	double posinf { 5.0 / zero };
	std:: cout << posinf << '\n';
	
	
	double neginf { 5.0 / zero };
	std:: cout << neginf << '\n';
	
	double nan { zero / zero };
	std:: cout << nan << '\n';
	
	return 0;
	
}