#include <iostream>// importa la declaracion de std::cout
using namespace std; // hace que std::cout sea accesible como "cout"

int cout ()//declara nuestra propia funcion "cout"
{
    return 5;
}
int main ()

{
    //Error de compilacion

    cout<<"hola,mundo";

    return 0;
}
