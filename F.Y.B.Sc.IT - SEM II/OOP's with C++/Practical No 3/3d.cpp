// Write a Program to find Maximum out of Two Numbers using friend function.
// Note: Here one number is a member of one class and the other number is member of some other
// class.


// In this program, we first define ClassA, which has a private member numA, and a constructor that initializes numA with the value passed as an argument.

// We also define ClassB, which has a private member numB, and a constructor that initializes numB with the value passed as an argument.

// In both classes, we declare the findMax() function as a friend function, so that it can access the private members of both classes.

// The findMax() function takes two arguments, objA of type ClassA and objB of type ClassB. It compares the values of numA and numB, and returns the maximum value.

// In the main() function, we create an object objA of ClassA with a value of 10, and an object objB of ClassB with a value of 20.

// We then call the findMax() function with objA and objB as arguments, and store the result in maxNum.

// Finally, we display the maximum number using cout.

// When this program is run, the output should be:

// This indicates that the findMax() function correctly identified 20 as the maximum value between the two numbers.

#include <iostream>
using namespace std;

class ClassA; // Forward declaration of ClassA

class ClassB {
    private:
        int numB;
    public:
        ClassB(int num) {
            numB = num;
        }
        friend int findMax(ClassA objA, ClassB objB);
};

class ClassA {
    private:
        int numA;
    public:
        ClassA(int num) {
            numA = num;
        }
        friend int findMax(ClassA objA, ClassB objB);
};

int findMax(ClassA objA, ClassB objB) {
    if (objA.numA > objB.numB) {
        return objA.numA;
    } else {
        return objB.numB;
    }
}

int main() {
    ClassA objA(10);
    ClassB objB(20);

    int maxNum = findMax(objA, objB);

    cout << "Maximum number is: " << maxNum << endl;

    return 0;
}

