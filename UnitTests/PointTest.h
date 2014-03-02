#ifndef PointTest_H
#define	PointTest_H

#include <cppunit/extensions/HelperMacros.h>
#include "../Point.cpp"

class PointTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(PointTest);
    
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST(testAdd);
    
    CPPUNIT_TEST_SUITE_END();
    
public:
    PointTest();
    virtual ~PointTest();
    void setUp();
    void tearDown();
    
private:
    void testConstructor();
    void testAdd();
};

#endif	/* PointTest_H */
