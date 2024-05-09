
#include "Circle.h"// add circle1 header file

namespace  shapes
{
shapes::Circle::Circle()//implement default constructor
{
    radius = 1.0;
}
shapes::Circle::Circle(double r)//implement overloaded constructor
{
    radius = r;
}
shapes::Circle::~Circle()
{
//empty destructor
}
//setter method
void shapes::Circle::setRadius(double r)
{
    radius = r;
}
//getter  method
double shapes::Circle::getRadius() const
{
    return radius;
}
}