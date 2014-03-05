#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>
#include <math.h>
#include <vector>
#include <Eigen/Dense>
#include "Ray.h"
#include "Sample.h"
#include "Point.h"
using namespace Eigen;

/*The :: operator is called the scope-resolution operator and does just that, it resolves scope. So, by prefixing a type-name with this, it tells your compiler to look in the global namespace for the type.
 - from Stack Overflow */

//4d vectors
class Camera {
    Camera (Point, int, int);
    void generateRay(Sample&, Ray*);
private:
    Point eye;
    int plane_w;
    int plane_h;
};

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
//    ray->setPos(eye);
//	ray->direction = ray;
//	ray->t_minimum = 0.0; // fix these later
//	ray->t_maximum = 0.0;
}