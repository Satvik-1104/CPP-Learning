// 1. Size of Polymorphic Objects and Slicing
// 2. Polymorphic Objects stored in Collections
// 3. Override - You know what (basically a modified version of a method that was in the parent class)
//    We add the override keyword to avoid confusion
//    Adding the keyword makes it easier for us to spot any typo if there is
// 4. Overloading, Overriding and Hiding
//    One Overridden Overload Hides all the other Overloads
//    So, if there are 2 draw methods in Shape class and we override one in the Oval class
//    The Oval class hides the other Overload and it is not available to its child classes (Circle)
//    So, we have to explicitly Override each Overload. Otherwise -> They will be Hidden (kidnapped)

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
        virtual void draw(int colour_depth)
        {
            cout << "Shape::draw(int& colour_depth). Colour depth " << colour_depth << endl;
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
        virtual void draw() override  // -> override keyword
        {
            cout << "Oval::draw() called. Drawing " << description << endl;
            cout << "x radius: " << x_radius << "   y radius: " << y_radius << endl;
        }
        virtual void draw(int colour_depth) override
        {
            cout << "Oval::draw(int& colour_depth). Colour depth " << colour_depth << endl;
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
        virtual void draw() override  // -> override keyword
        {
            cout << "Circle::draw() called. Drawing " << description << endl;
            cout << "radius: " << radius << endl;
        }
        virtual void draw(int colour_depth) override
        {
            cout << "Circle::draw(int& colour_depth). Colour depth " << colour_depth << endl;
        }

    protected:
        float radius{};
};

int main()
{   
    /*
    // Without Polymorphism
    cout << "Without Polymorphism" << endl;
    cout << "sizeof(Shape): " << sizeof(Shape) << endl; // 24
    cout << "sizeof(Oval): " << sizeof(Oval) << endl; // 32
    cout << "sizeof(Circle): " << sizeof(Circle) << endl; // 36
    */

    /*
    // With Polymorphism
    cout << "With Polymorphism" << endl;
    cout << "sizeof(Shape): " << sizeof(Shape) << endl; // 28
    cout << "sizeof(Oval): " << sizeof(Oval) << endl; // 36
    cout << "sizeof(Circle): " << sizeof(Circle) << endl; // 40
    */

    // Polymorphic objects are larger than normal -> imp
    // Dynamic Binding takes more space than Static Binding

    // Slicing
    // In slicing, even if the method has polymorphism enabled, we don't see it
    // because we are not using base pointers ot references

    /*
    Circle circle1 = Circle("Circle1", 5);
    Shape shape1 = circle1;
    shape1.draw();
    cout << "----------------------------------------------------------------------------" << endl;
    */

    // Polymorphic objects stored in Collections
    // We can't create a collection of Polymorphic objects in a collections because of slicing
    // But we can use pointers to do that and Polymorphism works
    // We also can't make a collection with references, if tried? -> compiler error
    // We can also use Smart Pointers. But I don't know what is a Smart Pointer

    /*
    cout << "Polymorphic objects directly stored in Collections" << endl;
    Oval oval1 = Oval("Oval1", 2.4, 5);
    Circle circle2 = Circle("Circle2", 1);
    Oval oval2 = Oval("Oval2", 12.5, 2);
    Circle circle3 = Circle("Circle3", 35);
    Oval oval3 = Oval("Oval3", 0.015, 0.23);
    Shape shapes[]{circle1, oval1, circle2, oval2, circle3, oval3};
    for (Shape& s : shapes)
    {
        s.draw();
    }
    cout << "----------------------------------------------------------------------------" << endl;

    // If we use pointers
    cout << "Polymorphic objects stored in Collections with the help of Pointers" << endl;
    Shape * shapes_ptrs[]{&circle1, &oval1, &circle2, &oval2, &circle3, &oval3};
    for (Shape * s : shapes_ptrs)
    {
        s->draw();
    }
    cout << "----------------------------------------------------------------------------" << endl;
    */

    // Overloading, Overriding and Hiding
    /*
    Circle circle("Circle", 5);
    Oval oval("Oval", 3.1, 7);
    Shape shape("Shape");

    // Normal Call
    cout << "Normal draw Call" << endl;
    cout << endl;
    shape.draw();
    oval.draw();
    circle.draw();
    cout << "-----------------------------------------------------------------------------" << endl;
    cout << endl;

    // Parameterised draw call
    cout << "Parameterised draw call" << endl;
    shape.draw(25);
    oval.draw(12);  // Error if the draw overload is not explicitly declared in the Oval class
    circle.draw(19);  // Error if the draw overload is not explicitly declared in the Circle class
    // So, all the overloads should be declared in the children classes to be prevented from
    // hidden the overridden method of one of the overload

    // If we want Polymorphism across all the classes, we need to declare the methods at the top level.
    // Otherwise, we get partial Polymorphism (Polymorphism at different levels)
    */
} 