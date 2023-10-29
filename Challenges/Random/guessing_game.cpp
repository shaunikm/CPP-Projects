/**
 * Simple terminal-based guessing game.
 * 
 * @author Shaunik Musukula
 * @version 1.0
*/

#include <iostream>
using namespace std;

int main()
{
    // rand seed and number
    srand(time(NULL));
    int num = (rand() % 10) + 1;

    // input guess
    string guess;
    cout << "Choose a number from 1-10: ";
    cin >> guess;
    cout << endl;

    // guessed correct or not
    if (stoi(guess) == num) {
        cout << "You guessed correctly!" << endl;
    }
    else {
        cout << "You guessed wrong :(\n"
            << "Your Guess: " << guess << endl
            << "Actual Number: " << num << endl;
    }

    return 0;
}