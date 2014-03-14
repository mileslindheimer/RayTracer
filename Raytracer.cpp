#include "RayTracer.h"
#define cout std::cout

RayTracer::RayTracer(){
    maxDepth = 10;
    numLights = 1;
    thit = 0;
    PointLight pl;
}

void RayTracer::diffuse(Color kd,Color* color, Color lcolor, Vector3f n, Vector3f l){
    Vector3f nhat = n;
    Vector3f lhat = l;
//    nhat.normalize();
    lhat.normalize();
    float ndotl = fmax(nhat.dot(lhat),0);
    color->add( Color( kd.getR()*lcolor.getR()*ndotl, kd.getG()*lcolor.getG()*ndotl, kd.getB()*lcolor.getB()*ndotl) );
    
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
    Sphere test(-1,0,5,1,0,100);
    if(test.intersect(ray, &thit, &local)){
        color->add( Color(.5,0,0) );
    }
//    Primitive p = GeometricPrimitive(&test);
//    Intersection inter = Intersection(local, p);
//    if(in->getPrimitive()->intersect())
//        cout << "light blocked \n";
//    if(!in->getPrimitive()->intersect(ray, &thit, &inter)){
//        //color black
//        return;
//    }
//    Color c;
//    if(!p.intersect(ray, &thit, &inter)){
//
//    } else {
//
//        Vector3f n = Vector3f(inter.getLocal().getNormal().getX(), inter.getLocal().getNormal().getY(), inter.getLocal().getNormal().getZ());
//
//        Vector3f l(1,1,-1);
//        diffuse(Color(.3,.3,.3), color, Color(1,1,1), n, l);
//        
//    }
    

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

