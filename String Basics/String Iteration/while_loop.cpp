#include <iostream>

int main() {
    std::string my_string = "Today is a good day";
    int i = 0;

    while (i < my_string.length()) {
        std::cout << my_string.at(i) << ' ';
        i++;
    }

    std::cout << std::endl;

    return 0;
}