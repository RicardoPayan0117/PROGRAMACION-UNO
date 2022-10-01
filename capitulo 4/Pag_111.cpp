#include <iostream> 
bool isallowedtotakefunride ()
{
	std::cout << "que tam alto eres ?\n";
	double height{};
	std:: cin >> height;
	
	if ( height > 140.0) 
	return true;
	else 
	return false ;
	
	}
	
	int  main()
	{
	
	if (isallowedtotakefunride () )
	std:: cout <<"divirtete\n";
	else 
	std:: cout << "lo siento eres bajito ";
	return 0;
	
	}