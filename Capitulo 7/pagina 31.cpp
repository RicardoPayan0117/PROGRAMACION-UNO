#include <cassert>
#include <string>
#include <iterator>

int main(){
	
	std::string s("Exemplar");
	assert(8 == s.size());
	assert(s.size() == static cast<std::string::size_type>(std::distance(s.begin(), s.end())));
	
	std::u32string a(U"letras japonesas XD");
	assert(8 == a.size());
	
	std::u16string b(U"letras japonesas XD");
	assert(8 == b.size());
	
		std::string c("letras japonesas XD");
	assert(24 == c.size());
	
	#if _cplusplus >= 202002
	std::string d(u8"letras japonesas XD");
	assert(24 == d.size());
	#endif
}
