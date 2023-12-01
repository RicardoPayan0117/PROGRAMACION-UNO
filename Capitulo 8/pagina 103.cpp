#include <iostream>

int main(){
	int count{0};
	bool keepLooping {true};
	while (keepLooping){
		std::cout<<"ingrese 's' para salir del ciclo, otro caracter para continuar:";
		char ch{};
		std::cin >> ch;
		
		if (ch == 's')
			keepLooping = false;
			else
			{
				++count;
				std::cout <<"hemos iterado" << count << "veces\n";
			}
		}
		return 0;
	}
