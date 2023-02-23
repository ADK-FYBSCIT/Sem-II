// Write a C++ Program to allocate memory dynamically for an object of a given class using class’s
// constructor.

// In this program, we first define the MyClass class, which has a private member num, and a constructor that initializes num with the value passed as an argument.

// In the main() function, we use the new operator to dynamically allocate memory for an object of MyClass with a value of 10. The new operator returns a pointer to the newly created object, which we store in the ptrObj variable of type MyClass*.

// We then call the displayNum() member function on the object pointed to by ptrObj.

// Finally, we use the delete operator to deallocate the memory that was previously allocated for the object.

// When this program is run, the output should be:
// Number is: 10
// This indicates that the displayNum() member function correctly displayed the value of num for the dynamically allocated object.

#include <iostream>
using namespace std;

class MyClass {
    private:
        int num;
    public:
        MyClass(int n) {
            num = n;
        }
        void displayNum() {
            cout << "Number is: " << num << endl;
        }
};

int main() {
    MyClass* ptrObj = new MyClass(10);

    ptrObj->displayNum();

    delete ptrObj;

    return 0;
}
