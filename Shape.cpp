#include "Shape.h"

Sphere::Sphere(float centerx, float centery, float centerz,float radius,float tmin, float tmax){
    this->radius=radius;
    this->center=Vector3f(centerx,centery,centerz);
    this->tmax=tmax;
    this->tmin=tmin;
}




bool Sphere::intersect(Ray &ray, float *thit, LocalGeo *local){
    /*If the discriminant is positive, there are two solutions: one solution where
     the ray enters the sphere and one where it leaves. If the discriminant is zero, the
     ray grazes the sphere touching it at exactly one point.*/
    Vector3f pos;
    pos << ray.pos().getX(), ray.pos().getY(), ray.pos().getZ();
    Vector3f dir = ray.dir();
    float a = dir.dot(dir);
    float b= (2*ray.dir()).dot((pos - center));
    float c = (pos-center).dot((pos-center))-pow(radius,2.0);
    
    float discriminant = pow(b,2.0)-(4*a*c);
    if(discriminant < 0){
		return false;
	}
	else {
        return true; //do something else, calculate t min and t max
    }
}
 
 

bool Sphere::intersectP(Ray &ray){
    return false;
}
