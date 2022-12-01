 #include <iostream> 
 
 namespace foo 
 {
 	namespace goo
	 {
 		 int add(int x, int y) 
 		 {
 		 	return x + y ;
		  }
	 }
 }
 
 int main()
 {
 	std::cout << foo::goo::add(1, 2) << '\n' ;
 	return 0;
 }