#include "PointTest.h"



CPPUNIT_TEST_SUITE_REGISTRATION(PointTest);

PointTest::PointTest() {
}

PointTest::~PointTest() {
}

void PointTest::setUp() {
};

void PointTest::tearDown() {
}

void PointTest::testConstructor() {
    Point test (1,-2,0.5);
    CPPUNIT_ASSERT(test.getX()==1);
    CPPUNIT_ASSERT(test.getY()==-2);
    CPPUNIT_ASSERT(test.getZ()==0.5);
}
void PointTest::testAdd() {
    Point test (1,-2,0.5);
    CPPUNIT_ASSERT(test.getX()==1);

}

