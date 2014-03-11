

#ifndef GeometricPrimitive_H
#define GeometricPrimitive_H

//#include <cstdlib>
#include <iostream>
#include <math.h>
#include "LocalGeo.h"
#include "Ray.h"
#include "BRDF.h"
#include "Intersection.h"
#include "Transformation.h"
#include "Shape.h"
#include "Material.h"

class GeometricPrimitive : public Primitive {
    
public:
    GeometricPrimitive();
    GeometricPrimitive(Shape* shape){}
    bool intersect(Ray& ray, float* thit, Intersection* inter);
    
    bool intersectP(Ray& ray);
    void getBRDF(LocalGeo& local, BRDF* brdf);
private:
    Transformation objToWorld, worldToObj;
    Sphere* shape;
    Material* material;

};

#endif /* GeometricPrimitive_H */
