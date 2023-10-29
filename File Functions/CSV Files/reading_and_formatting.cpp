#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
    string path = "text/baseball.csv";
    vector<string> data;

    try {
        ifstream file;
        string read;
        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open.");
        }
        while (getline(file, read)) {
            stringstream ss(read);
            while (getline(ss, read, ',')) {
            data.push_back(read);
            }
        }
        file.close();

        // setw() sets the padding
        for (int i = 0; i < data.size(); i++) {
            if (i % 3 == 0) {
                cout << setw(20) << left << data.at(i) << '|';
            }
            else if (i % 3 == 1) {
                cout << setw(15) << left << data.at(i) << '|';
            }
            else {
                cout << setw(14) << left << data.at(i) << endl;
            }
        }
        cout << endl;
    }
    
    catch (exception& e) {
    cerr << e.what() << endl;
    }

    return 0;
}