#include "Square.h"
#include <iostream>
void main() {
	Square s1 = Square::Square(4, 5, 5);
	s1.print();
	std::cout << s1.isInside(8, 10) << std::endl;

	Square s2 = Square::Square(4, 5, 5);
	//Square s3 = s1 + s2;

	std::cout << (s1 == s2) << std::endl;
}
