#include <cmath>

/**
 * Finds digits in number
 * 
 * @param number
 * @return digit #
*/
int numLength(long num) {
    return floor(log10(num) + 1);
}

/**
 * Returns the nth digit of number
 * Read left to right, where 1 is leftmost number
 * 
 * @param number
 * @param n nth digit
 * @return digit
*/
int getnthDigit(long num, int n) {
    return (long)(num / pow(10, numLength(num) - n)) % 10;
}

namespace card {
    /**
     * Uses Luhn's algorithm (specified in main.cpp)
     * to validate a credit card number
     * 
     * @param card card number
     * @return true or false depending on if the card is valid or not
    */
    bool validate(const long card) {
        const int length = numLength(card);

        // step 1
        int even_count = 0;

        for (int i = 1; i < length; i+= 2) {
            int even_digit = getnthDigit(card, length - i) * 2;

            // step 2
            even_count += even_digit % 10 + (even_digit - even_digit % 10)/10;
        }

        // step 3
        int odd_count = 0;

        for (int i = 0; i < length; i+= 2) {
            odd_count += getnthDigit(card, length - i);
        }

        // step 4
        int total_count = odd_count + even_count;

        // step 5
        return !(total_count % 10);
    }
}