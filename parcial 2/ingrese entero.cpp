#include <iostream>
int getInteger()
{
    std::cout<<"Ingrese un entero:";
    int x {};
    std::cin>>x;
    return 0;
}
int main ()

{
    int x { getInteger()};
    int y { getInteger()};

    std::cout<<x<<"+"<<"is"<<x+y<<'\n';
    return 0;
}
