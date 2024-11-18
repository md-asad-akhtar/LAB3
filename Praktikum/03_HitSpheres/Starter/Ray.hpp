//
// Created by Peter Zdankin on 13.11.24.
//

#ifndef RAY_HPP
#define RAY_HPP
#include <optional>
#include "Intersection.hpp"
#include "Sphere.hpp"
#include "Vector3.hpp"


struct Ray {
    vec3 _origin;
    vec3 _direction;

    Ray(vec3 origin, vec3 direction);
    std::optional<Intersection> intersects(const Sphere& ray) const;
    vec3 point_at(float t) const;
};



#endif //RAY_HPP
