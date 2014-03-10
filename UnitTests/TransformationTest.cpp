#include "TransformationTest.h"
#include <Eigen/Dense>
#define Matrix4f Eigen::Matrix4f


CPPUNIT_TEST_SUITE_REGISTRATION(TransformationTest);

TransformationTest::TransformationTest() {
}

TransformationTest::~TransformationTest() {
}

void TransformationTest::setUp() {
}

void TransformationTest::tearDown() {
}

void TransformationTest::testConstructor() {
    Matrix4f m1;
    m1 <<
    1,0,0,1,
    0,1,0,2,
    0,0,1,3,
    0,0,0,1;
    Transformation t1(m1);
    CPPUNIT_ASSERT_EQUAL(m1, t1.getM());
    Matrix4f m2 = m1.inverse().transpose();
    CPPUNIT_ASSERT_EQUAL(m2, t1.getMinvt());

}


void TransformationTest::testMul() {

    
}

