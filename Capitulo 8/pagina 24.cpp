#include <iostream>
enum class ErrorCode{
	
	success,
	negative_number
};

ErrorCode doSomething(int value){
	
	if(value < 0){
		return ErrorCode::negative_number;
	}
	
	return ErrorCode::success; 	
}

int main(){
	
	std::cout<< "ingrese un numero positivo:";
	int x {};
	std::cin >> x;
	
	if(doSomething(x) == ErrorCode::negative_number)
	{
		std::cout<<"ingrese un numero nevativo!\n";
	}
	else{
		std::cout<<"Funciono!!!\n";
	}
	
	return 0;
	
}