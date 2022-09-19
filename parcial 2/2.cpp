#include <iostream>

void doB()

{
	 std:: cout<< "en doB ()\n";
}

void doA() 
{
	std::cout << "iniciado doA () \n";
	doB ();
	std::cout << "finalizado doA () \n";
}
int main ()
{
	std::cout << "iniciado main () \n";
	doA ();
	std::cout << "finalizado main ()\n";
	return 0;
}  
