#include "Shape.h"

Sphere::Sphere(float centerx, float centery, float centerz,float radius,float tmin, float tmax){
    this->radius=radius;
    this->center=Point(centerx,centery,centerz);
    this->tmax=tmax;
    this->tmin=tmin;
}




bool Sphere::intersectP(Ray &ray){
    float a, b, c,t1, t2, discriminant;
    Vector3f dir = ray.dir();
    Vector3f e_minus_c = ray.pos().sub(center);

    a = dir.dot(dir);
    b= (2*dir).dot((e_minus_c));
    c = (e_minus_c).dot(e_minus_c)-pow(radius,2.0);
    
    discriminant = pow(b,2.0)-(4*a*c);
    
	if(discriminant < 0){
		return false;
	}
	else{
		float sqrtdisc = sqrt(discriminant);
		t1 = (-b + sqrtdisc) / (2 * a);
		t2 = (-b - sqrtdisc) / (2 * a);
		
		if((t1 > ray.t_min() && t1 < ray.t_max()) ||
           (t2 > ray.t_min() && t2 < ray.t_max())){
			return true;
		}
		else{
			return false;
		}
	}
}



bool Sphere::intersect(Ray& ray, float *thit, LocalGeo *local){
    /*If the discriminant is positive, there are two solutions: one solution where
     the ray enters the sphere and one where it leaves. If the discriminant is zero, the
     ray grazes the sphere touching it at exactly one point.*/
    float a, b, c, discriminant;
    Vector3f dir = ray.dir();
    Vector3f e_minus_c = ray.pos().sub(center);
    a = dir.dot(dir);
    b= (2*dir).dot((e_minus_c));
    c = (e_minus_c).dot(e_minus_c)-pow(radius,2.0);
    
    discriminant = pow(b,2.0)-(4*a*c);
    
    if(discriminant < 0){
		return false;
	}
	else  {
        float sqrtdisc = pow( dir.dot(e_minus_c) ,2.0) - a*c;
        float t1 = (-dir.dot(e_minus_c) - sqrt( sqrtdisc ))/a;
        float t2= (-dir.dot(e_minus_c) + sqrt( sqrtdisc ))/a;
        float t = fmin(t1,t2);
        
        if (t<ray.t_min() || t>ray.t_max()){
            return false;
        }
         /*
        Vector3f p(center.getX(), center.getY(), center.getZ());
        Vector3f lg = t*ray.dir()+p;
        Point pos(lg[0],lg[1],lg[2]);
        Vector3f n = pos.sub(center);
        *local = LocalGeo(pos, Normal(n[0],n[1],n[2]));
        */
        

        
        else {
            *thit=t;
            Point lpos=ray.pos();
            lpos.add((t*ray.dir()));
            local->setPos(lpos);
            local->setNormal(lpos.sub(center)); //normal will be vector3f 
        }
        return true;
    }
}







