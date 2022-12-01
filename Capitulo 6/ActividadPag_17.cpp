 #include <iostream>
 
 void print()
 {
 	std::cout << "there \n" ;
 }
 
 namespace foo 
 {
 	void print ()
 	{
 		std::cout<< "hola ";
	 }
 }
   
   int main ()
   
   {
   	foo::print();
   	::print();
   	return 0;
   }