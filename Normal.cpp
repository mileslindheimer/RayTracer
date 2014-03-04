#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <time.h>
#include <math.h>
#include <Eigen/Dense>
using namespace std;

class Normal {

public:
    //untested
    Normal(void){x=0;y=0;z=0;Eigen::Vector3f v(x,y,z);
        vec = v;}
    Normal (float nx, float ny, float nz){
        x=nx;
        y=ny;
        z=nz;
        Eigen::Vector3f v(nx,ny,nz);
        vec = v;
        if(!isZero()) vec.normalize();
    }
    float getX(void) {
        return vec[0];
    }
    float getY(void) {
        return vec[1];
    }
    float getZ(void) {
        return vec[2];
    }
    void setX(float newx) {
        x=newx;
        vec[0]=x; vec[1]=y; vec[2]=z;
        if(!isZero()) vec.normalize();
    }
    void setY(float newy) {
        y=newy;
        vec[0]=x; vec[1]=y; vec[2]=z;
        if(!isZero()) vec.normalize();
    }
    void setZ(float newz) {
        z=newz;
        vec[0]=x; vec[1]=y; vec[2]=z;
        if(!isZero()) vec.normalize();
    }

    //untested, not sure if need to support both normal+normal and vector+normal
    void add(Eigen::Vector3f v) {
        x+=v[0];
        y+=v[1];
        z+=v[2];
        vec[0]=x; vec[1]=y; vec[2]=z;
        if(!isZero()) vec.normalize();
    }
    //untested
    void sub(Eigen::Vector3f v) {
        x-=v[0];
        y-=v[1];
        z-=v[2];
        vec[0]=x; vec[1]=y; vec[2]=z;
        if(!isZero()) vec.normalize();
    }

    
private:
    float x,y,z;
    Eigen::Vector3f vec;
    bool isZero(){
        return x==0 && y==0 && z==0;
    }
};
