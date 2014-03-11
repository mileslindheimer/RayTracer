#include "Transformation.h"

Transformation::Transformation(Matrix4f matrix){
    m = matrix;
    minvt = matrix.inverse().transpose();
}
Ray Transformation::mul(Ray ray){
    Ray r = ray;
    Vector4f v4;
    v4 << r.dir(),0;
    //more
    return r;
}

LocalGeo Transformation::mul(LocalGeo local){
    LocalGeo g = local;
    Vector4f pos4;
    Point pos3;
    pos4 << g.getPos().getX(), g.getPos().getY(), g.getPos().getZ(), 1;
    pos4 = m*pos4;
    pos3 = Point(pos4(0), pos4(1), pos4(2));
    g.setPos(pos3);
    
    Vector4f normal4;
    Normal normal3;
    normal4 << g.getNormal().getX(), g.getPos().getY(), g.getPos().getZ(), 1;
    normal4 = minvt*normal4;
    normal3 = Normal(normal4(0), normal4(1), normal4(2));
    g.setNormal(normal3);
    
    return g;
}