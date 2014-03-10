#include "Shape.h"

void Shape::createSphere(float centerx, float centery, float centerz,float radius,float tmin, float tmax){
    this->radius=radius;
    this->isCircle=true;
    this->centervec=Vector3f(centerx,centery,centerz);
    this->tmax=tmax;
    this->tmin=tmin;
}

Shape::isCircle()
{ return this.isCircle}

Shape::isTriangle() {
    return this.isTriangle
}

/*http://www.siggraph.org/education/materials/HyperGraph/raytrace/rtinter1.html
 1.compute A, B, C: 7 (*), 8 (+/-)
 2.compute discriminant: 2 (*), 1 compare
 3.compute t0 and determine if positive: 1 (-), 1 (*) /(/), 1 sqrt, 1 compare
 4.possibly compute t1 and determine if positive: 1 (-), 1 (*), 1 compare
 5.compute intersection point: 3 (*), 3 (+)
 6.compute SN: 3 (-), 3 (*)
 7.Total worst case = 17 (+/-), 17 (*), 1 sqrt, 3 compares.
 8.Best case = steps 1, 2 = 9 (+/-), 9 (*), 1 compare.
 9.Best case hit: 1, 2, 3, 5, 6 --> 16 (*), 16 (+/-), 1 sqrt, 3 compare.
 */

bool Sphere::intersectP(Ray &ray){
    /*If the discriminant is positive, there are two solutions: one solution where
     the ray enters the sphere and one where it leaves. If the discriminant is zero, the
     ray grazes the sphere touching it at exactly one point.*/
    Point raypos=Ray.pos();
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
 