 #include <iostream> 
 
int main ()
{
	int x  ( 5 ) ;
	{
		int y { 7 } ;
		std::cout << x << "+ " << y << "=" << x + y << '\n';
	}
	return 0;
 } 
 
 