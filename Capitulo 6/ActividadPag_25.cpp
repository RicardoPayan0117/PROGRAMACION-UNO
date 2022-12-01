#include <iostream>

namespace foo
{
	
	namespace goo
	{
		
		int add(int x, int y)
		{
			
			return x + y;
		
		}
		
	}
	
}

int main()
{
	
	namespace boo = foo::goo;
	std::cout << boo::add(1, 2) << "\n";
	
	return 0;
	
}