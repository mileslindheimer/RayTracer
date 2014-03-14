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
    Vector3f e_minus_c = ray.pos().sub(center);
    float a = dir.dot(dir);
    float b= (2*dir).dot((e_minus_c));
    float c = (e_minus_c).dot(e_minus_c)-pow(radius,2.0);
    
    float discriminant = pow(b,2.0)-(4*a*c);
    
    if(discriminant < 0){
		return false;
	}
	else {
        float discr = pow( dir.dot(e_minus_c) ,2.0) - a*c;
        float t1 = (-dir.dot(e_minus_c) - sqrt( discr ))/a;
        float t2= (-dir.dot(e_minus_c) + sqrt( discr ))/a;
        float t = fmin(t1,t2);
        
        if (t<ray.t_min() || t>ray.t_max()){
            return false;
        }
        *thit = t;
        Vector3f p(center.getX(), center.getY(), center.getZ());
        Vector3f lg = t*ray.dir()+p;
        Point pos(lg[0],lg[1],lg[2]);
        Vector3f n = pos.sub(center);
        *local = LocalGeo(pos, Normal(n[0],n[1],n[2]));

        return true;
    }
}
 
 

bool Sphere::intersectP(Ray& ray){
    return false;
}
