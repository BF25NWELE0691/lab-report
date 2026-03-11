// Name: Jawad Ali
// Registration Number: BF25NWELE0691
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)
// Task 7: Check whether number is positive or negative

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter an integer: ";  // User se input
    cin >> number;                 // Input store

    if (number >= 0)                // Check positive
        cout << "You entered a positive integer: " << number << endl;
    else                            // Else negative
        cout << "You entered a negative integer: " << number << endl;

    return 0;  // Program end
}
