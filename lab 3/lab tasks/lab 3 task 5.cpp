// Name: Jawad Ali
// Registration Number: BF25NWELE0691
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)
// Task 5: Else-if Statement

#include <stdio.h>

int main() {
    int num;

    // User se integer enter karne ko keh rahe hain
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Else-if conditions check kar rahe hain
    if(num > 0)
        printf("The number is positive.\n");
    else if(num < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");

    return 0;
}
