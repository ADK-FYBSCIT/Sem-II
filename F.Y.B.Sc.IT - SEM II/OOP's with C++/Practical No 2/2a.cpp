// Write a C++ program to find the greatest of three numbers.

// Explanation:

// The program takes three numbers as input from the user.
// The variable max is initialized with the value of the first number num1.
// The program then uses a series of if statements to compare num2 and num3 with max, and updates the value of max if either 
// num2 or num3 is greater than max.
// Finally, the program outputs the value of max, which is the greatest of the three numbers.

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    int max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    cout << "The greatest number is: " << max << endl;
    return 0;
}
