#include <iostream>

void dolt (int x)


{
	
int y {4};
std :: cout << "dolt: x = " << x << "y =" <<y << '\n';
x = 3;
std :: cout << "dolt: x = " << x << "y =" <<y << '\n';
	
	
}

int main ()
{
	
	int x {1};
	int y {2};
	std :: cout<< "principal: x=" << x << "y = "<< y << '\n';
	dolt (x);
	std :: cout<< "principal: x=" << x << "y = "<< y << '\n';
	
	
	return 0;
}

















