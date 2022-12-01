 #include <iostream> 
 
 int getinteger ()
 {
 	static bool s_isfirstcall {true};
 	if (s_isfirstcall)
 	{
 		std::cout << " ingrese un numero entero:";
 		s_isfirstcall = false ;
 		
	 }
	 else 
	 {
	 	std:: cout << "ingrese otro numero entero";
	 	
	 }
	 int i{};
	 std::cin>> i ;
	 return i;
	 
 }
 
 int main ()
 {
 	int a { getinterger ()};
 	int b { getinterger ()};
 	return 0;
 }
 