// Name: Jawad Ali
// Registration Number: BF25NWELE0691
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)
// Task 1: Comparison/Relational Operators

#include <stdio.h>

int main() {
    int num1, num2;

    // User se do numbers enter karne ko keh rahe hain
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Comparison operators use kar ke check kar rahe hain
    if(num1 == num2)
        printf("Both numbers are equal.\n");
    if(num1 > num2)
        printf("First number is greater than second number.\n");
    if(num1 < num2)
        printf("First number is smaller than second number.\n");

    return 0;
}
