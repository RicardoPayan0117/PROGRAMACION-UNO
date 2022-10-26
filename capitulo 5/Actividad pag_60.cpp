#include <iostream>
#include <cmath>

//epailon es un valor absoluto
bool isAlmostEqual ( double a , double b double epsilon)
{

	// si la distancia entre a y b es menor que epsilon entonces a y b estan "lo suficientemente cerca"	
	return std::abs (a - b) <= epsilon;

}