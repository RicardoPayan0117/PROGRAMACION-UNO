#include <iostream>

int main(){
	
	
enum class color{


red,
blue	
}:

Color color{color::red};

if(color == color::red)
std::cout<< "el color es rojo!\n";
else if(color == Color::blue)
std::cout<<"el color es azul!\n";

return 0;
}

