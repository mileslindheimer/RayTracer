#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <time.h>
#include <math.h>
//#include <Eigen/Dense>
using namespace std;

class Point {

public:
    Point (float v1, float v2, float v3){
        x=v1;
        y=v2;
        z=v3;
    }
    float getX(void) {
        return x;
    }
    float getY(void) {
        return y;
    }
    float getZ(void) {
        return z;
    }
//    void add(Eigen::Vector3f v) {
//        x+=v(0);
//        y+=v(1);
//        z+=v(2);
//    }
//    Eigen::Vector3f add(Point p) {
//        Eigen::Vector3f v(3);
//        v(0) = x+p.x;
//        v(1) = y+p.y;
//        v(2) = z+p.z;
//        return v;
//    }

    void toString (void) {
        printf("<%f,%f,%f>\n", x,y,z);
    }
private:
    float x,y,z;
};
