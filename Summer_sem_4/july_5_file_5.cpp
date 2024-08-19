// Dafeult arg constructors with Inheritance

// always provide dafault constructors for your classes -> vip
// constructors are called in the order from parent to child
// We can observe in that in this code

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
            cout << name << " is a Student" << endl;
        } 
    protected:
        string name;
};

class Btech : public Student
{
    public:
        Btech()
        {
            cout << "Btech Default Constructor" << endl;
        }

        Btech(string& name, string& college)
        {
            this->name = name;
            this->college = college;
            cout << this->name << " is a student in " << college << endl;
        }

    protected:
        string college;
};

class Cse : public Btech
{
    public:
        Cse()
        {
            cout << "Cse Default Constructor" << endl;
        }

        Cse(string& name, string& college, string& ware)
        {
            this->name = name;
            this->college = college;
            this->ware = ware;
            cout << this->name << " is a " << ware << " engineer in " << this->college << endl;
        }

    protected:
        string ware;
};

int main()
{
    string name = "Satvik";
    string college = "IIITG";
    string ware = "Software";
    cout << "--------------------------------------------------------------------------------------" << endl;
    Student student1 = Student(name);
    cout << "--------------------------------------------------------------------------------------" << endl;
    Btech btech1 = Btech(name, college);
    cout << "--------------------------------------------------------------------------------------" << endl;
    Cse cse1 = Cse(name, college, ware);
    cout << "--------------------------------------------------------------------------------------" << endl;
    Student student2 = Student();
    cout << "--------------------------------------------------------------------------------------" << endl;
    Btech btech2 = Btech();
    cout << "--------------------------------------------------------------------------------------" << endl;
    Cse cse2 = Cse();
    cout << "--------------------------------------------------------------------------------------" << endl;
}