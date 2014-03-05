

#ifndef ____Ray_H
#define ____Ray_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>
#include <Eigen/Dense>
#include "Point.h"

class Ray {
public:
    Ray (Point, Eigen::Vector3f, float, float);
    Point pos(void);
    Eigen::Vector3f dir(void);
    void setPos(Point);
    void setDir(Eigen::Vector3f);
    float t_min(void);
    float t_max(void);

private:
    Point position;
    Eigen::Vector3f direction;
    float t_minimum, t_maximum;
};

#endif /* Ray_H */
