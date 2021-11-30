#include <iostream>
#include "std_lib_facilities.h"

/**
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Yeshwanth Mandava
 */


int main() {

    double a, b , c, d, Root;
    cout << "Quadratic Equation --> ax^2+bx+c = 0\n";
    cout << " Enter any value for a -> ";
    cin >> a;
    cout << "Enter a value for b -> ";
    cin >> b;
    cout << "Enter any value for c -> ";
    cin >> c;

    d = (pow(b, 2) - 4*a*c);
    cout << "--------------------------\n";

    if(d > 0)
    {
        cout << " Root 1 = " << (-b + sqrt(pow(b, 2.0)-4*a*c))/(2*a) << "\n Root 2 = " << (-b - sqrt(pow(b, 2.0)-4*a*c))/(2*a);
    }
    else if(d == 0) {
        Root = (-b + sqrt(pow(b, 2.0)-4*a*c))/(2*a);
        cout << " Root = " << Root << "\n";
    }
    else
    {
        cout << " There are no real roots.\n";
    }
}
