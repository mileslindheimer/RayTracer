#include "RayTracer.h"
#include "testsphere.h"
#define cout std::cout

class TestSphere : public Primitive {
public:
    
    TestSphere(){
        Point o(0,0,0);
        origin = o;
        r = 1;
    }
    bool intersect(Ray& ray, float* thit, Intersection* inter){
        return true;
    }
    bool intersectP(Ray& ray){
        return false;
    }
    void getBRDF(LocalGeo& local, BRDF* brdf);
    float getR(){
        return r;
    }
    Point getOrigin(){
        return origin;
    }
private:
    float r;
    Point origin;
};

RayTracer::RayTracer(){
    maxDepth = 10;
    numLights = 1;
    thit = 1;
    PointLight pl;
}

void RayTracer::trace(Ray& ray, int depth, Color* color){
    if(depth > maxDepth){
        //color black
        cout << "maxDepth \n";
        return;
    }
    Point p1(0,0,0);
    Normal n1(1,0,0);
    LocalGeo local = LocalGeo(p1, n1);
    TestSphere test;
    Intersection inter = Intersection(local, test);
//    if(in->getPrimitive()->intersect())
//        cout << "light blocked \n";
//    if(!in->getPrimitive()->intersect(ray, &thit, &inter)){
//        //color black
//        return;
//    }
    
    Color c(0, .3, .6);
    color->add(c);
//    in->getPrimitive()->getBRDF(in->getLocal(), &brdf);
//    for(int i=0; i<numLights; i++){
//        lights[i].generateLightRay(in->getLocal(), lights[i].getRay(), color);
//        
//        if (!in->getPrimitive()->intersectP(ray)){
//            Color c(0, 1, 0);
//            color->add(c);
//            *color->add(shading(in->getLocal(), brdf, ray, lcolor));
//        }
//    }
//    if(brdf.getKR() > 0){
//        Ray reflectRay(in->getLocal(), ray);
        //should be tempColor, compiling...
//        trace(reflectRay, depth+1; &color);
//        *color->add(color->mul(brdf->getKR()));
//    }
}
