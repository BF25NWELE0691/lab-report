#include <iostream>   // Input aur output ke liye header file
using namespace std;  // Standard namespace use karne ke liye

int main() {   // Main function start

    char message[] = "HELLO";  
    // Character array me HELLO store kiya

    for(int i = 0; message[i] != '\0'; i++) {  
    // Loop tab tak chalega jab tak null character na aaye

        cout << message[i] << endl;  
        // Har character alag line me print hoga
    }

    return 0;  
    // Program successful khatam
}