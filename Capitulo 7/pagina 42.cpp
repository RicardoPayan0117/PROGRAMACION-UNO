#include <iostream>

int getUserInput(){
	
	int i{};
	std::cin >> i;
	return i;
	
	
}

int main(){
	
	std::cout<<"cuantas manzanas te comiste hoy?\n";
	
	if(int iAppleEaten{getUserInput()}; iAppleEaten <= 2){
		std::cout<<"yummy\n";
	}
	else{
		std::cout<< iAppleEaten << "son muchas xd!\n";
	}
	
	return 0;
}