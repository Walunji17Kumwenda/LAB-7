#include <iostream>
#include "Triangle.h"//add triangle header
namespace shapes{
shapes::Triangle::Triangle()//implementing default constructor
{
    height = 1.0;
    base = 1.0;
}
shapes::Triangle:: Triangle(double h, double b)//defining an overloaded constructor
{
    height = h;
    base = b;
}
shapes::Triangle:: ~Triangle()
{
    // empty destructor
}

void shapes::Triangle::setHeight(double h) //settor methods
{
    height = h;
}
void shapes::Triangle::setBase(double b) 
{
    base = b;
}
//getter methods
double shapes::Triangle::getHeight() const
{
    return height;
}
double shapes::Triangle::getBase() const
{
    return base;
}
}