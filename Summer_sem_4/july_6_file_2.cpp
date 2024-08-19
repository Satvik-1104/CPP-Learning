// Copy constructors with Inheritance

/*
    Cse cse1 = Cse(name, college, ware);
    Cse cse2 = Cse(cse1)  -> Copy Constructor (works even if we don't declare it explicitly)
*/

// Copy constructor Code

// Actually copy constructors are implicit
// They need not be written explicitly
// But is there are pointers in our class we need our own copy constructor code

#include <iostream>
#include <string>
using namespace std;

class Student
{
    public:
        Student()
        {
            cout << "Student Default Constructor" << endl;
        }

        Student(string& name)
        {
            this->name = name;
            cout << "Student Custom Constructor" << endl;
        } 

        Student(const Student& student)
        {
            this->name = student.name;
            cout << "Student Copy Constructor" << endl;
        }

        void display()
        {
            cout << "Name: " << name << endl;
        }

    private:
        string name;
};

class Btech : public Student
{
    public:
        Btech()
        {
            cout << "Btech Default Constructor" << endl;
        }

        Btech(string& name, string& college) : Student(name)
        {
            this->college = college;
            cout << "Btech Custom Constructor" << endl;
        }

        Btech(const Btech& btech) : Student(btech)
        {
            this->college = btech.college;
            cout << "Btech Copy Constructor" << endl;
        }

        /*
            This will also work, but not recommended as unnecessary copies will be created
        
        Btech(const Btech& btech) : Student(btech.name) -> a copy of Student will be created
        {
            this->college = btech.college;
        }
        */

        void display()
        {
            Student :: display();
            cout << "College: " << college << endl;
        }

    private:
        string college;
};

class Cse : public Btech
{
    public:
        Cse()
        {
            cout << "Cse Default Constructor" << endl;
        }

        Cse(string& name, string& college, string& ware) : Btech(name, college)
        {
            this->ware = ware;
            cout << "Cse Custom Constructor" << endl;
        }

        Cse(const Cse& cse) : Btech(cse)
        {
            this->ware = cse.ware;
            cout << "Cse Copy Constructor" << endl;
        }

        /*
            This will also work, but not recommended as unnecessary copies will be created
        
        Cse(const Cse& cse) : Btech(cse.college) -> a copy of student and btech will be created
        {
            this->ware = cse.ware;
        }
        */

        // So, it is always better to use as mentioned in the code

        void display()
        {
            Btech :: display();
            cout << "Ware: " << ware << endl;
        }

    private:
        string ware;
};

int main()
{
    string name = "Satvik";
    string college = "IIITG";
    string ware = "Software";
    cout << "--------------------------------------------------------------------------------------" << endl;
    Student student1 = Student(name);
    student1.display();
    cout << "--------------------------------------------------------------------------------------" << endl;
    Btech btech1 = Btech(name, college);
    btech1.display();
    cout << "--------------------------------------------------------------------------------------" << endl;
    Cse cse1 = Cse(name, college, ware);
    cse1.display();
    cout << "--------------------------------------------------------------------------------------" << endl;
    Student student2 = Student(student1);
    student1.display();
    cout << "--------------------------------------------------------------------------------------" << endl;
    Btech btech2 = Btech(btech1);
    btech1.display();
    cout << "--------------------------------------------------------------------------------------" << endl;
    Cse cse2 = Cse(cse1);
    cse1.display();
    cout << "--------------------------------------------------------------------------------------" << endl;
    Student student3 = Student();
    cout << "--------------------------------------------------------------------------------------" << endl;
    Btech btech3 = Btech();
    cout << "--------------------------------------------------------------------------------------" << endl;
    Cse cse3 = Cse();
    cout << "--------------------------------------------------------------------------------------" << endl;
}