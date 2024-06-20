// 2.20.) Write a program that reads in the radius of a circle as an integer and prints the circle’s diameter, circumference and area. Use the constant value `3.14159` for π. Do all calculations in output statements. [Note: In this chapter, we’ve discussed only integer constants and variables. In Chapter 4 we discuss floating-point numbers, i.e., values that have decimal points.]
// Programmer: Anna Le

#include <iostream>
using namespace std;

int main()
{
    //Defining variables
    int radius;
    double pi = 3.14159;

    //Assigning value to radius
    cout << "Radius: ";
    cin >> radius;
    
    //Circle Values
    cout << "\nCircle Specs:" << endl;
    cout << "Diameter: " << 2 * radius << endl;
    cout << "Circumference: " << 2 * pi * radius << endl;
    cout << "Area: " << pi * radius * radius << endl;
}