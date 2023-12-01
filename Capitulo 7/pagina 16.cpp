#include<iostream>
#include <string>

int main(){
	
	std::cout a{"45"};
	std::cout b{"11"};
	
	std::cout<< a + b << "\n";
	a += " volts";
	std::cout<< a << "\n";
	
	return 0;

}