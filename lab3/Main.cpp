#include <iostream>
#include "Math.h"


int main() {

	std::cout << Math::Add(12, 12) << std::endl;
	std::cout << Math::Add(12, 12,33) << std::endl;
	std::cout << Math::Add(12.1, 12.3) << std::endl;
	std::cout << Math::Add(12.1, 12.5, 33.7) << std::endl;
	std::cout << Math::Mul(7, 9) << std::endl;
	std::cout << Math::Mul(99, 99,66) << std::endl;
	std::cout << Math::Mul(1.6, 3.77) << std::endl;
	std::cout << Math::Mul(134.5, 312.6,32.0) << std::endl;
	std::cout << Math::Add(12, 2,6,7,8,9,8) << std::endl;
	std::cout << Math::Add("abec","acdf") << std::endl;
	


	


} 