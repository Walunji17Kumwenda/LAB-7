
#ifndef CIRCLE_H
#define CIRCLE_H
#pragma once
namespace shapes
{
    class Circle
    {
        private:
        double radius;//private member

        public:
        Circle();//default  circle constructor
        Circle(double r);// overloaded constructor
        ~Circle();//destructor
        //accesor methods
        void setRadius(double r) ;
        double getRadius() const;


    };
}
#endif