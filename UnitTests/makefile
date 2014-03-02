# CppUnit
# file: makefile
# next line has to be changed to the installation-path of CppUnit
CPPUNIT_PATH=/usr/local/
#path to Eigen directory
EIGEN_PATH=/usr/local/include/eigen3
CC=g++
# add <FILENAME>.o to first and second lines
runtests: runtests.o PointTest.o RayTest.o
	CC -o runtests runtests.o PointTest.o RayTest.o -L${CPPUNIT_PATH}/lib -lstdc++ -lcppunit -ldl

runtests.o: runtests.cpp
	CC -c runtests.cpp -I${CPPUNIT_PATH}/include

clean:
	rm -f *.o runtests

# add all additional tests here

PointTest.o: PointTest.cpp PointTest.h	
	CC -c PointTest.cpp -I${CPPUNIT_PATH}/include -I${EIGEN_PATH}

RayTest.o: RayTest.cpp RayTest.h	
	CC -c RayTest.cpp -I${CPPUNIT_PATH}/include -I${EIGEN_PATH}

