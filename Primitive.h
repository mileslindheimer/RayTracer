

#ifndef Primitive_H
#define Primitive_H

//#include <cstdlib>
#include <iostream>
#include <math.h>
#include "LocalGeo.h"
#include "Ray.h"
#include "BRDF.h"
#include "Intersection.h"

class Intersection;

class Primitive {
    
public:
    Primitive(){}
    bool intersect(){return true;}
    bool intersect(Ray& ray, float* thit, Intersection* inter){
        return true;
    }
    bool intersectP(Ray& ray){
        return false;
    }
    void getBRDF(LocalGeo& local, BRDF* brdf){}


};

#endif /* Primitive_H */
