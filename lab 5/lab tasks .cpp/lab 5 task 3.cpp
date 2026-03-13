// Student Name: Jawad Ali
// Instructor: Rizwan Sir
// Registration Number: BF25NEELE0691

#include <iostream> // include input-output library
using namespace std;

int main() {
    int n;     // variable to store user input
    int i = 1; // counter variable starting from 1
    int sum = 0; // variable to store sum, initialize to 0

    cout << "Enter a positive integer: "; // prompt user
    cin >> n; // take input from user

    // while loop to calculate sum from 1 to n
    while (i <= n) { 
        sum += i; // add current value of i to sum
        i++;      // increment i by 1 for next number
    }

    // display the calculated sum
    cout << "Sum of numbers from 1 to " << n << " is " << sum << endl;

    return 0; // end of program
}
