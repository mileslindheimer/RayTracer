#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <time.h>
#include <math.h>
using namespace std;

class Sample {

public:
    Sample () {x=0;y=0;}
    Sample (float sx, float sy){
        x=sx;
        y=sy;
    }
    float getX(void) {
        return x;
    }
    float getY(void) {
        return y;
    }
    void setX(float newx) {
        x=newx;
    }
    void setY(float newy) {
        y=newy;
    }

    bool equals(Sample* p) {
        return x == p->getX() && y == p->getY();
    }
private:
    float x,y;
};
