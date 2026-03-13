// Name: Jawad Ali
// Registration Number: BF25NWELE0691
// Instructor: Rizwan Sir
// Program: Unit Conversion using Switch Menu

#include <iostream>
using namespace std;

int main()
{
    int choice;   // user ki menu choice store karega
    float value;  // conversion value store karega

    // Menu display
    cout << "Menu:\n";
    cout << "1 -> Convert Kilometers to Meters\n";
    cout << "2 -> Convert Meters to Centimeters\n";
    cout << "3 -> Convert Kilograms to Grams\n";
    cout << "4 -> Convert Celsius to Fahrenheit\n";

    cout << "Enter your choice: ";
    cin >> choice;  // user choice input

    cout << "Enter value: ";
    cin >> value;   // value input

    // switch statement conversion perform karega
    switch(choice)
    {
        case 1:
            cout << "Meters = " << value * 1000;
            break;

        case 2:
            cout << "Centimeters = " << value * 100;
            break;

        case 3:
            cout << "Grams = " << value * 1000;
            break;

        case 4:
            cout << "Fahrenheit = " << (value * 9/5) + 32;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
