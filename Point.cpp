#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <time.h>
#include <math.h>
#include <Eigen/Dense>
using namespace std;

class Point {

public:
    Point () {x=0;y=0;z=0;}
    Point (float px, float py, float pz){
        x=px;
        y=py;
        z=pz;
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
    void setX(float newx) {
        x=newx;
    }
    void setY(float newy) {
        y=newy;
    }
    void setZ(float newz) {
        z=newz;
    }
    void add(Eigen::Vector3f v) {
        x+=v[0];
        y+=v[1];
        z+=v[2];
    }
    void sub(Eigen::Vector3f v) {
        x-=v[0];
        y-=v[1];
        z-=v[2];
    }
    Eigen::Vector3f sub(Point* p) {
        Eigen::Vector3f v(3);
        v[0] = x-p->x;
        v[1] = y-p->y;
        v[2] = z-p->z;
        return v;
    }

    void print(void) {
        cout << "(" << x << ", " << y << ", " << z << ")\n";
    }
    bool equals(Point* p) {
        return x == p->getX() && y == p->getY() && z == p->getZ();
    }
private:
    float x,y,z;
};
