
#include "OBJParser.h"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include "Color.h"

#define width 100
#define height 100

using namespace std;

class OBJParser {
    
};

unsigned char foo[] = {(unsigned char)1,(unsigned char)0,(unsigned char)0};

int main(int argc, char** args){
    unsigned char r,g,b;
    Color image[width][height];
    FILE *output = fopen("output.ppm", "wb");
    fprintf(output, "P6\n%d %d\n255\n", width, height);
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            r = (unsigned char) j%255;
            g = (unsigned char) i%255;
            b = (unsigned char) j%255;
            fprintf(output, "%c%c%c", r,g,b );
        }
    }
    fclose(output);
    
    
    
//    char* token = 0;
//    //start writing to trace file
//    ofstream trace("tmp/trace.txt");
//    for (int i=1; i<argc; i++) {
//        ifstream file;
//        file.open((string) "obj/" + (string) args[i]);
//        if (!file.good()){
//            cout << "bad file\n";
//            trace << "bad file\n";
//        }
//        else {
//            trace << "opening " << args[i] << "\n";
//            char buffer[30];
//            string token;
//            while (file >> token) {
//                //token = strtok(buffer, " ");
//                cout << token << "\n";
//                trace << token << "\n";
//            }
//            file.close();
//        }
//    }
//    //close trace file
//    trace << "end trace\n";
//    trace.close();
    return 0;
}