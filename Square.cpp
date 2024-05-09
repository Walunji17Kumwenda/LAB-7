
#include "Square.h"

namespace shapes
{
    shapes::Square::Square()//initializing default constructor 
     {
    length = 1.0;
     }
   shapes::Square:: Square(double l)//implementing overoaded constructor
    {
        length = l;

    }
    shapes::Square:: ~Square()//destructor
    {
    }
    //getter method
    double shapes::Square::getLengthOfSquare()  const
    {
        return length;
    }
    //setter method
    void shapes::Square::setLengthOfSquare(double l) 
    {
       length = l;
    }
}