// Pure Virtual Functions and Abstract Classes
// Pure virtual methods mean that they are not meant to be implemented in the Base Class

/*
    For example, there is a Base class called Shape
    It has 2 functions, cal_area(), cal_perimeter()
    Shape has 2 children (Rectangle and Circle)
    In which we will implement the cal_area(), cal_perimeter() functions
    Because cal_area(), cal_perimeter() for a Shape is senseless
    These are the Pure Virtual Functions

    Even one pure virtula function makes the class Abstract
    And no objects of that class can be created
*/

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

#define PI 3.14159

class Shape
{
    protected:
        Shape() = default;
        Shape(string description)
        {
            this->description = description;
        }
    
    public:
        virtual ~Shape() = default;
        virtual double area() = 0;
        virtual double perimeter() = 0;

    private:
        string description;
};

class Rectangle : public Shape
{
    public:
        Rectangle() = default;
        Rectangle(string description, double length, double breadth) : Shape(description)
        {
            this->length = length;
            this->breadth = breadth;
        }
        virtual double area()
        {
            double area = length * breadth;
            return area;
        }
        virtual double perimeter()
        {
            double perimeter = 2 * (length + breadth);
            return perimeter;
        }

    private:
        double length;
        double breadth;
};

class Circle : public Shape
{
    public:
        Circle() = default;
        Circle(string description, double radius) : Shape(description)
        {
            this->radius = radius;
        }
        virtual double area()
        {
            double area = PI * radius * radius;
            return area;
        }
        virtual double perimeter()
        {
            double perimeter = 2 * PI * radius;
            return perimeter;
        }

    private:
        double radius;
};

int main()
{
    // Shape * shape_ptr = new Shape("Shape");  -> Error because, Shape is an abstract class

    Shape * rectangle_ptr = new Rectangle("rectangle1", 3, 4);
    double rect_area = rectangle_ptr->area();
    cout << "Rectangle area: " << rect_area << endl;
    double rect_perimeter = rectangle_ptr->perimeter();
    cout << "Rectangle area: " << rect_perimeter << endl;
    cout << "Dynamic type: " << typeid(* rectangle_ptr).name() << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    Shape * circle_ptr = new Circle("circle1", 7);
    double circle_area = circle_ptr->area();
    cout << "Circle area: " << circle_area << endl;
    double circle_perimeter = circle_ptr->perimeter();
    cout << "Circle area: " << circle_perimeter << endl;
    cout << "Dynamic type: " << typeid(*circle_ptr).name() << endl;

    // Even if one of the abstract function is not implemented in the derived classes
    // That class becomes an abstract class
}