#include <iostream>
int add (int x, int y);// declaracion de avance de add()(usando un prototipo de funcion)

int main()
{
    std:: cout<<"la suma de 3 y 4 es; "<<add(3,4)<<'\n';//esto funciona por que reenviamos declarado add() arriba
    return 0;

}

int add (int x, int y)// aunque el cuerpo de add () no esta definido hasta aqui

{
    return x + y ;
}
