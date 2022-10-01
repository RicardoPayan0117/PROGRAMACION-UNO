#include <iostream>

int getUserInput()
{
	#ifdef ENABLE_DEBUG
	std::cerr << "lama a getUserInput" () \n";
	#endif
	std:: cout<< "ingrese un numero:";
	int x{};
	std ::cin >> x;
	return x;
	
}
int main()
{

#ifdef ENABLE_DEBUG
std::cerr << "llama a main () \n";
#endif
int x{ getUserInput() };
std:: cout << "tu ingresaste" << x;

return 0;
}
	

