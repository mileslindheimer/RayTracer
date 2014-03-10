#include "Camera.h"

/*The :: operator is called the scope-resolution operator and does just that, it resolves scope. So, by prefixing a type-name with this, it tells your compiler to look in the global namespace for the type.
 - from Stack Overflow */


Camera::Camera(Point eye_input, int width, int height){
	eye = eye_input;
	plane_w=width;
    plane_h=height;
    
}

void Camera::generateRay(Sample& sample, Ray* ray){
    double xtemp, ytemp;
	float  u,v,w;
    
    /*http://www.unknownroad.com/rtfm/graphics/rt_eyerays.html*/
	float fovx = M_PI_4;
	float fovy = (plane_h/plane_w) * fovx;
    u=(((2*sample.getX()-plane_w)/plane_w)*tan(fovx));
    v=(((2*sample.getY()-plane_h)/plane_h)*tan(fovy));
    w=-1;
    Vector3f dir(u,v,w);
    ray->setPos(eye);
	ray->setDir(dir);
//	ray->t_minimum = 0.0; // fix these later
//	ray->t_maximum = 0.0;
}