#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char message[100];

    cout << "Enter a message: ";
    cin.get(message, 100);

    cout << "You entered: " << message << endl;

    cout << "Length of string: " << strlen(message) << endl;

    return 0;
}
