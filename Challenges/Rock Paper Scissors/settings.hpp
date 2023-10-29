#include <utility>
using namespace std;

#define GREEN_CHAR "\033[92m"
#define YELLOW_CHAR "\033[33m"
#define GRAY_CHAR "\033[90m"
#define RED_CHAR "\033[31m"
#define RESET_COLOR_SCHEME "\033[m"

const pair<int, int> win_key[3] = {
    make_pair(1, 3),
    make_pair(2, 1),
    make_pair(3, 2)
};

const string choices[5] = {
    "********************",
    "1. Rock",
    "2. Paper",
    "3. Scissors",
    "4. Exit"
};

int getUserChoice()
{
    int choice;

    for (string line : choices) {
        cout << line << endl;
    }

    cout << "Enter a choice: ";
    cin >> choice;

    if (choice >= 1 && choice <= 3) {
        return choice;
    }
    else if (choice == 4) {
        return -1;
    }
    else {
        cout << YELLOW_CHAR << "Invalid Choice!" << RESET_COLOR_SCHEME << endl;
    }

    return 0;
}

int getComputerChoice()
{
    srand(time(NULL));

    int choice = (rand() % 3) + 1;

    return choice;
}

int decideWinner(int playerChoice, int computerChoice)
{
    if (computerChoice == win_key[playerChoice - 1].second)
        return 1;
    else if (playerChoice == win_key[computerChoice - 1].second)
        return 2;
    else
        return -1;
}