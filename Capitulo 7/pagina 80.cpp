#include <iostream>

int main(){
	
	enum Color{
		color_red,
		color_blue
	};
	
		enum fruta{
		fruta_banana,
		fruta_manzana
	};
	
	Color color {color_red};
	Fruta fruta{fruta_banana};
	
	if(color == fruta)
	std::cout<<"color y furta son iguales\n";
	else
	std::cout<<"color y furta son iguales\n";

return 0;
}