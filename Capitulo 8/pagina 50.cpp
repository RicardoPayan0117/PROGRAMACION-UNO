#include<iostream>
#include<cmath>

int main(){
	
	double x;
	tryAgain:
		std::cout<<"ingrese un numero no negativo";
		std::cin>>x;
		
		if(x < 0.0)
		goto tryAgain;
		
		std::cout<<"la rai cuadrada de "<< x << "es" << std::sqrt(x) << std::endl;
		return 0;
}