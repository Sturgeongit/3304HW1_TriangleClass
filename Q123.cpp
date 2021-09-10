/*. Write a C++ function named search that searches a given number in an integer
array and returns true if the given number is found, false otherwise. Your function should
accept three parameters: an integer array, its capacity, and a number to search. For instance,
running the following code in the main function should print "3 is found in the array." and
"5 is not found in the array."

int a[] = { 3,7,9,12,4,6 };
if (search(a, 6, 3)) {
cout << "3 is found in the array." << endl;
}
else {
cout << "3 is not found in the array." << endl;
}
if (search(a, 6, 5)) {
cout << "5 is found in the array." << endl;
}
else {
cout << "5 is not found in the array." << endl;
}

*/

#include <iostream>
#include <cmath>

using namespace std;

struct Point
{
	double x, y;
};

bool search(int a[], int size, int key);
double distance(Point);
int reverse(int a[], int size);


int main()
{
	int key;
	const int size = 6;
	int index = 0;
	int array[size] = { 3, 7, 9, 12, 4, 6 };
	cout << "Please enter the number you are searching for: \n";
	cin >> key;
	cout << endl;
	
	search(&array[index], size, key);
	reverse(&array[index], size);


	Point point1;
	//double x, y;
	cout << "Please enter the x and y variables of a point: \n";
	cin >> point1.x >> point1.y;
	cout << endl;
	cout << "The distance from point (" << point1.x << ", " << point1.y << ") to the origin of the circle at (0, 0) is " << distance(point1) << endl << endl;;
	
}


bool search(int a[], int size, int key)
{
	bool found = false;
	for (int i = 0; i < size; i++)
	{
		//cout << a[i] << endl;
		if (a[i] == key)
		{
			cout << "The number " << key << " was found in this array at index " << i << ".\n\n\n";
			found = true;		
		}
	}

	if (found)
		return true;
	else
	{
		cout << "Number not found.\n";
		return false;
	}

}

/*Write a C++ function named reverse that accepts an integer array and its capacity
as a parameter and returns an integer pointer that stores the address of a new array which
contains the same array elements in the reverse order. Therefore, you should create a new
array in the function having the same size as the array in the parameter and copy all elements
in reverse order. For instance, running the following code in the main function should print "6 4
12 9 7 3".
int a[] = { 3,7,9,12,4,6 };
int * b = reverse(a, 6);
for (int i = 0; i < 6; i++) {
cout << *(b+i) << " ";
}
cout << endl;
*/

int reverse(int a[], int size)
{ 
	int k = 5;
	int *reverseArray = nullptr;
	reverseArray = new int[size];
	cout << "Here is the new reversed array: \n";

	for (int j = 0; j < size; j++)
	{
		 reverseArray[j] = a[size - j - 1];
		 cout << reverseArray[j] << "\t";			
	}
	cout << endl << endl << endl;
	return *reverseArray;
}

/*Define a struct named Point having double x and y values representing x and y
coordinates of the point. Write a function named distance that accepts a Point as parameter
and returns its distance to the origin (0, 0). Distance can be computed as √(𝑥^2 + 𝑦^2). For
instance, running the following code in the main function should print "5".
Point p = {3,4};
cout << distance(p) << endl;*/



double distance(Point point1)
{
	double dist, xvar, yvar;
	
	xvar = point1.x;
	yvar = point1.y;

	dist = sqrt((xvar * xvar) + (yvar * yvar));

	return dist;
}