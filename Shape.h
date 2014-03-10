#include <vector> 
class Shape
{
public:
    bool intersect(Ray& ray, float* thit, LocalGeo* local);
    bool intersectP(Ray& ray);
 

};


class Sphere : public Shape
{
public:
    void createSphere(float centerx,float centery, centerz, float radius, float tmin, float tmax);
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