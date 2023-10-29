#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string path = "text/writepractice.txt";
    try {
        ofstream file_write;
        file_write.open(path); // default second param is ios::out, while replaces all text

        if (!file_write) {
            throw runtime_error("File failed to open.");
        }

        file_write << "this is a test!" << endl;
        file_write.close();

        cerr << "Finished writing" << endl;
    }
    catch (exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}