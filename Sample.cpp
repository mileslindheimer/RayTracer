#include "Sample.h"

using namespace std;


Sample::Sample () {x=0;y=0;}
    Sample::Sample (float sx, float sy){
        x=sx;
        y=sy;
    }
    float Sample::getX(void) {
        return x;
    }
    float Sample::getY(void) {
        return y;
    }
    void Sample::setX(float newx) {
        x=newx;
    }
    void Sample::setY(float newy) {
        y=newy;
    }

    bool Sample::equals(Sample* p) {
        return x == p->getX() && y == p->getY();
    }