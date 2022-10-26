 #include <iostream>
  
  int main ()
  
  {
  	std:: cout << "ingrese un entero: ";
  	int x{};
  	std::cin>> x;
  	
  	
  	
  	std:: cout << "ingrese otro  entero: ";
  	int y{};
  	std::cin>> y;
  	
  	std:: cout<< "el residuo es: " <<x % y << '\n';
  	
  	if ((x % y ) == 0 )
  	    std::cout <<  x << " es iniformemnte divisioble por " << y << '\n';
  	else 
	  std::cout <<  x << "  no es iniformemnte divisioble por " << y << '\n';
  	
return 0;
  	
  }