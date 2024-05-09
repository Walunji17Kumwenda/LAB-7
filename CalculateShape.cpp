#include <iostream>
#include "Area.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
void CalculateShape();
void AreaOfSquare();
void AreaOfCircle();
void AreaOfTriangle();

using namespace shapes;
using namespace std;
int main()
{
    CalculateShape();
    return 0;
}


void CalculateShape()
{
    cout <<"Please select the area of the shape to calculate \n";
    cout << "1.\tCalculate the  area of a Square\n2.\t Calculate the area of a Circle\n3.\tCalculate the area of Triangle\n4.\tQuit Program\n";
    cout << "\n"<< "Enter selection: ";
    int selection;
    cin >> selection;
    while(selection != 4){
            if  (selection == 1)
            {
                AreaOfSquare();
            
            }
            else if(selection == 2)
            {
                AreaOfCircle();
                
            }
            else if(selection == 3)
            {
                AreaOfTriangle();
                
            }
    }
             if(selection == 4)
            {
                exit(0);
            }
            else
            {
                cout << "Your input was: " << selection <<  " which is an invalid input\nPlease enter a valid input!!!";
                CalculateShape();
            }
}
    
        
void AreaOfSquare()
{
    cout << "Enter the length of the square: ";
    double length;
    cin >> length;
    Square square(length);

    cout << "The area of the square of the length " << length << " is " << shapes::Area::CalculateAreaOfSquare(square) << " meters squared\n\n";
    CalculateShape();
}
 void AreaOfCircle()
 {
    cout << "Enter the radius of the Circle: ";
    double radius;
    cin >> radius;
    Circle circle (radius);
    
    cout <<"The area of the circle of radius " << radius  << " is " << shapes::Area::CalculateAreaOfCircle(circle) << " meters squared.\n\n";
    CalculateShape();
 }
 void AreaOfTriangle()
 {
    cout << "Enter the base of the triangle: ";
    double base;
    cin >> base;
    cout << "Enter the height of the triangle: ";
    double height;
    cin >> height;
    Triangle triangle(height,base);
    cout <<"The area of the triangle of base " << base << " and of height " << height << " is " << shapes::Area::CalculateAreaOfTriangle(triangle) << " meters squared.\n\n";
    CalculateShape();
 }