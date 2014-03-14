#include "GeometricPrimitive.h"




GeometricPrimitive::GeometricPrimitive(Shape* s, Matrix4f ob2worldinput, Material* m){
	this->shape = s;
    this->material=m;
	objToWorld.setMatrix(ob2worldinput);
	worldToObj.setMatrix(ob2worldinput.inverse());
    worldToObj.setMinvt(ob2worldinput.transpose());
	objToWorld.setMinvt(ob2worldinput.inverse().transpose());
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

 


