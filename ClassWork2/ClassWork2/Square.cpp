#include <iostream>
#include "Square.h"


Square::Square(int x, int y, int length) {
	this ->x = x;
	this ->y = y;
	this ->length = length;
}

int Square::getX() {return this->x;}
int Square::getY() {return this->y;}
int Square::getLength() {return this->length;}

void Square::setX(int x) {this ->x = x;}
void Square::setY(int y) {this ->y = y;}
void Square::setLength(int length) {this ->length = length;}

void Square::print() {
	 std::cout << "Square Object: ( x = " << x <<", y = " << y << ", length = " << length << ")";
}

int Square::calcArea() { return this->length * this ->length;}

bool Square::isInside(int x, int y) {
	return ((x >= this->x && x <= this->x+length) && (y >= this->y && y <= this->y + length));
}

