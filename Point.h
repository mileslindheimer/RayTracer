

#ifndef Point_H
#define Point_H

//#include <cstdlib>
#include <iostream>
#include <math.h>
#include <Eigen/Dense>

class Point {
public:
    Point(void);
    Point (float px, float py, float pz);
    float getX(void);
    float getY(void);
    float getZ(void);
    void setX(float newx);
    void setY(float newy);
    void setZ(float newz);
    void add(Eigen::Vector3f v);
    void sub(Eigen::Vector3f v);
    Eigen::Vector3f sub(Point* p);
    void print(void);
    bool equals(Point* p);

private:
    float x,y,z;
};

#endif /* Point_H */
