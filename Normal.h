

#ifndef Normal_H
#define Normal_H

//#include <cstdlib>
#include <iostream>
#include <math.h>
#include <Eigen/Dense>

class Normal {
    
public:
    //untested
    Normal(void);
    Normal (float nx, float ny, float nz);
    float getX(void);
    float getY(void);
    float getZ(void);
    void setX(float newx);
    void setY(float newy);
    void setZ(float newz);
    
    void add(Eigen::Vector3f v);

    void sub(Eigen::Vector3f v);
    
    
private:
    float x,y,z;
    Eigen::Vector3f vec;
    bool isZero(){return x==0 && y==0 && z==0;}
};

#endif /* Normal_H */
