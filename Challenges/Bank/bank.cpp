/**
 * Create a simple baking system run from the terminal,
 * that can desposite money, withdraw money, and show a balance.
 * 
 * @author Shaunik Musukula
 * @version 1.0
*/
#include <iostream>
#include "settings.hpp"
using namespace std;

int main() {
    string menu[5] = {
        "************** WELCOME TO THE BANK **************",
        "1. Show Balance",
        "2. Deposit Money",
        "3. Withdraw Money",
        "4. Exit Bank"
    };
    int choice;

    while (choice != 4) {
        for (string text : menu) {
            cout << text << endl;
        }

        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1: showBalance(bal);
                    break;
            case 2: bal += deposit();
                    cout << "You balance is now " << to_string(bal) << "$." << endl;
                    break;
            case 3: bal -= withdraw(bal);
                    break;
                    cout << "You balance is now " << to_string(bal) << "$." << endl;
            case 4: break;
            default: cout << "Invalid Option!" << endl;
        }

        cout << "*************************************************\n" << endl;
    }

    return 0;
}
