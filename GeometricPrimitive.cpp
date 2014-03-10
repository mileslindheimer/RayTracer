#include "GeometricPrimitive.h"

GeometricPrimitive::GeometricPrimitive(){
}


bool GeometricPrimitive::intersect(Ray& ray, float* thit, Intersection* in)  {
    Ray oray = worldToObj.mul(ray);
    LocalGeo olocal;
    if (!shape->intersect(oray, thit, &olocal))  return false;
    in->setPrimitive(*this);
    in->setLocalGeo(objToWorld.mul(olocal));
    return true;
}

bool GeometricPrimitive::intersectP(Ray& ray) {
    Ray oray = worldToObj.mul(ray);
    return shape->intersectP(oray);
}

void GeometricPrimitive::getBRDF(LocalGeo& local, BRDF* brdf) {
    material->getBRDF(local, brdf);
}

//bool GeometricPrimitive::LocalGeo() {
//        return normal;
//    }

