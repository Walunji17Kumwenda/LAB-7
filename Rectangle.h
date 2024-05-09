#pragma once
class Rectangle
{
    private:
    float length;// declare private members
    float width;

    public:
    Rectangle();
    ~Rectangle();//declare public functions
    float getLength();
    void setLength(float L);
    float getWidth();
    void setWidth(float W);
    float calculateArea(float L, float W);
};
