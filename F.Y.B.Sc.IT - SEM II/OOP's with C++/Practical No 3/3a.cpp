// #include<iostream>
// using namespace std;
// class student
// {
//         private:
                
//                         char name[20],regd[10],branch[10];
//                         int sem;
//         public:
//                 void input();
//                 void display();
                        
                
// };
// void student::input()
// {
//         cout<<"Enter Name:";
//         cin>>name;
//         cout<<"Enter Regdno.:";
//         cin>>regd;
//         cout<<"Enter Branch:";
//         cin>>branch;
//         cout<<"Enter Sem:";
//         cin>>sem;
// }
// void student::display()
// {
//         cout<<"\nName:"<<name;
//         cout<<"\nRegdno.:"<<regd;
//         cout<<"\nBranch:"<<branch;
//         cout<<"\nSem:"<<sem;
// }
// int main()
// {
//         student s;
//         s.input();
//         s.display();
// }


// Class and Object Definition
// A class is a blueprint, or prototype which defines and describes the member attributes and member functions.
// Objects are the instances of a class. Simply speaking, it may be defined as a variable of user-defined datatype classes. Through an object or instance, all member variables and member functions of classes can be accessed.
// For a better understanding,
// Classes and Objects
// Class Syntax
// class Classname {
//     access_specifier:
//     member_varibales;
//     member_functions;
// }object1, object2;
// Read and Print Student Information Class Example Program
/* Read and Print Student Information Class Example Program In C++ */
/* Class C++ Programs, Understanding Class,C++ Examples */

// Header Files
#include <iostream>
#include<conio.h>

using namespace std;

// Student Class Declaration
class StudentClass {
private://Access - Specifier
   //Member Variable Declaration
   char name[20];
   int regNo, sub1, sub2, sub3;
   float total, avg;

public://Access - Specifier
   //Member Functions read() and print() Declaration

   void read() {
      //Get Input Values For Object Variables
      cout << "Enter Name :";
      cin >> name;

      cout << "Enter Registration Number :";
      cin >> regNo;

      cout << "Enter Marks for Subject 1,2 and 3 :";
      cin >> sub1 >> sub2>> sub3;
   }

   void sum() {
      total = sub1 + sub2 + sub3;
      avg = total / 3;
   }

   void print() {
      //Show the Output
      cout << "Name :" << name << endl;
      cout << "Registration Number :" << regNo << endl;
      cout << "Marks :" << sub1 << " , " << sub2 << " , " << sub3 << endl;
      cout << "Total :" << total << endl;
      cout << "Average :" << avg << endl;
   }
};

int main() {
   // Object Creation For Class
   StudentClass stu1, stu2, stu3;

   cout << "Read and Print Student Information Class Example Program In C++\n";

   cout << "\nStudentClass : Student 1" << endl;
   stu1.read();
   stu1.sum();
   stu1.print();

   cout << "\nStudentClass : Student 2" << endl;
   stu2.read();
   stu2.sum();
   stu2.print();

   cout << "\nStudentClass : Student 3" << endl;
   stu3.read();
   stu3.sum();
   stu3.print();
   
   getch();
   return 0;
}