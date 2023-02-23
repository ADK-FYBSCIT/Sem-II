// Write a C++ Program to design a class having static member function named showcount() which
// has the property of displaying the number of objects created of the class.

// In this program, we first define the MyClass class, which has a private static int member named count that keeps track of 
// the number of objects created.

// We also define a constructor for the class that increments the count member each time a new object is created.

// We then define a static member function named showcount(), which simply displays the current value of the count member using cout.

// In the main() function, we create three objects of the MyClass class (obj1, obj2, and obj3) and call MyClass::showcount() 
// to display the number of objects created so far.

// We then create a fourth object (obj4) and call MyClass::showcount() again to display the updated count.

// When this program is run, the output should be:

// This indicates that the count member was properly incremented each time an object was created, 
// and that the showcount() function correctly displayed the current count.


#include <iostream>
using namespace std;

class MyClass {
    private:
        static int count;
    public:
        MyClass() {
            count++;
        }
        static void showcount() {
            cout << "Number of objects created: " << count << endl;
        }
};

int MyClass::count = 0;

int main() {
    MyClass obj1, obj2, obj3;

    MyClass::showcount();

    MyClass obj4;

    MyClass::showcount();

    return 0;
}

