#include "GeometricPrimitive.h"



GeometricPrimitive::GeometricPrimitive(Shape* s, Transformation objToWorld){
	shape = s;
	objToWorld.matrix = objToWorld;
	worldToObj.matrix = objToWorld.matrix.inverse();
	objToWorld.minvt = objToWorld.matrix.inverse().transpose();
	worldToObj.minvt = objToWorld.matrix.transpose();

}


GeometricPrimitive::GeometricPrimitive(Shape* s, Transformation OtoW, Material* m){
	shape = s;
	objToWorld.matrix = OtoW;
	worldToObj.matrix = OtoW.matrix.inverse();
	material = m;
}


bool GeometricPrimitive::intersect(Ray& ray, float* thit, Intersection* in)  {
//    Ray oray = worldToObj.mul(ray);
    LocalGeo olocal;
    if (!shape->intersect(ray, thit, &olocal))  return false;
    Intersection inter(olocal, *this);
    *in = inter;
 
    return true;
}

bool GeometricPrimitive::intersectP(Ray& ray) {
    Ray oray = worldToObj.mul(ray);
    return shape->intersectP(oray);
}

 


