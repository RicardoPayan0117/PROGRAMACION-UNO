#include <iostream>

namespace foo
{
	
	int doSomething(int x, int y)
	{
		
		return x + y;
		
	}
	
}

namespace goo
{
	
	int doSomething(int x, int y)
	{
		
		return x - y;
		
	}
	
}

int main()
{
	
	std::cout << foo::doSomething(4, 3) << "\n";
	return 0;
	
}