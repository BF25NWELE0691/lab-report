#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char firstName[50];
    char lastName[50];
    char fullName[100];

    cout << "Enter first name: ";
    cin >> firstName;

    cout << "Enter last name: ";
    cin >> lastName;

    strcpy(fullName, firstName);   
    strcat(fullName, " ");        
    strcat(fullName, lastName);    

    cout << "Full Name: " << fullName << endl;

    return 0;
}