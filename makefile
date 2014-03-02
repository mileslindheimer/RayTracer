PATH=/usr/local/

#path to Eigen directory
EIGEN_PATH=/usr/local/include/eigen3

CC=g++

parse: OBJParser.o Point.o
	${CC} -o parse OBJParser.o Point.o

Point.o: Point.cpp
	CC -c  Point.cpp -I${EIGEN_PATH}

parse.o: OBJParser.cpp
	CC -c OBJParser.cpp -I ${PATH}include/

clean:
	/bin/rm -f *.o parse
