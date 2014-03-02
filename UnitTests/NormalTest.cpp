#include "NormalTest.h"
#include <Eigen/Dense>



CPPUNIT_TEST_SUITE_REGISTRATION(NormalTest);

NormalTest::NormalTest() {
}

NormalTest::~NormalTest() {
}

void NormalTest::setUp() {
}

void NormalTest::tearDown() {
}

void NormalTest::testConstructor() {
    Normal n1(1,2,3);
    CPPUNIT_ASSERT_EQUAL((float) (1/sqrt(14)), n1.getX());
    CPPUNIT_ASSERT(2/sqrt(14) - n1.getY() < .00001);
    CPPUNIT_ASSERT(3/sqrt(14) - n1.getZ() < .00001);
    Normal n2(0,0,0);
    CPPUNIT_ASSERT_EQUAL((float) 0, n2.getX());
    CPPUNIT_ASSERT_EQUAL((float) 0, n2.getY());
    CPPUNIT_ASSERT_EQUAL((float) 0, n2.getZ());
}

void NormalTest::testSetters() {
    Normal n1(1,2,3);
    n1.setY(5);
    CPPUNIT_ASSERT_EQUAL((float) (1/sqrt(35)), n1.getX());
    CPPUNIT_ASSERT(5/sqrt(35) - n1.getY() < .00001);
    CPPUNIT_ASSERT(3/sqrt(35) - n1.getZ() < .00001);
    n1.setX(0);
    CPPUNIT_ASSERT_EQUAL((float) 0, n1.getX());
    CPPUNIT_ASSERT(5/sqrt(34) - n1.getY() < .00001);
    CPPUNIT_ASSERT(3/sqrt(34) - n1.getZ() < .00001);
    Normal n2(1, 0, 0);
    CPPUNIT_ASSERT_EQUAL((float) 1, n2.getX());
    n2.setX(0);
    CPPUNIT_ASSERT_EQUAL((float) 0, n2.getX());
    CPPUNIT_ASSERT_EQUAL((float) 0, n2.getY());
    CPPUNIT_ASSERT_EQUAL((float) 0, n2.getZ());
}

void NormalTest::testAddSub() {

}

