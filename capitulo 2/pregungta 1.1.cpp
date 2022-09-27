# include <iostream>

//si funciona, da la suma de los dos return 7 + 9 =16.

int return7()
{
	return 7;
}

int return9()
{
	return 9;
}

int main()
{
	std::cout <<  return7() + return9() << '\n';
	
	return 0;
}
