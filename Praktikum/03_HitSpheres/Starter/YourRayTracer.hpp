//
// Created by Peter Zdankin on 13.11.24.
//

#ifndef YOURRAYTRACER_HPP
#define YOURRAYTRACER_HPP
#include "Camera.hpp"
#include "Ray.hpp"
#include "Scene.hpp"
#include "Screen.hpp"

struct RaySetup{
    vec3 _topLeft;
    vec3 _rayOrigin;
    vec3 _directionX;
    vec3 _directionY;
};

struct YourRayTracer{
    Camera _camera;
    Scene _scene;
    RaySetup _raySetup;

    RaySetup computeRaySetup(Screen screen);

    YourRayTracer();

    void setCamera(Camera& camera);
    void setScene(Scene& scene);
    void render(Screen& screen);
    vec3 traceRay(const Ray& r);
    Ray computeRay(double x, double y, const RaySetup& rs);


};


#endif //YOURRAYTRACER_HPP
