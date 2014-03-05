

#ifndef ____Point__
#define ____Point__

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <time.h>
#include <math.h>
#include <Eigen/Dense>

class Point {
public:
    Point(void);
    Point (float, float, float);
    float getX(void);
    float getY(void);
    float getZ(void);
    void setX(float);
    void setY(float);
    void setZ(float);
    void add(Eigen::Vector3f);
    void sub(Eigen::Vector3f);
    Eigen::Vector3f sub(Point* p);
    void print(void);
    bool equals(Point* p);

private:
    float x,y,z;
};

#endif /* defined(____Point__) */
