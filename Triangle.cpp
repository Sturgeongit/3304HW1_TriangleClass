/*Write a Triangle class having three double data values a, b, and c representing the
sides of a triangle. Include the following functions in the class.
a. (15 pts) Write two constructors. Default constructor should set all sides of the triangle
to 10. Explicit-value constructor should accept three parameters and sets those values
as three sides of the triangle. However, if the parameters do not satisfy triangle
inequality, the constructor should prdouble an error message and sets all sides to 10. The
triangle inequality states that for any triangle, the sum of the lengths of any two sides
must be greater than or equal to the length of the remaining side.
b. (15 pts) Write getters and setters for all three sides such as getA, setA, getB, setB, getC,
and setC. If changing a side violates triangle inequality in the setters, do not change the
side and prdouble an error message.
c. (5 pts) Write a function getArea that returns the area of the triangle. You can compute
the area as 𝐴 = √𝑠(𝑠 − 𝑎)(𝑠 − 𝑏)(𝑠 − 𝑐) where 𝑠 = (𝑎 + 𝑏 + 𝑐)/2.
d. (20 pts) Write four functions isEquilateral, isIsosceles, isScalene, isPythagorean that
returns true or false depending on the type of the triangle. An equilateral triangle is a
triangle in which all three sides are equal. An isosceles triangle is a triangle that has two
sides of equal length. A scalene triangle is a triangle in which all three sides have
different lengths. A Pythagorean triangle is a triangle that the square of the length of
one side equals to the sum of the squares of the lengths of the two other sides.
e. (5 pts) Write a function named display to prdouble the triangle objects by displaying three
sides of the triangle. For a triangle with sides 3, 4, and 5, it should display: " a: 3, b: 4,
c: 5". The function returns nothing.*/

#include "triangle.h"


using namespace std;

bool isEquilateral(double, double, double);
bool isIsosceles(double, double, double);
bool isScalene(double, double, double);
bool isPythagorean(double, double, double);

int main()
{
    double sidea, sideb, sidec;
    bool type;

    cout << "Please enter the length of side A: \n";
    cin >> sidea;
    cout << "Please enter the length of side B: \n";
    cin >> sideb;
    cout << "Please enter the length of side C: \n";
    cin >> sidec;

    Triangle triangle1(sidea, sideb, sidec);
      
    cout << "This program will calculate the area of a triangle.\n\n";

    if (sidea + sideb > sidec && sidea + sidec > sideb && sideb + sidec > sidea)
    {
        type = isEquilateral(sidea, sideb, sidec);
        if (type == false)
            isIsosceles(sidea, sideb, sidec);
            isScalene(sidea, sideb, sidec);
            isPythagorean(sidea, sideb, sidec);
    }

    else
    {
        cout << "These sides cannot form a triangle.\n";
        cout << "Setting side length to default of 10.\n";
        sidea = 10.0;
        sideb = 10.0;
        sidec = 10.0;
    }

    triangle1.setA(sidea);
    triangle1.setB(sideb);
    triangle1.setC(sidec);
    triangle1.display(sidea, sideb, sidec);

    return 0;
}


bool isEquilateral(double a, double b, double c)
{
    if (a == b && b == c && a == c)
    {
        cout << "This is an equilateral triangle.\n\n";
    return true;
    }
    else
    return false;
}

bool isIsosceles(double a, double b, double c)
{
    if (a == b || b == c || a == c)
    {
        cout << "This is an isosceles triangle.\n\n";
        return true;
    }
    else
        return false;
}

bool isScalene(double a, double b, double c)
{
    if (a != b && b != c && a != c)
    {
        cout << "This is a scalene triangle.\n\n";
        return true;
    }
    else
        return false;
}

bool isPythagorean(double a, double b, double c)
{
    if (pow(a, 2) == pow(b, 2) * pow(c, 2) || pow(b, 2) == pow(a, 2) * pow(c, 2) || pow(c, 2) == pow(a, 2) * pow(b, 2))
    {
        cout << "This is a Pythagorean triangle.\n\n";
        return true;
    }
    else
        return false;
}

