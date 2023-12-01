#include <iostream>

int main(){
	
	enum class Color{
		
		red,
		blue
	};
	
	Color color{color::blue};
	
	std::cout<<color;
	std::cout << static_cast<int>(color);
	
	return 0;
}