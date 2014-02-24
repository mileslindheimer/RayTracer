#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <time.h>
#include <math.h>
using namespace std;

class Vector {
    public:
    float x,y,z;
    Vector (float v1, float v2, float v3){
        x=v1;
        y=v2;
        z=v3;
    }
    void add(Vector v) {
        x+=v.x;
        y+=v.y;
        z+=v.z;
    }
    void sub(Vector v){
        x-=v.x;
        y-=v.y;
        z-=v.z;
    }
    void mul(float s){
        x=x*s;
        y=y*s;
        z=z*s;
    }
    void div(float s){
        x=x/s;
        y=y/s;
        z=z/s;
    }
    void normalize(void) {
        float d = sqrt(x*x + y*y + z*z);
        x = x/d;
        y = y/d;
        z = z/d; 
    }
    void toString (void) {
        printf("<%f,%f,%f>\n", x,y,z);
    }
};
Vector addv(Vector v1, Vector v2){
    Vector v(v1.x+v2.x, v1.y+v2.y, v1.z+v2.z);
    return v;
}
Vector subv(Vector v1, Vector v2){
    Vector v(v1.x-v2.x, v1.y-v2.y, v1.z-v2.z);
    return v;
}

float dot(Vector v1, Vector v2){
    return v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;
}