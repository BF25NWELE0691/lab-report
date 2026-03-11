// Name: Jawad Ali
// Registration Number: BF25NWELE0691
// Instructor: Rizwan Sir
// Department: Electrical and Computing (AI)
// Task 4: If-else Statement

#include <stdio.h>

int main() {
    int age;

    // User se age enter karne ko keh rahe hain
    printf("Enter your age: ");
    scanf("%d", &age);

    // Age >= 18 check kar rahe hain
    if(age >= 18)
        printf("You are eligible.\n");
    else
        printf("You are not eligible.\n");

    return 0;
}
