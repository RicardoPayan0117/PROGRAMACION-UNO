#include <iostream>

int getValueFromUser()

{
	
	std::cout << "ingrese un entero :";
	int input{};
	std::cin>>input;
		
}

int main()
{
	int num{getValueFromUser()};
	std::cout << num<<"el doble es: "<< num*2<<'\n';
	return 0;
}



