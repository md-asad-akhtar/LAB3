//
// Created by Peter Zdankin on 13.11.24.
//


#include "YourRayTracer.hpp"

#include "Ray.hpp"

YourRayTracer::YourRayTracer() {}

// We need to compute the forward, up and right directions. All must be perpendicular to each other.
// This is very complicated, try playing around with some lines to see how it affects the output (once you're done)
RaySetup YourRayTracer::computeRaySetup(const Screen screen) {
    RaySetup rs;
    vec3 forwardDir = _camera.getViewDir();
    vec3 upDir = _camera.getUpDir();
    double openingAngle = _camera.getFoV()* M_PI / 180;
    rs._rayOrigin = _camera.getEyePoint();
    double aspectRatio = ((double) screen.getWidth())/ ((double) screen.getHeight());
    vec3 rightDir = -cross(forwardDir,upDir);

    // Magic
    vec3 rowVector = rightDir*2.0*tan(openingAngle/2.0) * aspectRatio;
    vec3 columnVector = upDir * 2.0 * tan(openingAngle/2.0);

    rs._directionX = rowVector/((double)screen.getWidth());
    rs._directionY = columnVector*(-1.0)/((double)screen.getHeight());
    rs._topLeft = vec3() + (forwardDir - (rowVector - columnVector)*0.5);

    return rs;
}

void YourRayTracer::setCamera(Camera& camera) {
    this->_camera = camera;
}

void YourRayTracer::setScene(Scene& scene) {
    this->_scene = scene;
}

// Cast a ray from the camera viewpoint to each pixel in a hypothetical screen. See what we hit.
// Set the pixel color once we determine what we hit
void YourRayTracer::render(Screen& screen) {
    RaySetup rs = computeRaySetup(screen);
    for(uint64_t y = 0; y < screen.getHeight(); ++y) {
        for(uint64_t x = 0; x < screen.getWidth(); ++x) {
            vec3 color;
            Ray r = computeRay(x,y,rs);
            color = traceRay(r);
            screen.setPixel(x, y, color);
        }
    }
}

vec3 YourRayTracer::traceRay(const Ray& r){
    return _scene.traceRay(r);
}


Ray YourRayTracer::computeRay(double x, double y, const RaySetup& rs){
    vec3 direction = unit_vector((rs._topLeft + rs._directionX*x + rs._directionY * y) - vec3());
    return Ray(rs._rayOrigin, direction);
}