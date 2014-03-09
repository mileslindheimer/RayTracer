#include "OBJParser.h"
#include "Eigen/Dense"
#include "testsphere.h"
#define Vector3f Eigen::Vector3f
#define cout std::cout

#define width 500
#define height 500

using namespace std;


unsigned char foo[] = {(unsigned char)1,(unsigned char)0,(unsigned char)0};

int main(int argc, char** args){
    Film film (100, 100);
    Color c1(0,0,0);
    Sample s1(5,30);
    Point p(1,1,0);
    Vector3f v(0,0,-1);
    Ray ray(p, v, 1, 5);
    RayTracer rayTracer;
    rayTracer.trace(ray, 1, &c1);
    cout << "here\n";
    film.commit(s1, c1);
    film.writeImage();
//    unsigned char r,g,b;
//    Color image[width][height];
//    FILE *output = fopen("output.ppm", "wb");
//    fprintf(output, "P6\n%d %d\n255\n", width, height);
//    for (int i = 0; i < width; i++) {
//        for (int j = 0; j < height; j++) {
//            r = (unsigned char) 255*((float)j/(2*i));
//            g = (unsigned char) 255*0;
//            b = (unsigned char) 255*(float)i/(2*j);
//            fprintf(output, "%c%c%c", r,g,b );
//        }
//    }
//    fclose(output);
    
    
    
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