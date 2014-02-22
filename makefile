PATH=/usr/local/

#path to Eigen directory
EIGEN_PATH=/usr/local/include/eigen3

CC=g++

parse: OBJParser.o my_program.o
	${CC} -o parse OBJParser.o my_program.o

my_program.o: my_program.cpp
	CC -c  my_program.cpp -I${EIGEN_PATH}

parse.o: OBJParser.cpp
	CC -c OBJParser.cpp -I ${PATH}include/

clean:
	rm -f *.o parse
