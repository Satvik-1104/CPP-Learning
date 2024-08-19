// Inheritance and Polymorphism with Static Members
// We need different Static variable in different classes to get more accurate info

#include <iostream>
#include <string>
using namespace std;

class Shape
{
    public:
        Shape()
        {
            Shape::count++;
        }
        Shape(const string& description)
        {
            this->description = description;
            count ++;
        }
        virtual void draw()
        {
            cout << "Shape :: draw called. Drawing " << endl;
        }
        virtual void get_count()
        {
            cout << "Shape :: get_count called. Shape count: " << Shape::count << endl;
        }
        static int count;

    protected:
        string description;
};

int Shape::count {0};

class Ellipse : public Shape
{
    public:
        Ellipse()
        {
            Ellipse::count++;
        }
        Ellipse(const string& description, int x_radius, int y_radius)
        {
            this->description = description;
            this->x_radius = x_radius;
            this->y_radius = y_radius;
            count ++;
        }
        virtual void draw() override
        {
            cout << "Ellipse :: draw called. Drawing " << endl;
            cout << "x_radius: " << x_radius << "   y_radius: " << y_radius << endl;
        }
        virtual void get_count() override
        {
            cout << "Ellipse :: get_count called. Ellipse count: " << Ellipse::count << endl;
        }
        static int count;

    protected:
        float x_radius;
        float y_radius;
};

int Ellipse::count {0};

int main()
{
    /*
    Shape shape1 = Shape("Square");
    cout << "Shape count: " << Shape::count << endl;
    cout << "Ellipse count: " << Ellipse::count << endl;
    Shape shape2 = Shape("Rectangle");
    cout << "Shape count: " << Shape::count << endl;
    cout << "Ellipse count: " << Ellipse::count << endl;
    Shape ellipse2 = Ellipse("Circle", 3, 3);
    cout << "Shape count: " << Shape::count << endl;
    cout << "Ellipse count: " << Ellipse::count << endl;
    Shape shape4 = Shape("Triangle");
    cout << "Shape count: " << Shape::count << endl;
    cout << "Ellipse count: " << Ellipse::count << endl;
    Shape shape5 = Shape("Parallelogram");
    cout << "Shape count: " << Shape::count << endl;
    cout << "Ellipse count: " << Ellipse::count << endl;
    Ellipse ellipse1 = Ellipse("Ellipse", 2, 1);
    cout << "Shape count: " << Shape::count << endl;
    cout << "Ellipse count: " << Ellipse::count << endl;
    */

    // Shape polymorphism
    Shape shape1 = Shape("Square");              // 1, 0
    Shape shape2 = Shape("Rectangle");           // 2, 0
    Ellipse ellipse1 = Ellipse("Ellipse", 2, 1); // 3, 1
    Shape shape3 = Shape("Triangle");            // 4, 1 
    Shape shape4 = Shape("Parallelogram");       // 5, 1
    Shape ellipse2 = Ellipse("Circle", 3, 3);    // 6, 2

    Shape * shapes[] {&shape1, &shape2, &ellipse1, &ellipse2, &shape3, &shape4};
    for (Shape * shape : shapes)
    {
        shape->get_count();
    }
}