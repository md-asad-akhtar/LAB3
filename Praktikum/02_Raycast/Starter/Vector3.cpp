//
// Created by Peter Zdankin on 04.11.24.
//

#include "Vector3.hpp"

vec3::vec3() {
    vec3{0,0,0};
}

vec3::vec3(double x, double y, double z) {
    elements[0] = x;
    elements[1] = y;
    elements[2] = z;
}

double vec3::x() const {
    return elements[0];
}

double vec3::y() const {
    return elements[1];
}
double vec3::z() const {
    return elements[2];
}

//returns a vector where each of the elements is flipped from positive to negative and vice versa
vec3 vec3::operator-() const {

}

// return the i-th element of the elements vector
double vec3::operator[](int i) const {

}

// return the i-th element of the element
double& vec3::operator[](int i) {

}


vec3& vec3::operator+=(const vec3& v) {
    elements[0] += v.elements[0];
    elements[1] += v.elements[1];
    elements[2] += v.elements[2];
}

vec3& vec3::operator*=(double t) {

}

vec3& vec3::operator/=(double t) {

}

// Return the length of the vector
double vec3::length() const {

}

// Return the length but squared
double vec3::length_squared() const {

}

std::ostream& operator<<(std::ostream& out, const vec3& v) {
    return out << v.elements[0] << ' ' << v.elements[1] << ' ' << v.elements[2];
}

vec3 operator+(const vec3& u, const vec3& v) {
    return vec3(u.elements[0] + v.elements[0], u.elements[1] + v.elements[1], u.elements[2] + v.elements[2]);
}

vec3 operator-(const vec3& u, const vec3& v) {

}

vec3 operator*(const vec3& u, const vec3& v) {

}

// To scale a number with a vector
vec3 operator*(double t, const vec3& v){

}

// To scale a vector with a number
vec3 operator*(const vec3& v, double t){

}

// To divide a vector by a number
vec3 operator/(const vec3& v, double t) {

}

// dot product of a vector, i should google what a dot product is
double dot(const vec3& u, const vec3& v) {

}

// cross product of a vector, i should google what a dot product is
vec3 cross(const vec3& u, const vec3& v) {

}

// To normalize a vector such that it has a length of 1, we need to divide a vector by its length
vec3 unit_vector(const vec3& v) {

}