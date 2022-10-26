 #include <iostream>
  
  int main ()
  
  {
  	
  std::cout<< "ingrese un entero: ";
  int x{};
  std:: cin >> x;
  
  std::cout<< "ingrese un entero: ";
  int y{};
  std:: cin >> y;
  
  if (x == y)
  std::cout<< x >> " igual " << y << '\n';
  if (x != y)
  std::cout<< x >> " no es igual " << y << '\n';
  if (x > y)
  std::cout<< x >> " es mayor k " << y << '\n';
  if (x < y)
  std::cout<< x >> " es menor k " << y << '\n';
    if (x >= y)
  std::cout<< x >> " es menor k " << y << '\n';
     if (x <= y)
  std::cout<< x >> "  es mmenor o igual k  " << y << '\n';
  
  
  
  	return 0;
	  


  }