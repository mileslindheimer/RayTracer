#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <time.h>
#include <math.h>
#include <Eigen/Dense>
#include "Point.cpp"
using namespace std;

class Ray {

public:
    Ray (Point p, Eigen::Vector3f d, float min, float max) {
        position = p;
        direction = d;
        t_minimum = min;
        t_maximum = max;
    }
    Point pos() {return position;}
    Eigen::Vector3f dir(){return direction;}
    float t_min() {return t_minimum;}
    float t_max() {return t_maximum;}
    void print(){
        cout << 
    }
    
private:
    Point position;
    Eigen::Vector3f direction;
    float t_minimum, t_maximum;
    
};
