#ifndef Shape_H
#define Shape_H

#include <vector>
#include "Ray.h"
#include "LocalGeo.h"
#include "Eigen/Dense"
#define Vector3f Eigen::Vector3f
class Shape
{
public:
    virtual bool intersect(Ray& ray, float* thit, LocalGeo* local);
    virtual bool intersectP(Ray& ray);
    void createSphere(float centerx,float centery,float centerz, float radius, float tmin, float tmax);
    void createTriangle(float centerx,float centery, float radius); //fix later
    bool isTriangle();
    bool isCircle();
    

 

};


class Sphere : public Shape
{
public:
    void createSphere(float centerx,float centery,float centerz, float radius, float tmin, float tmax);
    bool intersect(Ray& ray, float* thit, LocalGeo* local);
    bool intersectP(Ray& ray);

private:
    float tmin, tmax, radius;
    Vector3f centervec;

    
};

class Triangle : public Shape
{
public:
    void createTriangle(float centerx,float centery, float radius); //fix later
	bool intersect(Ray& ray, double* thit, LocalGeo* local);
	bool intersectP(Ray& ray);
    
    
};

#endif
