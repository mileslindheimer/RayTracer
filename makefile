PATH=/usr/local/

#path to Eigen directory
EIGEN_PATH=/usr/local/include/eigen3

CC=g++

parse: OBJParser.o Normal.o Point.o Ray.o Color.o BRDF.o Sample.o LocalGeo.o Camera.o Film.o
	${CC} -o parse OBJParser.o Normal.o Point.o Ray.o Color.o BRDF.o Sample.o LocalGeo.o Camera.o Film.o

Normal.o: Normal.cpp Normal.h
	CC -c Normal.cpp -I${EIGEN_PATH}

Point.o: Point.cpp Point.h
	CC -c  Point.cpp -I${EIGEN_PATH}

Ray.o: Ray.cpp Ray.h
	CC -c  Ray.cpp -I${EIGEN_PATH}

Color.o: Color.cpp Color.h
	CC -c Color.cpp

BRDF.o: BRDF.cpp BRDF.h
	CC -c BRDF.cpp

Sample.o: Sample.cpp Sample.h
	CC -c Sample.cpp

LocalGeo.o: LocalGeo.cpp LocalGeo.h
	CC -c LocalGeo.cpp -I${EIGEN_PATH}

Camera.o: Camera.cpp
	CC -c Camera.cpp -I${EIGEN_PATH}

Film.o: Film.cpp Film.h
	CC -c Film.cpp

parse.o: OBJParser.cpp
	CC -c OBJParser.cpp -I ${PATH}include/

clean:
	/bin/rm -f *.o parse
