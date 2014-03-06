#include "LocalGeo.h"

using namespace std;


LocalGeo::LocalGeo (Point p, Normal n){
        pos=p;
        normal=n;
    }
    Point LocalGeo::getPos(void) {
        return pos;
    }
    Normal LocalGeo::getNormal(void) {
        return normal;
    }

    void LocalGeo::setPos(Point newp) {
        pos=newp;
    }
    void LocalGeo::setNormal(Normal newn) {
        normal=newn;
    }
    //untested until normal class finished
//    bool equals(LocalGeo* g) {
//        return g->getPos().equals(pos) && g->getNormal().equals(normal);
//    }
