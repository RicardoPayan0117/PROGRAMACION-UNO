#include <iostream>
#include <cstdlib>


void cleanup(){
	
	
	//cualquier cosa
}

int main(){
	
	
	std::cout<< 1 << '\n';
	cleanup();
	
	
	std::exit(0);
	
	
	//esto jamas se ejecuta
	
	std::cout<< 2 << '\n';
	return 0;
}

