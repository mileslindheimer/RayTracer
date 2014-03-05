#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <time.h>
#include <math.h>
#include "Color.h"
//#include <Eigen/Dense>
using namespace std;

class BRDF {

public:
    BRDF (Color d, Color s, Color a, Color r){
        kd=d;
        ks=s;
        ka=a;
        kr=r;
    }
    Color getKD(void) {
        return kd;
    }
    Color getKS(void) {
        return ks;
    }
    Color getKA(void) {
        return ka;
    }
    Color getKR(void) {
        return kr;
    }
    void setKD(Color new_kd) {
        kd=new_kd;
    }
    void setKS(Color new_ks) {
        ks=new_ks;
    }
    void setKA(Color new_ka) {
        ka=new_ka;
    }
    void setKR(Color new_kr) {
        kr=new_kr;
    }


private:
    Color kd, ks, ka, kr;
};
