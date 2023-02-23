// Write a C++ program to generate all the prime numbers between 1 and n, where n is a value supplied by the user.

// Explanation:

// The program takes a positive integer n as input from the user.
// The function is_prime returns true if the input number is prime, and false otherwise. It first checks if the input number is less 
// than or equal to 1, in which case it returns false, since 1 is not a prime number.
// Then, it uses a for loop to check if the input number is divisible by any number between 2 and the square root of the input number. 
// If the input number is divisible by any of these numbers, the function returns false, indicating that the input number is not prime.
// In the main function, the program uses a for loop to iterate from 2 to n, and calls the is_prime function on each number. 
// If the is_prime function returns true, the number is output as a prime number.
// Finally, the program outputs all the prime numbers between 1 and n.

#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;
    cout << "Prime numbers between 1 and " << n << ": ";
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
