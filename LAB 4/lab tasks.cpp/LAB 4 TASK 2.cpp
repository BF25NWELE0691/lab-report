// Name: Jawad Ali
// Registration Number: BF25NWELE0691
// Instructor: Rizwan Sir
// Program: Grade Evaluation using Switch

#include <iostream>
using namespace std;

int main()
{
    char grade;  // character variable grade store karega

    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;  // user se grade input

    // switch statement grade check karega
    switch(grade)
    {
        case 'A':
            cout << "Excellent";
            break;

        case 'B':
            cout << "Very Good";
            break;

        case 'C':
            cout << "Good";
            break;

        case 'D':
            cout << "Pass";
            break;

        case 'F':
            cout << "Fail";
            break;

        default:
            cout << "Invalid Grade";
    }

    return 0;
}
