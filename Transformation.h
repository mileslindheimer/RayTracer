

#ifndef Transformation_H
#define Transformation_H

#include <iostream>
#include <math.h>
#include "Eigen/Dense"
#include "Ray.h"
#include "LocalGeo.h"

#define Matrix3f Eigen::Matrix3f


class Transformation {
    
public:
    Transformation(){}
    Ray mul(Ray ray){return ray;}
    LocalGeo mul(LocalGeo local){return local;}

private:
    Matrix3f m, minvt;
    
};


#endif /* Transformation_H */
