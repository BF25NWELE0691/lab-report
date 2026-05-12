#include <iostream>
using namespace std;

int main()
{
    int num = 25;        
    int *ptr;           
    ptr = &num;          
    cout << "Value of num: " << num << endl;
    cout << "Value using pointer: " << *ptr << endl;
cout<<"the address of num :"<<&num<<endl;
    return 0;
}
