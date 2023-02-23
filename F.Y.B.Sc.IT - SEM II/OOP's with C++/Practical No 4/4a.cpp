// Write a C++ program to design a class representing complex numbers and having the functionality
// of performing addition & multiplication of two complex numbers using operator overloading.

// In this program, we first define the Complex class, which has two private members real and imag, and two constructors - a default constructor and a constructor that takes two arguments to initialize real and imag.

// We then overload the addition operator (+) and the multiplication operator (*) as member functions of the Complex class, using the const Complex& parameter to take a reference to the second operand. Inside each overloaded operator function, we create a new Complex object to hold the result, perform the corresponding operation on the two complex numbers, and return the result.

// We also define a member function display() to display the complex number in the format (real + imag*i).

// In the main() function, we create three Complex objects c1, c2, and c3. We then use the overloaded addition and multiplication operators to perform the corresponding operations on c1 and c2, and store the results in c3. Finally, we display the results using the display() member function.

// When this program is run, the output should be:
// Sum: (4 + 9i)
// Product: (-11 + 23i)
// This indicates that the overloaded addition and multiplication operators correctly performed the corresponding operations on the two complex numbers.

#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(double r, double i)
    {
        real = r;
        imag = i;
    }
    Complex operator+(const Complex &c)
    {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }
    Complex operator*(const Complex &c)
    {
        Complex result;
        result.real = real * c.real - imag * c.imag;
        result.imag = real * c.imag + imag * c.real;
        return result;
    }
    void display()
    {
        cout << "(" << real << " + " << imag << "i)" << endl;
    }
};

int main()
{
    Complex c1(3, 2), c2(1, 7), c3;

    c3 = c1 + c2;
    cout << "Sum: ";
    c3.display();

    c3 = c1 * c2;
    cout << "Product: ";
    c3.display();
    return 0;
}
