// Custom constructors with Inheritance  -> Ideal way, no errors even if member varaibles are private 
// In the output, the default constructors for the 1st 3 calls are not called
// as we explicitly called the customized constructors

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