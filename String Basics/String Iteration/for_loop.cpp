#include <iostream>

int main() {
    std::string my_string = "Today is a good day";

    // enhanced for loop
    for (char i : my_string)
        std::cout << i << ' ';
    
    std::cout << std::endl;
    
    // basic for loop
    for (int i = 0; i < my_string.length(); i++)
        std::cout << my_string.at(i) << ' ';

    std::cout << std::endl;
    
    return 0;
}