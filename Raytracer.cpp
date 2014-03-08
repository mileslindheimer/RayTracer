#include "RayTracer.h"

class RayTracer {
public:
    RayTracer();
    void trace(Ray& ray, int depth, Color* color);
private:
    int maxDepth;
    int numLights;
    Light lights[10];
    BRDF brdf;
    float thit;
    Intersection* in;

    
};

void RayTracer::trace(Ray& ray, int depth, Color* color){
    maxDepth = 10;
    if(depth > maxDepth){
        //color black
        return;
    }
    if(!in->getPrimitive()->intersect(ray, &thit, in)){
        //color black
        return;
    }
    in->getPrimitive()->getBRDF(in->getLocal(), &brdf);
    for(int i=0; i<numLights; i++){
        // should be lray not ray, just getting to compile
        lights[i].generateLightRay(in->getLocal(), &ray, color);
        
//        if (!in->getPrimitive()->intersectP(ray)){
//            *color->add(shading(in->getLocal(), brdf, ray, lcolor));
//        }
    }
//    if(brdf.kr > 0){
//        Ray reflectRay(in->getLocal(), ray);
        //should be tempColor, compiling...
//        trace(reflectRay, depth+1; &color);
//        *color->add(color->mul(brdf->getKR()));
//    }
}
