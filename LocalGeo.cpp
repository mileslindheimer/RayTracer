#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <time.h>
#include <math.h>
#include "Normal.h"
#include "Point.h"
using namespace std;

class LocalGeo {

public:
    LocalGeo (Point p, Normal n){
        pos=p;
        normal=n;
    }
    Point getPos(void) {
        return pos;
    }
    Normal getNormal(void) {
        return normal;
    }

    void setPos(Point newp) {
        pos=newp;
    }
    void setNormal(Normal newn) {
        normal=newn;
    }
    //untested until normal class finished
//    bool equals(LocalGeo* g) {
//        return g->getPos().equals(pos) && g->getNormal().equals(normal);
//    }
private:
    Point pos;
    Normal normal;
};
