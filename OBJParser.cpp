
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
    char* token = 0;
    //start writing to trace file
    ofstream trace("tmp/trace.txt");
    for (int i=1; i<argc; i++) {
        ifstream file;
        file.open((string) "obj/" + (string) args[i]);
        if (!file.good()){
            cout << "bad file\n";
            trace << "bad file\n";
        }
        else {
            trace << "opening " << args[i] << "\n";
            char buffer[30];
            string token;
            while (file >> token) {
                //token = strtok(buffer, " ");
                cout << token << "\n";
                trace << token << "\n";
            }
            file.close();
        }
    }
    //close trace file
    trace << "end trace\n";
    trace.close();
    return 0;
}