// Write a C++ Program using copy constructor to copy data of an object to another object.



// In this program, we first define the MyClass class, which has a private member num, and a constructor that initializes num with the value passed as an argument.

// We then define a copy constructor for the class, which takes a reference to another MyClass object as its argument. Inside the copy constructor, we copy the num value from the passed object to the new object, and display a message indicating that the copy constructor has been invoked.

// In the main() function, we create an object obj1 of MyClass with a value of 10.

// We then create a second object obj2 of MyClass, and initialize it using obj1 (i.e., we copy the data from obj1 to obj2 using the copy constructor).

// Finally, we display the values of num for both objects using the getNum() member function.

// When this program is run, the output should be:

// Copy constructor invoked.
// obj1 num: 10
// obj2 num: 10

// This indicates that the copy constructor was invoked, and that the data from obj1 was successfully copied to obj2.

#include <iostream>
using namespace std;

class MyClass {
    private:
        int num;
    public:
        MyClass(int n) {
            num = n;
        }
        MyClass(const MyClass& obj) {
            num = obj.num;
            cout << "Copy constructor invoked." << endl;
        }
        int getNum() {
            return num;
        }
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1;

    cout << "obj1 num: " << obj1.getNum() << endl;
    cout << "obj2 num: " << obj2.getNum() << endl;

    return 0;
}
