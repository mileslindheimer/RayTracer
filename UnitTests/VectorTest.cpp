/*
 * File:   VectorTest.cpp
 * Author: mileslindheimer
 *
 * Created on Feb 16, 2014, 5:08:47 PM
 */

#include "VectorTest.h"



CPPUNIT_TEST_SUITE_REGISTRATION(VectorTest);

VectorTest::VectorTest() {
}

VectorTest::~VectorTest() {
}

void VectorTest::setUp() {
};

void VectorTest::tearDown() {
}

void VectorTest::testMethod() {
    Vector test (1,2,3);
    CPPUNIT_ASSERT(test.x==1);
}

void VectorTest::testFailedMethod() {
    CPPUNIT_ASSERT(true);
}

