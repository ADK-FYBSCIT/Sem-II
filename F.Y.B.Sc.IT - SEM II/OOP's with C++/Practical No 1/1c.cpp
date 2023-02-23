// Write a C++ program to find the volume of a square, cone, and rectangle.

// Explanation:

// The program starts by displaying a menu to the user, asking them to choose between finding the volume of a square, rectangle, or cone.
// The user's choice is stored in the variable choice.
// The program then uses a series of if-else statements to perform the corresponding calculation based on the user's choice, 
// and outputs the result.
// The program also includes error handling for invalid choice.

#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.14159265358979323846;

int main()
{
    int choice;
    double a, b, h, r, l, w, volume;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Cone" << endl;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Enter the side of the square: ";
        cin >> a;
        volume = pow(a, 3);
        cout << "Volume of the square: " << volume << endl;
    }
    else if (choice == 2)
    {
        cout << "Enter the length of the rectangle: ";
        cin >> l;
        cout << "Enter the width of the rectangle: ";
        cin >> w;
        volume = l * w;
        cout << "Volume of the rectangle: " << volume << endl;
    }
    else if (choice == 3)
    {
        cout << "Enter the radius of the cone: ";
        cin >> r;
        cout << "Enter the height of the cone: ";
        cin >> h;
        volume = (pi * pow(r, 2) * h) / 3;
        cout << "Volume of the cone: " << volume << endl;
    }
    else
    {
        cout << "Error: invalid choice" << endl;
    }
    return 0;
}
