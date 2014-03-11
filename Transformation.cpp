#include "Transformation.h"

Transformation::Transformation(Matrix4f matrix){
    m = matrix;
    minvt = matrix.inverse().transpose();
}
