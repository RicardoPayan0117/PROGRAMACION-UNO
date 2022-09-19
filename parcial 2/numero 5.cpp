#include <iostream>
//int es el tipo de retorno
// un tipo de retorno de int significa que la funcion devolvera algun valor entero a la persona que llama el valor especifico
int returnFive()

{   //la declaracion de retorno explica el valor especifico que se devolvera
    return 5;//devuelve el valor especifico 5 a a la persona que se llama
}


int main()

{
         std::cout<<returnFive ()<<'\n';//imprime 5
         std::cout<<returnFive ()+2<<'\n';//imprime 7
         returnFive();//bien: de devuelve el valor 5, pero se ignora ya que el main()no hace nada con el
         return 0;
         }
