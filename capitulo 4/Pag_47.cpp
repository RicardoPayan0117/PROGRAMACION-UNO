#include <iostream>
#include <cstdint>

int main()
{
	
	std :: cout << "Fast 8: " <<sizeof(std :: int_fast8_t) *8 << "bits \n";
	std :: cout << "Fast 16: " <<sizeof(std :: int_fast16_t) *8 << "bits \n";
	std :: cout << "Fast 32: " <<sizeof(std :: int_fast32_t) *8 << "bits \n";

	std :: cout << "Least 8: " <<sizeof(std :: int_least8_t) *8 << "bits \n";
	std :: cout << "Least 16: " <<sizeof(std :: int_least16_t) *8 << "bits \n";
	std :: cout << "Least 32: " <<sizeof(std :: int_least32_t) *8 << "bits \n";

return 0;

}