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
    Sphere test(0,0,5,1,0,100);
//    if(test.intersect(ray, &thit, &local)){
//        Color c(1,0,0);
//        *color = c;
//    }
//    else {
//        *color = Color(0,0,0);
//    }
    Matrix4f matr;
    matr <<
    1,0,0,0,
    0,1,0,0,
    0,0,1,0,
    0,0,0,1;
    Transformation trans(matr);
    GeometricPrimitive p = GeometricPrimitive(trans,trans,&test);
    Intersection in;
//    if(in->getPrimitive()->intersect())
//        cout << "light blocked \n";
//        *color = Color(0,0,0);
//        return;
    if(!p.intersect(ray, &thit, &in)){
        //color black
        *color = Color(0,0,0);
        return;

    } else {
        Normal normal = in.getLocal().getNormal();
        Vector3f n = Vector3f(normal.getX(),normal.getY(),normal.getZ());

        Vector3f l(1,1,-1);
//        diffuse(Color(.3,.3,.3), color, Color(1,1,1), n, l);
        *color = Color(1,0,0);
        
    }
    

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

