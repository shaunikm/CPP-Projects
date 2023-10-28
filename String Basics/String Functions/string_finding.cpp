#include <iostream>

int main() {
    std::string str1 = "The brown dog";
    std::string str2 = "wornb";

    // search for ANY characters in substring
    std::cout << str1.find_first_of(str2) << std::endl;

    // search for all of substring at once
    std::cout << str1.find(str2) << std::endl;

    return 0;
}