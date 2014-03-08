Ï

#ifndef Shape_H
#define Shape_H

//#include <cstdlib>
#include <iostream>
#include <math.h>
#include "LocalGeo.h"
#include "Ray.h"


class Shape {
    
public:
    virtual bool intersect(Ray& ray, float* thit, LocalGeo* local);
    virtual bool intersectP(Ray& ray);


};

#endif /* Shape_H */
