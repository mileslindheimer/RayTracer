#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <math.h>
#include <vector>
use namespace Eigen

/*The :: operator is called the scope-resolution operator and does just that, it resolves scope. So, by prefixing a type-name with this, it tells your compiler to look in the global namespace for the type.
 - from Stack Overflow */

//4d vectors 

Camera::Camera(Point eye_input, int width, int height){
	Point eye = eye_input;
	int plane_w=width;
    int plane_h=height;
    
}

void Camera::generateRay(Sample& sample, Ray* ray){
    double xtemp, ytemp;
	vector3f  u,v,w;
    
    /*http://www.unknownroad.com/rtfm/graphics/rt_eyerays.html*/
	float fovx = M_PI_4;
	float fovy = (plane_h/plane_w) * fovx;
    u=(((2*sample.getx()-plane_w)/plane_w)*tan(fovx));
    v=(((2*sample.gety()-plane_h)/plane_h)*tan(fovy));
    w=-1;
    ray->position = eye;
	ray->direction = ray;
	ray->t_minimum = 0.0; // fix these later
	ray->t_maximum = 0.0;
}