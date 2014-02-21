/*
 * File:   VectorTest.h
 * Author: mileslindheimer
 *
 * Created on Feb 16, 2014, 5:08:46 PM
 */

#ifndef VECTORTEST_H
#define	VECTORTEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "../Vector.cpp"

class VectorTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(VectorTest);

    CPPUNIT_TEST(testMethod);
    CPPUNIT_TEST(testFailedMethod);

    CPPUNIT_TEST_SUITE_END();

public:
    VectorTest();
    virtual ~VectorTest();
    void setUp();
    void tearDown();

private:
    void testMethod();
    void testFailedMethod();
};

#endif	/* VECTORTEST_H */

