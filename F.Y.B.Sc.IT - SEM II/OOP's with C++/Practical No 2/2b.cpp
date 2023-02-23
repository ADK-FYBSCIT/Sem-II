// Write a C++ program to find the sum of even and odd n natural numbers

// Explanation:

// The program takes a positive integer n as input from the user.
// The variables sum_even and sum_odd are used to store the sum of even and odd numbers, respectively. They are both initialized to 0.
// The program uses a for loop to iterate from 1 to n, and uses an if-else statement to determine whether the current number is even or odd.
// If the current number is even, it is added to sum_even. If it is odd, it is added to sum_odd.
// Finally, the program outputs the values of sum_even and sum_odd, which are the sum of even and odd numbers from 1 to n, respectively.

#include <iostream>
using namespace std;

int main() {
   int n, sum_even = 0, sum_odd = 0;

   cout << "Enter a positive integer: ";
   cin >> n;

   // calculate the sum of even and odd natural numbers15
   for(int i = 1; i <= n; i++) {
      if(i % 2 == 0) {
         sum_even += i;
      } else {
         sum_odd += i;
      }
   }

   // display the results
   cout << "The sum of even numbers up to " << n << " is " << sum_even << endl;
   cout << "The sum of odd numbers up to " << n << " is " << sum_odd << endl;

   return 0;
}





//Explanation of Compound Operator
// += is an assignment operator, while + is just an arithmetic operation. If you use +=, the value will be added to the variable.
// x = 5;
// x += 3; //x is now 8

// x += 1 is the same as x = x + 1



// + is arithmetic operator

// += is a short cut assignment operator

// the shortcut assignment operator is used only if there is a common variable in left and right hand side

// ex a=10 b=20;

//      a=a+b;
      
//       with +=

//       a+=b;
