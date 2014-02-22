
#include "OBJParser.h"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class OBJParser {
    
};

void log(char* c) {}


int main(int argc, char** args){
    char* a = 0;
    ofstream trace("tmp/trace.txt");
    if (argc > 1) {
        ifstream file;
        file.open((string) "obj/" + (string) args[1]);
        if (!file.good()){
            cout << "bad file\n";
            trace << "bad file\n";
        }
        else {
            trace << "opened successfully \n";
            while (!file.eof()) {
                char buffer[10];
                file.getline(buffer, 10);
                a = strtok(buffer, " ");
                cout << a << "\n";
                trace << a << "\n";
            }
        }
    } else {
        cout << "no file\n";
        trace << "no file\n";
    }
    trace << "closing file\n";
    trace.close();
    return 0;
}