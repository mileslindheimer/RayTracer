

#ifndef Material_H
#define Material_H

#include <iostream>
#include <math.h>
#include "BRDF.h"
#include "LocalGeo.h"

class Material {
public:
    Material();
    void getBRDF(LocalGeo& local, BRDF* brdf);

private:
    BRDF constantBRDF;
};
#endif /* Material_H */
