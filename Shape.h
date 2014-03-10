#include <vector> 
class Shape
{
public:
    bool intersect(Ray& ray, float* thit, LocalGeo* local);
    bool intersectP(Ray& ray);
    void createSphere(float centerx,float centery, centerz, float radius, float tmin, float tmax);
    void createTriangle(float centerx,float centery, float radius); //fix later
    bool isTriangle();
    bool isCircle();
    
private:
    float tmin, tmax, radius;
    Vector3f centervec;

};
