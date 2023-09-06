//tarea 0.3: hacer una funcion que lea un numnero entero y se asegure que se aun  numero entero

#include <iostream>

using namespace std;

int num, result;

int main(){
	
	cout << "introduzca un numero entero: ";
	cin >> num;
	result = (num % 1);
	
	if(result == 0){
		cout << "el numnero que ingresaste es entero." <<endl;
	}else{
			cout << "el numnero que ingresaste no es entero. " <<endl;
	}
	
	
	return 0;
	
}
