/**
 * This is an example of C++ documentation.
 * In addition, this shows the basics of functions.
 * 
 * @author Shaunik Musukula
 * @version 1.0
*/
#include <iostream>

/**
 * This function finds the factorial of a number.
 * 
 * @param n
 * @return n!
*/
long Factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * Factorial(n - 1);
}


// argc is num of arguments passed
// argv is array
int main (int argc, char** argv) {
    int input_num = std::stoi(argv[1]);

    std::cout << Factorial(input_num) << std::endl;

    return 0;
}