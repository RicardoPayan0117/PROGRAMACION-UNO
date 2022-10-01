#include <iostream>

void d()
{
}

void c()
{
}

void b()
{
	
	c();
	d();
	
}

void a()
{
	
	b();
	
}

int main()
{
	
	a();
	
	return 0;
	
}