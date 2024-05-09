#include "Area.h"
#include "Circle.h"
#include "Triangle.h"
#include "Square.h"
namespace shapes
{

 double shapes::Area::CalculateAreaOfSquare(const Square& square)
 {
    return (square.getLengthOfSquare() * square.getLengthOfSquare());
 }
    double shapes::Area::CalculateAreaOfTriangle(const Triangle& triangle)
    {
        return 0.5*triangle.getBase() *triangle.getHeight();
    }
     double shapes::Area:: CalculateAreaOfCircle(const Circle& circle )
     {
        return 3.14159 * circle.getRadius()*circle.getRadius();
     }
}