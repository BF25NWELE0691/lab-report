#include <iostream>   // Input aur output ke liye header file
using namespace std;  // Standard namespace use karne ke liye

int main() {   // Main function start

    int numbers[5];  
    // 5 numbers store karne ke liye array

    int sum = 0;  
    // Sum store karne ke liye variable

    cout << "Enter 5 numbers:" << endl;  
    // User se numbers enter karwane ke liye message

    for(int i = 0; i < 5; i++) {  
    // Loop 5 martaba chalega

        cin >> numbers[i];  
        // User input array me store hoga

        sum = sum + numbers[i];  
        // Har number ko sum me add karega
    }

    cout << "Sum of array elements = " << sum;  
    // Total sum display karega

    return 0;  
    // Program successful khatam
}