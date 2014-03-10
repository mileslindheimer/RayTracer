#include "Shape.h"

void Sphere::createSphere(float centerx, float centery, float centerz,float radius,float tmin, float tmax){
    this->radius=radius;
    this->centervec=Vector3f(centerx,centery,centerz);
    this->tmax=tmax;
    this->tmin=tmin;
}




bool Sphere::intersectP(Ray &ray){
    /*If the discriminant is positive, there are two solutions: one solution where
     the ray enters the sphere and one where it leaves. If the discriminant is zero, the
     ray grazes the sphere touching it at exactly one point.*/
    Vector3f pos=ray.posvec();
    Vector3f dir = ray.dir();
    float center = this->center;
    float radius = this->radius;
    float a = dir * dir;
    float b= 2 * ray.dir() * (ray.posvec() - center);
    float c = (ray.posvec()-center) * ((ray.posvec()-center)-pow(radius,2.0));
    
    
    float discriminant = pow(b,2.0)-(4*a*c);
    
    
    if(discriminant < 0){
		return false;
	}
    
	else{
        return false; //do something else, calculate t min and t max
        }
}
 
 

bool Sphere::intersect(Ray &ray, double *thit, LocalGeo *local){
	
}
