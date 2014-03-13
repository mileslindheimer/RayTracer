#include "Shape.h"

Sphere::Sphere(float centerx, float centery, float centerz,float radius,float tmin, float tmax){
    this->radius=radius;
    this->center=Point(centerx,centery,centerz);
    this->tmax=tmax;
    this->tmin=tmin;
}




bool Sphere::intersect(Ray& ray, float *thit, LocalGeo *local){
    /*If the discriminant is positive, there are two solutions: one solution where
     the ray enters the sphere and one where it leaves. If the discriminant is zero, the
     ray grazes the sphere touching it at exactly one point.*/
    Vector3f dir = ray.dir();
    float a = dir.dot(dir);
    float b= (2*dir).dot((ray.pos().sub(center)));
    float c = (ray.pos().sub(center)).dot((ray.pos().sub(center)))-pow(radius,2.0);
    
    float discriminant = pow(b,2.0)-(4*a*c);
    if(discriminant < 0){
		return false;
	}
	else {
        // might only need to calculate one t
        float t1 = -ray.dir().dot(ray.pos().sub(center)) - sqrt(discriminant);
        float t2= -ray.dir().dot(ray.pos().sub(center)) + sqrt(discriminant);
        float tmax = fmin(t1,t2);
        thit = &t2;
        return true; //do something else
    }
}
 
 

bool Sphere::intersectP(Ray& ray){
    return false;
}
