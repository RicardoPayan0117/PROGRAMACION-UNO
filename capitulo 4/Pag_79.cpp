#include <iomanip>
#include <iostream>

int main()
{
	double d{0.1};
	std:: cout<<d<< '\n';
	std:: cout<< std:: setprecision(17);
	std:: cout<< d << '\n';
	return 0;
}
