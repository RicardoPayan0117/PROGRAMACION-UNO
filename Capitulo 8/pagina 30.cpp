#include <iostream>
enum class color{
	
	black,
	white,
	red,
	green,
	blue
};

void printcolor(Color color){
	if (color == Color::black)
	std::cout<<"Black";
	else if (color == Color::white)
	std::cout<< "white";
	else if (color == Color::red)
	std::cout<<"red";
	else if(color == Color::green)
	std::cout<<"green"
	else if (color == Color::blue)
	std::cout << "blue";
	else
	std::cout<<"desconocido";
}

int main(){
	
	printcolor(Color::green)
	
	return 0;
}