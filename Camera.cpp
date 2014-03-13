#include "Camera.h"

/*The :: operator is called the scope-resolution operator and does just that, it resolves scope. So, by prefixing a type-name with this, it tells your compiler to look in the global namespace for the type.
 - from Stack Overflow */


Camera::Camera(Point eye_input, int width, int height){
	eye = eye_input;
	w=width;
    h=height;
    cam_up = Vector3f(0, 1,0);
    
}


void Camera::generateRay(Sample& sample, Ray* ray){
//    float normi, normj;
//    //fov x and y
//    //    float fovy = M_PI*fov/180;
//    //	float fovx = 2*atan(tan(fovy/2)*plane_w/plane_h);
//    
//    
//    //sample point with 0
//    Point samplep= Point(sample.getX(), sample.getY(), 0);
//    //get direction
//    Vector3f cam_dir=samplep.sub(eye);
//    cam_dir.normalize();
//    
//    
//    //we now have right and cross
//    Vector3f cam_right = cam_dir.cross(cam_up);
//    cam_up = cam_right.cross(cam_dir); //fix choice of up
//    
//    normi= (sample.getX()/plane_w) - .5;
//    normj = (sample.getY()/plane_h) - .5;
//    Vector3f img_pt= normi * cam_right + normj*cam_up + Vector3f(eye.getX(),eye.getY(),eye.getZ()) + cam_dir;
//    Vector3f ray_dir = Point(img_pt[0],img_pt[1],img_pt[2]).sub(eye);
//    
//    
//    //normalize pixels
//    // float norm_sx = tan(fovy / 2.0) * (plane_h/2.0 - sample.getX()) / (plane_h / 2.0);
//    //    float norm_sy =  fovx * (sample.getY() - plane_w/2.0) / (plane_w / 2.0);
//    
//    
//    
//    
//    Vector3f point=Vector3f(normi, normj, -1);
//    ray->setPos(eye);
//    ray->setDir(ray_dir);
//}
//
//void Camera::generateRay(Sample& sample, Ray* ray){

    
	float  u,v;
    Vector3f UL (-0.5,0.5,0); Vector3f UR (0.5,0.5,0);
    Vector3f LL (-0.5,-0.5,0); Vector3f LR (0.5,-0.5,0);
    
    u = sample.getX()/w;
    v = sample.getY()/h;
    
    Vector3f pvec = u*(v*LL + (1-v)*UL) + (1-u)*(v*LR + (1-v)*UR);
    Point p (pvec[0], pvec[1], pvec[2]);
    Vector3f dir( p.sub(eye) );
}
//
//    ray->setPos(eye);
//	ray->setDir(dir);
    /*http://www.unknownroad.com/rtfm/graphics/rt_eyerays.html*/
//	float fovx = M_PI_4;
//	float fovy = (plane_h/plane_w) * fovx;
//    u=(((2*sample.getX()-plane_w)/plane_w)*tan(fovx));
//    v=(((2*sample.getY()-plane_h)/plane_h)*tan(fovy));
//    w=-1;
//    Vector3f dir(u,v,w);

//	ray->t_minimum = 0.0; // fix these later
//	ray->t_maximum = 0.0;
//}

//P= u (vLL+ (1-v)UL)+
//(1-u)(vLR+ (1-v)UR)
