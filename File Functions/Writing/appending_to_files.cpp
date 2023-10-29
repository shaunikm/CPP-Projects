#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string path = "text/writepractice.txt";
    try {
        ofstream file_write;
        string text = "this was appened to the file!";

        file_write.open(path, ios::in); // append mode

        if (!file_write) {
            throw runtime_error("File failed to open.");
        }

        file_write << text;
        file_write.close();

        cerr << "Finished writing" << endl;
    }
    catch (exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}