/* Write a Triangle class having three double data values a, b, and c representing the
sides of a triangle. Include the following functions in the class.*/
#include <iostream>
#include <cmath>

using namespace std;

class Triangle
{
private:	double sideA, sideB, sideC;
public:
	Triangle()				//default constructor
	{
		sideA = 10.0;
		sideB = 10.0;
		sideC = 10.0;
	}
	Triangle(double a, double b, double c)	//mutator
	{
		sideA = a;
		sideB = b;
		sideC = c;
	}

	void setA(double);				//mutators
	void setB(double);
	void setC(double);
	double getA() const				//accessors
	{
		return sideA;
	}
	double getB() const
	{
		return sideB;
	}
	double getC() const
	{
		return sideC;
	}

	double area() const;
	/*{
		double s;
		double area;
		s = (sideA + sideB + sideC) / 2;
		area = sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
		return area;
	}*/
	
	void display(double, double, double);

};

