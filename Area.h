#ifndef  AREA_H
#define   AREA_H
#pragma once
/*add the circle, square and triangle header files*/
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
namespace shapes
{
class Area
{
    public:
    static double CalculateAreaOfSquare(const Square &square);
    static double CalculateAreaOfTriangle(const Triangle &triangle);
    static double CalculateAreaOfCircle(const Circle &cicle);

};
}
#endif
