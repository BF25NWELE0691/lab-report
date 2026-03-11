// Name: Jawad Ali
// Registration Number: BF25NWELE0691
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)
// Task 9: Add Two Numbers Using Function

#include <iostream>
using namespace std;

// Function declaration: addTwo numbers
int addTwo(int x, int y);

int main()
{
    int a, b, sum; // Variables declare kiye

    // User se first number input le raha hai
    cout << "Enter the first number: ";
    cin >> a;

    // User se second number input le raha hai
    cout << "Enter the second number: ";
    cin >> b;

    // Function call to add numbers
    sum = addTwo(a, b);

    // Result display kiya
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;

    return 0; // Program end
}

// Function definition
int addTwo(int x, int y)
{
    return x + y; // Do numbers ka sum return karega
}
