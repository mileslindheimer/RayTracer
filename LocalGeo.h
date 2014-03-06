

#ifndef LocalGeo_H
#define LocalGeo_H

//#include <cstdlib>
#include <iostream>
#include <math.h>
#include "Normal.h"
#include "Point.h"

class LocalGeo {
    
public:
    LocalGeo (Point p, Normal n);
    Point getPos(void);
    Normal getNormal(void);
    
    void setPos(Point newp);
    void setNormal(Normal newn);
    //untested until normal class finished
    //    bool equals(LocalGeo* g);
private:
    Point pos;
    Normal normal;
};

#endif /* LocalGeo_H */
