

#ifndef Transformation_H
#define Transformation_H

#include <iostream>
#include <math.h>
#include "Eigen/Dense"
#include "Ray.h"
#include "LocalGeo.h"

#define Matrix4f Eigen::Matrix4f


class Transformation {
    
public:
    Transformation(){}
    Transformation(Matrix4f matrix);
    
    Matrix4f getM(){return m;}
    Matrix4f getMinvt(){return minvt;}
    
    //need to implement these
    Ray mul(Ray ray){return ray;}
    LocalGeo mul(LocalGeo local){return local;}

private:
    Matrix4f m, minvt;
    
};


#endif /* Transformation_H */
