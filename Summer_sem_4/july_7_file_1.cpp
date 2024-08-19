// Polymorphism - a base class pointers or references to manage derived class objects
// We need polymorphism to avoid static binding
// Polymorphism is dynamic binding

// Static Binding -> use a single base class pointer or reference to refer to various derived or base objects
//                   when needed
// With static binding, we need different functions and arrays for every shape
// and there would be so much repeated code
// But actually this doesn't happen
// example:
/*
    Static binding with base class pointer

    Shape shape1("shape1");
    Oval oval1(2.0, 3.5, "oval1");
    Circle circle1(3.3, "circle1");

    cout << endl;
    cout << "Calling method through pointer. Static Binding " << endl;

    Shape * shape_ptr = &shape1;
    shape_ptr->draw();                -> we expect shape1's draw() to be called

    shape_ptr = &oval1;
    shape_ptr->draw();                -> we expect oval1's draw() to be called

    shape_ptr = &circle1;
    shape_ptr->draw();                -> we expect circle1's draw() to be called

    But, the compiler just looks at the pointer type to decide ehich draw() version to call.
    It sees the Shape* and calls the Shape::draw(). This is static binding in action.
*/

/*
    Static binding with base class reference

    Shape shape1("shape1");
    Oval oval1(2.0, 3.5, "oval1");
    Circle circle1(3.3, "circle1");

    cout << endl;
    cout << "Calling method through reference. Static Binding " << endl;

    Shape& shape_ref1 = shape1;
    shape_ref1.draw();                -> we expect shape1's draw() to be called

    Shape& shape_ref2 = oval1;
    shape_ref2.draw();                -> we expect oval1's draw() to be called

    Shape& shape_ref3 = circle1;
    shape_ref3.draw();                -> we expect circle1's draw() to be called

    But, the compiler just looks at the reference type to decide ehich draw() version to call.
    It sees the Shape& and calls the Shape::draw(). This is static binding in action.
*/

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
        void draw()
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
        void draw()
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
        void draw()
        {
            cout << "Circle::draw() called. Drawing " << description << endl;
            cout << "radius: " << radius << endl;
        }

    protected:
        float radius{};
};

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
    // With Base pointers
    cout << endl;
    cout << "Static Binding Illustration" << endl;
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
    // With Base References
    cout << endl;
    cout << "Static Binding Illustration" << endl;
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
}