// Polymorphism (Dynamic Binding) with virtual functions
// While using polymorphism, we need to declare the function that we are going to 
// use across objects of different classes as virtual
// Just adding Virtual key word enables the Polymorphism.
// Nothing more to do

#include <iostream>
#include <string>
using namespace std;

class Shape
{
    public:
        Shape() = default;
        Shape(const string& description)
        {
            this->description = description;
        }
        virtual void draw()
        {
            cout << "Shape::draw() called. Drawing " << description << endl;
        }

    protected:
        string description{};
};

class Oval : public Shape
{
    public:
        Oval() = default;
        Oval(const string& description, const float& x_radius, const float& y_radius)
        {
            this->description = description;
            this->x_radius = x_radius;
            this->y_radius = y_radius;
        }
        virtual void draw()
        {
            cout << "Oval::draw() called. Drawing " << description << endl;
            cout << "x radius: " << x_radius << "   y radius: " << y_radius << endl;
        }

    protected:
        float x_radius{};
        float y_radius{};
};

class Circle : public Oval
{
    public:
        Circle() = default;
        Circle(const string& description, const float& radius)
        {
            this->description = description;
            this->radius = radius;
        }
        virtual void draw()
        {
            cout << "Circle::draw() called. Drawing " << description << endl;
            cout << "radius: " << radius << endl;
        }

    protected:
        float radius{};
};

void draw_shape_ptr(Shape * s)
{
    s->draw();
}

void draw_shape_ref(Shape& s)
{
    s.draw();
}

int main()
{   
    Shape shape1 = Shape("shape1");
    shape1.draw();
    cout << "----------------------------------------------------------------------------" << endl;
    Oval oval1 = Oval("oval1", 2.0, 3.5);
    oval1.draw();
    cout << "----------------------------------------------------------------------------" << endl;
    Circle circle1 = Circle("circle1", 5);
    circle1.draw();
    cout << "----------------------------------------------------------------------------" << endl;
    cout << endl;
// Polymorphism
    cout << "Polymorphism (Dynamic Binding) Illustration" << endl;
    // With Base pointers
    cout << "With Base Pointers" << endl;
    Shape * shape1_ptr = &shape1;
    shape1_ptr->draw();
    cout << "----------------------------------------------------------------------------" << endl;
    Shape * oval1_ptr = &oval1;
    oval1_ptr->draw();
    cout << "----------------------------------------------------------------------------" << endl;
    Shape * circle1_ptr = &circle1;
    circle1_ptr->draw();
    cout << "----------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "Polymorphism (Dynamic Binding) Illustration" << endl;
    // With Base references
    cout << "With Base References" << endl;
    Shape& shape1_ref = shape1;
    shape1_ref.draw();
    cout << "----------------------------------------------------------------------------" << endl;
    Shape& oval1_ref = oval1;
    oval1_ref.draw();
    cout << "----------------------------------------------------------------------------" << endl;
    Shape& circle1_ref = circle1;
    circle1_ref.draw();
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Putting objects of different classes in the same array" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    Shape * shapes[]{&circle1, &oval1, &shape1};
    for (Shape * shape : shapes)
    {
        shape->draw();
        cout << "------------------------------------------------------------------------" << endl;
    } 
}