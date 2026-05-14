#include <iostream>   // Input aur output ke liye header file
using namespace std;  // Standard namespace use karne ke liye

int main() {   // Main function start

    int numbers[5] = {10, 20, 30, 40, 50};  
    // 5 size ka integer array banaya aur values store ki

    cout << "Array Elements:" << endl;  
    // Heading display karne ke liye

    for(int i = 0; i < 5; i++) {  
    // Loop 0 se 4 tak chalega

        cout << numbers[i] << endl;  
        // Har array element print karega
    }

    return 0;  
    // Program successful khatam
}
