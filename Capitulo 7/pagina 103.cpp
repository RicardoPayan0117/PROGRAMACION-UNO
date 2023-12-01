#include <iostream>

struct Empleado{
	
	short id;
	int edad;
	double wage;
};

void ImprimirInformacion(Empleado empleado){
	
	std::cout<<"ID   "<< empleado.id << "\n";
	std::cout<<"Edad   "<< empleado.edad << "\n";
	std::cout<<"wage "<< empleado.wage << "\n";
	
}

int main(){
	Empleado joe{14, 32, 24.5};
	Empleado maria{15,28,18.27};
	
	ImprimirInformacion(maria);
	
	return 0;

}