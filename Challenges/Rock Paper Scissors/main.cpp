/**
 * Rock Paper Scissors Game
 * 
 * @author Shaunik Musukula
 * @version 1.0
*/
#include <iostream>
#include "settings.hpp"
using namespace std;

int main()
{
    int player;
    int computer;

    while (true) {
        player = getUserChoice();
        if (player == -1) {
            break;
        }

        computer = getComputerChoice();

        if (player != 0)
            switch (decideWinner(player, computer)) {
                case 1: cout << GREEN_CHAR << "Player won!" << RESET_COLOR_SCHEME;
                        break;
                case 2: cout << RED_CHAR << "CPU won!" << RESET_COLOR_SCHEME;
                        break;
                case -1:cout << GRAY_CHAR << "Draw!" << RESET_COLOR_SCHEME;
                        break;
            }

        cout << "\n" << endl;
    }

    return 0;
}