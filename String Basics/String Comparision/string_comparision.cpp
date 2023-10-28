#include <iostream>
#include "strings.h"

int main() {

    // strings are equal
    std::cout << std::boolalpha << (string1 == string2) << std::endl;

    // strings are inequal
    std::cout << std::boolalpha << (string1 != string3) << std::endl;

    // string1 comes first lexicographically
    if (string2.compare(string3) < 0) {
        std::cout << "string2 comes first" << std::endl;
    }

    // string2 comes first lexicographically
    else if (string2.compare(string3) > 0) {
        std::cout << "string3 comes first" << std::endl;
    }

    // strings are equal
    else if (string2.compare(string3) == 0) {
        std::cout << "the strings are equal" << std::endl;
    }

    return 0;
}