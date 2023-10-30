#include <iostream>
using namespace std;

class Student {
    public:
        string first_name;
        string last_name;

    Student(string first="Jason", string last="Doe") { // constructor w/default params
        first_name = first;
        last_name = last;
    }

    string getName() {
        return first_name + ' ' + last_name;
    }
}; // don't forget semicolon

int main() {
    Student john("John");
    Student jane = john; // copying an object
    jane.first_name = "Jane";

    cout << john.getName() << endl;
    cout << jane.getName() << endl;

    return 0;
}