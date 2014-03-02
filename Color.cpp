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

class Color {

public:
    Color () {r=0;g=0;b=0;}
    Color (float red, float green, float blue){
        r=red;
        g=green;
        b=blue;
    }
    float getR(void) {
        return r;
    }
    float getG(void) {
        return g;
    }
    float getB(void) {
        return b;
    }
    void setR(float newr) {
        r=newr;
    }
    void setG(float newg) {
        g=newg;
    }
    void setB(float newb) {
        b=newb;
    }
    void add(Color c) {
        r+=c.r;
        g+=c.g;
        b+=c.b;
    }
    void sub(Color c) {
        r-=c.r;
        g-=c.g;
        b-=c.b;
    }
    void mul(float s) {
        r = r*s;
        g = g*s;
        b = b*s;
    }
    // not sure how we want to handle division by 0 scalar
    void div(float s) {
        if (s != 0) {
            r = r/s;
            g = g/s;
            b = b/s;
        } else
            cout << "Error: Division by 0 scalar \n";
    }

    void print(void) {
        cout << "r = " << r << " g = " << g << " b = " << b << "\n";
    }
    bool equals(Color* p) {
        return r == p->getR() && g == p->getG() && b == p->getB();
    }
private:
    float r,g,b;
};
