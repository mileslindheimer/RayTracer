#include "Ray.h"

using namespace std;


    Ray::Ray (Point p, Eigen::Vector3f d, float min, float max) {
        position = p;
        direction = d;
        t_minimum = min;
        t_maximum = max;
    }
    Point Ray::pos() {
        return position;
    }
    Eigen::Vector3f Ray::dir(){
        return direction;
    }
    void Ray::setPos(Point p) {
        position = p;
    }
    void Ray::setDir(Eigen::Vector3f d) {
        direction = d;
    }
    float Ray::t_min() {
        return t_minimum;
    }
    float Ray::t_max() {
        return t_maximum;
    }
    

