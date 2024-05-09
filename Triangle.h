
#ifndef TRIANGLE_H
#define TRIANGLE_H
#pragma once

namespace shapes
{
    class Triangle//declare triangle class
    {
        private:
        double height;//private member variables
        double base;

        public:
        Triangle();//default cconstructor
        Triangle(double h, double b);//overloaded constructor
        ~Triangle();// destructor
        //declaring accesor methods
         void setHeight(double h) ;
         void setBase(double b) ;
        double getHeight() const;
        double getBase() const;

    };
}
#endif