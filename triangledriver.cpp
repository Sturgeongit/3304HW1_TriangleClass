#include "Triangle.h"

void Triangle::setA(double a)
{
	sideA = a;
}
void Triangle::setB(double b)
{
	sideB = b;
}

void Triangle::setC(double c)
{
	sideC = c;
}

double Triangle::area() const
{
	double s;
	double area;
	s = (sideA + sideB + sideC) / 2;
	area = sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
	return area;
}

void Triangle::display(double a, double b, double c)
{
	cout << "Here is the triangle's data:\n";
	cout << "Side A: " << getA() << endl;
	cout << "Side B: " << getB() << endl;
	cout << "Side C: " << getC() << endl;
	cout << "Area: " << area() << endl;
}