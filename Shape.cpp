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
    Point e=Ray.pos();
    float A=
    float discriminant = //something
    
    if(discrim < 0){
		return false;
	}
    
	else{
        return false; //do something else
        }
}

bool Sphere::intersect(Ray &ray, double *thit, LocalGeo *local){
	
}
 