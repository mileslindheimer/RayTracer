#ifndef Light_H
#define Light_H

//#include <cstdlib>
#include <iostream>
#include <math.h>
#include "LocalGeo.h"
#include "Ray.h"
#include "Color.h"


class Light {
    
public:
    virtual void generateLightRay(LocalGeo& local, Ray* lray, Color* lcolor);
    virtual Ray* getRay();

};

#endif /* Light_H */
