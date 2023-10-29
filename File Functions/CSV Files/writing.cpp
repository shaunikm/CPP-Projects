#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
    string path = "text/languages.csv";
    vector<string> data;

    try {
        ofstream file;
        file.open(path);
        if (!file) {
            throw runtime_error("File failed to open.");
        }

        file << "Greeting,Language" << endl;
        file << "---------------,---------------" << endl;
        file << "Hello,English" << endl;
        file << "Bonjour,French" << endl;
        file << "Hola,Spanish";
        file.close();
        
        ifstream file2;
        string read;
        file2.open(path);
        while (getline(file2, read)) {
            stringstream ss(read);
            while (getline(ss, read, ',')) {
            data.push_back(read);
            }
        }
        for (int e = 0; e < data.size(); e++) {
            if (e % 2 == 0) {
                cout << setw(15) << left << data[e] << '|';
            }
            else {
                cout << data[e] << endl;
            }
        }

        file2.close();
        cout << endl;
    }
    
    catch (exception& e) { //catch error
        cerr << e.what() << endl;
    }

    return 0;
}