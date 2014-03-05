#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <time.h>
#include <math.h>
#include <Eigen/Dense>
using namespace std;
/*
From class notes:

 void render() {
    while (!sampler.generateSample(&sample) {
        camera.generateRay(sample, &ray);
        raytracer.trace(ray, &color);
        film.commit(sample, color);
    }
           film.writeImage();
           }
*/


class Scene
{
public:
    Scene(int x, int y, Camera* cam);
    void render();
private:
    int full_x, full_y;
    Ray ray;
    Sampler sampler;
    Raytracer raytracer;
    Camera camera;
    } ;

#endif
           
Scene::Scene(float input_x, float input_y, Camera input_camera) // will need more args
           
    {
        full_x=input_x;
        ful_y = input_y;
        camera = input_camera;
       
    }
           
           
void Scene::render() {
	while (sampler.getSample(&sample)) {
    //do something here
    }

}