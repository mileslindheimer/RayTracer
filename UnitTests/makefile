# CppUnit
# file: makefile
# next line has to be changed to the installation-path of CppUnit
CPPUNIT_PATH=/usr/local/
#path to Eigen directory
EIGEN_PATH=/usr/local/include/eigen3
CC=g++
# add <FILENAME>.o to first and second lines
runtests: runtests.o NormalTest.o ../Point.o PointTest.o ../Ray.o RayTest.o ../Color.o ColorTest.o BRDFTest.o SampleTest.o LocalGeoTest.o
	CC -o runtests runtests.o NormalTest.o ../Point.o PointTest.o ../Ray.o RayTest.o ../Color.o ColorTest.o BRDFTest.o SampleTest.o LocalGeoTest.o -L${CPPUNIT_PATH}/lib -lstdc++ -lcppunit -ldl

runtests.o: runtests.cpp
	CC -c runtests.cpp -I${CPPUNIT_PATH}/include

clean:
	rm -f *.o runtests

# add all additional tests here

NormalTest.o: NormalTest.cpp NormalTest.h	
	CC -c NormalTest.cpp -I${CPPUNIT_PATH}/include -I${EIGEN_PATH}

PointTest.o: PointTest.cpp PointTest.h	
	CC -c PointTest.cpp -I${CPPUNIT_PATH}/include -I${EIGEN_PATH}

RayTest.o: RayTest.cpp RayTest.h	
	CC -c RayTest.cpp -I${CPPUNIT_PATH}/include -I${EIGEN_PATH}

ColorTest.o: ColorTest.cpp ColorTest.h	
	CC -c ColorTest.cpp -I${CPPUNIT_PATH}/include -I${EIGEN_PATH}

BRDFTest.o: BRDFTest.cpp BRDFTest.h	
	CC -c BRDFTest.cpp -I${CPPUNIT_PATH}/include

SampleTest.o: SampleTest.cpp SampleTest.h	
	CC -c SampleTest.cpp -I${CPPUNIT_PATH}/include

LocalGeoTest.o: LocalGeoTest.cpp LocalGeoTest.h	
	CC -c LocalGeoTest.cpp -I${CPPUNIT_PATH}/include -I${EIGEN_PATH}

