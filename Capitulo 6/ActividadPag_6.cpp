#include <iostream>

using namespace std;
int main()
{
	
	cout << "Ingrese un valor entero: ";
	int value{};
	cin >> value;
	
	if(value > 0)
	{
		if ((value % 2) == 0)
		{
			
			cout << value << " Es psitivo y par." <<endl;

		}
		
		else 
		{
		
			cout << value << " Es psitivo e impar." <<endl;
		
		}
	}
	
	return 0;
}