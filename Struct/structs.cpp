#include <iostream>
using namespace std;

struct student {
    string name;
    int age;
    double gpa;
    bool enrolled = true; // default value
}; // remember to end struct with ';'

int main() {
    student student1;
    student1.name = "John Doe";
    student1.gpa = 3.92;
    student1.age = 15;

    student student2;
    student2.name = "Jane Doe";
    student2.gpa = 4.23;
    student2.age = 17;

    cout << student1.name << endl;
    cout << student1.gpa << endl;
    cout << student1.age << endl;

    cout << endl;

    cout << student2.name << endl;
    cout << student2.gpa << endl;
    cout << student2.age << endl;

    return 0;
}