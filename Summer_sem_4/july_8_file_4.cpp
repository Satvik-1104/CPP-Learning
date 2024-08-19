/*
    Abstract Classes as Interfaces

    1. An abstract class with only pure virtual functions and no member variable can be
    used to model what is called an interface in Object Oriented Programming
    2. An interface is a specification of something that will be fully implemented in a
    derived class, but the specification itself resides in an abstract class
*/

// Without printing all the data of an object manually, we could do that with the help
// of an interface

// Learn This More Deeply
// I just byharted the Syntax -> I don't know how it works - imp
// Interface is a Powerful Tool -> Don't Neglect

#include <iostream>
#include <string>
using namespace std;

class Stream_Insertable
{
    friend ostream& operator<< (ostream& out, Stream_Insertable& operand)
    {
        operand.stream_insert(out);
        return out;
    }
    public:
        virtual void stream_insert(ostream& out) const = 0;
};


class Point : public Stream_Insertable
{   
    public:
        Point() = default;
        Point(double x, double y)
        {
            this->x = x;
            this->y = y;
        }
        virtual void stream_insert(ostream& out) const override
        {
            out << "Point: [x: " << x << ", y: " << y << "]";
        }
    
    private:
        double x;
        double y;
};

int main()
{
    Point p1(3.15, 24.73);
    cout << "Point p1: " << p1 << endl;
}   