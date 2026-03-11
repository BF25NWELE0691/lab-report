// Name: Jawad Ali
// Registration Number: BF25NWELE0691
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)
// Program: Display variables value, size (in bytes) and memory location

#include <iostream>
using namespace std;

int main()
{
    // Different type of variables declare kiye aur initialize kiya
    int a = 10;       // integer variable
    float b = 5.5;    // float variable
    double c = 20.99; // double variable
    char d = 'A';     // char variable
    bool e = true;    // boolean variable

    // Integer variable ke details print kiye
    cout << "Integer value: " << a << endl;
    cout << "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Memory location of int: " << &a << endl;
    cout << endl;

    // Float variable ke details print kiye
    cout << "Float value: " << b << endl;
    cout << "Size of float: " << sizeof(b) << " bytes" << endl;
    cout << "Memory location of float: " << &b << endl;
    cout << endl;

    // Double variable ke details print kiye
    cout << "Double value: " << c << endl;
    cout << "Size of double: " << sizeof(c) << " bytes" << endl;
    cout << "Memory location of double: " << &c << endl;
    cout << endl;

    // Char variable ke details print kiye
    cout << "Char value: " << d << endl;
    cout << "Size of char: " << sizeof(d) << " bytes" << endl;
    cout << "Memory location of char: " << (void*)&d << endl;
    cout << endl;

    // Boolean variable ke details print kiye
    cout << "Bool value: " << e << endl;
    cout << "Size of bool: " << sizeof(e) << " bytes" << endl;
    cout << "Memory location of bool: " << &e << endl;

    return 0;  // program successfully end
}
