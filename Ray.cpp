#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <time.h>
#include <math.h>
#include <Eigen/Dense>
#include "Point.h"
using namespace std;

class Ray {

public:
    Ray (Point p, Eigen::Vector3f d, float min, float max) {
        position = p;
        direction = d;
        t_minimum = min;
        t_maximum = max;
    }
    Point pos() {
        return position;
    }
    Eigen::Vector3f dir(){
        return direction;
    }
    void setPos(Point p) {
        position = p;
    }
    void setDir(Eigen::Vector3f d) {
        direction = d;
    }
    float t_min() {
        return t_minimum;
    }
    float t_max() {
        return t_maximum;
    }
    
    
private:
    Point position;
    Eigen::Vector3f direction;
    float t_minimum, t_maximum;
    
};
