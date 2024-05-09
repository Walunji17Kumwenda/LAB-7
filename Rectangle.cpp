#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle()//default constructor
{
    float length= 0.0f;
    float width =0.0f;
}
Rectangle::~Rectangle()
{
    //destructor 
}
// implementing Accesor methods

//setter methods
    float Rectangle::getLength()
    {
    return length;
    }
    
    float Rectangle::getWidth()
    {
        return width;
    }
    //setter methods
    void Rectangle::setLength(float L)
    {
        length = L;

    }
    void Rectangle::setWidth(float W)
    {
        width = W;
    }

    float Rectangle::calculateArea(float L, float W)
    {
        length = L;
        width = W;
        return length * width;
    }
    Rectangle::Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

