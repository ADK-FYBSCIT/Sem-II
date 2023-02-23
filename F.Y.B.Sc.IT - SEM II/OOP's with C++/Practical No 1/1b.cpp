// Write a C++ program to convert seconds into hours, minutes and seconds.


// Explanation:

// The input number of seconds is first divided by 3600 to get the number of hours.
// Then, the remaining seconds (after getting hours) is divided by 60 to get the number of minutes.
// Finally, the remaining seconds (after getting minutes) is the number of seconds.

#include <iostream>
using namespace std;

int main() {
    int seconds, hours, minutes;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = (seconds % 3600) % 60;
    cout << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds" << endl;
    return 0;
}
