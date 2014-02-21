#path to Eigen directory
EIGEN_PATH=/usr/local/include/eigen3

my_program: my_program.cpp
	g++ -I ${EIGEN_PATH} my_program.cpp -o my_program

clean:
	rm -f *.o my_program
