#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string file_path = "text/readpractice.txt";

    try {
        // read files
        // ofstream is used to write to files, while ifstream reads
        ifstream file_read;

        // stores text
        string read;

        file_read.open(file_path);

        // if file is not found or cannot be opened
        if (!file_read) {
            throw runtime_error("File failed to open.");
        }

        /*
        getline() stops when it detects newline
        while loop goes on until end of doc, instead of newline char
        get() is similar, but reads each char instead of each string
        delimiters are the third param in the function
        they specify where getline() stops
        by default, it is "\n"

        SYNTAX:
        while (getline(file_read, read, '\n')) {
            cout << read;
        }

        while (file_read) {
            char = file_read.get()
            cout << char;
        }
        */
       
       // read buffered content of file
       // cannot sotre value into string/char vars
       cout << file_read.rdbuf() << endl;
        
        // to close file
        file_read.close();

    }
    catch (exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}