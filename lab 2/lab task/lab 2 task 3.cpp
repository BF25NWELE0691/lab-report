// Name: Jawad Ali
// Registration Number: BF25NWELE0691
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)
// Program: Convert temperature from Celsius to Fahrenheit

#include <iostream>
using namespace std;

int main()
{
    float celsius, fahrenheit;  // variables declare kiye

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;             // user input Celsius

    fahrenheit = (celsius * 9 / 5) + 32;  // conversion formula

    cout << "Temperature in Fahrenheit is: " << fahrenheit << endl;  // result print

    return 0;  // program successfully end
}
