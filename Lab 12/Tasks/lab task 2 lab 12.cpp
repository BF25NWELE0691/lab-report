#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr;

    ptr = numbers;   

    cout << "Array elements using pointer arithmetic:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << endl;
    }

    return 0;
}