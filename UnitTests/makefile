# CppUnit
# file: makefile
# next line has to be changed to the installation-path of CppUnit
CPPUNIT_PATH=/usr/local/

# add <FILENAME>.o to first and second lines
runtests: runtests.o VectorTest.o
	gcc -o runtests runtests.o VectorTest.o -L${CPPUNIT_PATH}/lib -lstdc++ -lcppunit -ldl

runtests.o: runtests.cpp
	gcc -c runtests.cpp -I${CPPUNIT_PATH}/include

clean:
	rm -f *.o runtests

# add all additional tests here

VectorTest.o: VectorTest.cpp VectorTest.h	
	gcc -c VectorTest.cpp -I${CPPUNIT_PATH}/include


