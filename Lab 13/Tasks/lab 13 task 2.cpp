#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    char grade;
};

int main() {
    // Initialize student1
    Student student1 = {"Sara", 19, 'A'};

    // Display values
    cout << "Student Details:" << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Grade: " << student1.grade << endl;

    return 0;
}