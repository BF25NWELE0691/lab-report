// Name: Jawad Ali
// Registration Number: BF25NWELE0691
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)
// Task 2: Logical Operators

#include <stdio.h>

int main() {
    int num;

    // User se integer enter karne ko keh rahe hain
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Logical AND operator use kar ke check kar rahe hain
    if(num > 0 && num < 100)
        printf("The number is greater than 0 and less than 100.\n");
    else
        printf("The number does not meet both conditions.\n");

    return 0;
}
