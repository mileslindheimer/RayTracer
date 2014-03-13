#include "Transformation.h"

Transformation::Transformation(Matrix4f matrix){
    m = matrix;
    minvt = matrix.inverse().transpose();
}
Ray Transformation::mul(Ray ray){
    Ray r = ray;
    Vector4f p4;
    Vector4f v4;
    Vector3f v3;
    Point p3;
    
    p4 << ray.pos().getX(),ray.pos().getY(),ray.pos().getZ(),1;
    v4 << r.dir(),1;
    p4 = m.inverse() * p4;
    p3 = Point(p4[0], p4[1], p4[2]);
    v4 = m.inverse() * v4;
    r.setPos(p3);
    r.setDir(Vector3f(v4[0], v4[1], v4[2]));
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