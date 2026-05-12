#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    string address;
};

int main() {
    // Initialization of person1
    Person person1 = {"Ali", 20, "Frankfurt"};

    // Display values using dot operator
    cout << "Person Details:" << endl;
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Address: " << person1.address << endl;

    return 0;
}
