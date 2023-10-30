#include <iostream>
using namespace std;

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3,
          thursday = 4, friday = 5, saturday = 6};

enum Flavor {vanilla, chocolate, strawberry}; // implicitly assigning 0 to first, 1 to second, ...

int main() {
    Day today = monday;
    Flavor ice_cream = chocolate;

    switch (today) {
        case 0: cout << "Today is Sunday!" << endl;
                break;
        case 1: cout << "Today is Monday!" << endl;
                break;
        case 2: cout << "Today is Tuesday!" << endl;
                break;
        case 3: cout << "Today is Wednesday!" << endl;
                break;
        case 4: cout << "Today is Thursday!" << endl;
                break;
        case 5: cout << "Today is Friday!" << endl;
                break;
        case 6: cout << "Today is Saturday!" << endl;
                break;
    }

    switch (ice_cream) {
        case 0: cout << "I have vanilla ice cream!" << endl;
                break;
        case 1: cout << "I have chocolate ice cream!" << endl;
                break;
        case 2: cout << "I have strawberry ice cream!" << endl;
                break;
    }

    return 0;
}