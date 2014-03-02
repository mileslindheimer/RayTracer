PATH=/usr/local/

#path to Eigen directory
EIGEN_PATH=/usr/local/include/eigen3

CC=g++

parse: OBJParser.o Normal.o Point.o Ray.o
	${CC} -o parse OBJParser.o Normal.o Point.o Ray.o

Normal.o: Normal.cpp
	CC -c Normal.cpp -I${EIGEN_PATH}

Point.o: Point.cpp
	CC -c  Point.cpp -I${EIGEN_PATH}

Ray.o: Ray.cpp
	CC -c  Ray.cpp -I${EIGEN_PATH}

parse.o: OBJParser.cpp
	CC -c OBJParser.cpp -I ${PATH}include/

clean:
	/bin/rm -f *.o parse
