#ifndef SQUARE_H
#define SQUARE_H
namespace shapes
{
class Square
{
    private:
    double length; //private member variable

    public:
    Square();// default constructor
    Square(double l);// overloaded constructor
    ~Square();// destructor
    double getLengthOfSquare() const; // getter 
    void setLengthOfSquare(double l) ;// setter 
    
};
}
#endif