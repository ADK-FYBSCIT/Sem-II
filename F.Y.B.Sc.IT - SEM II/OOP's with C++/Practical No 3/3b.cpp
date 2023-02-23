// Write a C++ program for Structure bank employee to print name of the employee,
// account_no. & balance. Display the same also display the balance after withdraw and deposit

// Explanation
// In this program, we first define the BankEmployee structure, which has three members: a string for the employee's name, 
// an int for their account number, and a float for their balance.

// We then read in the employee's name, account number, and starting balance from the user, and display them using cout.

// Next, we enter a loop that allows the user to make deposits and withdrawals until they choose to quit. Each time through the loop, 
// we display a prompt asking the user to choose 'd' to deposit, 'w' to withdraw, or 'q' to quit. 
// We read in their choice using cin, and then use a switch statement to handle the different cases.

// If the user chooses 'd', we read in the amount to deposit, add it to the employee's balance, and display the new balance using cout.

// If the user chooses 'w', we read in the amount to withdraw, check if it's greater than the employee's balance, 
// and either display an "Insufficient funds" message or subtract the amount from the balance and display the new balance.

// If the user chooses 'q', we break out of the loop and exit the program.

// If the user enters an invalid choice, we display an error message and loop back to the prompt.



#include <iostream>
using namespace std;

struct BankEmployee
{
    string name;
    int account_no;
    float balance;
};

int main()
{
    BankEmployee employee;
    cout << "Enter employee name: ";
    getline(cin, employee.name);
    cout << "Enter account number: ";
    cin >> employee.account_no;
    cout << "Enter starting balance: ";
    cin >> employee.balance;

    cout << "Employee: " << employee.name << endl;
    cout << "Account number: " << employee.account_no << endl;
    cout << "Starting balance: " << employee.balance << endl;

    float amount;
    char choice;
    do
    {
        cout << "Enter 'd' to deposit, 'w' to withdraw, or 'q' to quit: ";
        cin >> choice;
        switch (choice)
        {
        case 'd':
            cout << "Enter amount to deposit: ";
            cin >> amount;
            employee.balance += amount;
            cout << "New balance: " << employee.balance << endl;
            break;
        case 'w':
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount > employee.balance)
            {
                cout << "Insufficient funds" << endl;
            }
            else
            {
                employee.balance -= amount;
                cout << "New balance: " << employee.balance << endl;
            }
            break;
        case 'q':
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (choice != 'q');

    return 0;
}

