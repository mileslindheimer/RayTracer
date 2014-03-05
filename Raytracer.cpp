#include <cstdlib>
#include <iostream>
#include <fstream>
#define vector std::vector
 


Camera camera;


    
  

int main(int argc, char **argv){
        int window_width = 1000;
		int window_height = 1000; // these need to be changed to getwindow size x and y
		camera = Camera(vec3(0,0,0), window_width,window_height);
        

}
