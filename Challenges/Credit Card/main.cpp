/**
 * Used Luhn Algorithm to validate card numbers:
 * 1. Double every second digit from right to left
 *    If doubled number is 2 digits, split them
 * 2. Add all single digits from step 1
 * 3. Add all odd numbered digits from right to left
 * 4. Sum results from step 2 & 3
 * 5. If step 4 is divisible by 10, # is valid
 * 
 * @author Shaunik Musukula
 * @version 1.0
*/
#include <iostream>
#include "cardfunc.hpp"

int main(int argc, char** argv) {
    std::cout << std::boolalpha << card::validate(std::stol(argv[1])) << std::endl;

    return 0;
}