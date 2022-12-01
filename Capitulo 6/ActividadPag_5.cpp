 #include <iostream> 
  
  int main ()
  
  
  {
  	std::cout << "ingrese un entero " ; 
  	int value {};
  	std::cin >> value;
	  
  	
  	
  	if (value >= 0)
  	{
  		std::cout<< value << "is es un numero positivo o cero \n" ;
  		std::cout << "el doble del nuero es " << value  * 2 << '\n';
	}
	  else 
	  
	  {
	  	std::cout << value << " el nuero es negativo \n ";
	  	std::cout << "el numero positivo de este numero es : " << -value << '\n' ;
	  	
	  }
  	
  	return 0;
  }

  