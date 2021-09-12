#include <string>
#include <sstream>
#include <cmath>
#include <iostream>
#include "point.h"
#include "math_healper.cpp"

point::point(const double x, const double y) 
    : x(x), y(y) {}

double point::get_x() const {
    return this->x;
}

double point::get_y() const {
    return this->y;
}

double move_x(const double x) const{
    this->x = x;
}

double move_y(const double y) const{
    this->y = y;
}

double dist_x(const double x, const double y) const{
    return pif_helper(x,y);
}

double point::compr_point(const point& other) const {
    double answer_one = pif_helper(this->get_x(), this->get_y(); 
    double answer_two = pif_helper(other.get_x(), other.get_y();  
    return abs(sub_helper(answer_one, answer_two));
}

double dist_btw(const double x, const double y) const{
    return pif_helper(x,y);
}

bool comprasion_xy(const double x, const double y) const{
    return x = y;
}
std::string point::to_string() const
{
    std::stringstream buffer;
    buffer << "{" << this->get_x() << ", ";
    buffer << this->get_y() << ", ";

    return buffer.str();
}

std::ostream& operator << (std::ostream& out, const point& point)
{
    return out << point.to_string();
}