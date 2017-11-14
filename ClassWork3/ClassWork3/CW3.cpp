/*#include <iostream>
#include <stdio.h>
#include "circle.h"

Circle::Circle(double r) {
	std::cout << "Setting R as "<< r<< "\n";
	r = r,	x = 0, y = 0;
}

Circle::Circle(double x, double y, double r) {
	x = x, y = y, r = r;
}

double Circle::getX() {return x;}

double Circle::getY() {return y;}

double Circle::getR() {return r;}

void Circle::setX(double x) {x = x;}

void Circle::setY(double y) {y = y;}

void Circle::setR(double r) {r = r;}

void Circle::printCircle() {std::cout << "Center: ("<<x << ", " << y << "), Radius: "<<r;}

double Circle::length() {return 2 * PI * r;}

double Circle::area() {return PI * r * r;}
/*
void main() {
	Circle a = Circle::Circle(0, 0, 5.0);
	a.setX(3);
	a.printCircle();
	std::cout << a.length() << "   " << a.area();
	getchar();

}
*/
