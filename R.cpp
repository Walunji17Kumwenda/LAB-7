#include <iostream>
#include "Rectangle.h"
using namespace std;
int main()
{
                     //QUESTION 1
    Rectangle r;//create Rectangle object 
    float l;
    float w;
    cout<< "Enter the length of the rectangle: \n";// prompt the user to enter the length of the rectangle
    cin >> l;
    cout << "Enter the width of the rectangle: \n";//prompts the  user to enter the width of the rectangle
    cin >> w;
    r.setLength(l);
    r.setWidth(w);
    cout << "The area of the rectangle of length and width " << l << " and " << w << " is " << r.calculateArea(l, w);
                                      //QUESTION 2
   //using an overloaded rectangle constructor
    float a;
    float b;
    cout<< "Enter the length of the rectangle: \n";// prompt the user to enter the length of the rectangle
    cin >> a;
    cout << "Enter the width of the rectangle: \n";//prompts the  user to enter the width of the rectangle
    cin >> b;
    
    Rectangle rectangle (a, b);
    cout << "The area of the rectangle of length and width " << a << " and " << b << " is " << rectangle.calculateArea(l, w);//output to console


}