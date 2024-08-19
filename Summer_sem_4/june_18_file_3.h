using namespace std;
#include <iostream>

class Dog
{
    public:
        Dog()
        {
            name = "None";
            breed = "None";
            gender = "None";
            age = new int;
            * age = 0;
            cout << "Default constructor called for " << name << endl;
            cout << "Constructed at " << this << endl;
        }

        Dog(string name_param, string breed_param, string gender_param, int age_param)
        {
            name = name_param;
            breed = breed_param;
            gender = gender_param;
            age = new int;
            * age = age_param;
            cout << "Parameterised constructor called for " << name << endl;
            cout << "Constructed at " << this << endl;
        } 

        ~Dog()
        {
            delete age;
            cout << "Destructor called for " << name << endl;
        }

        string get_name()
        {
            return name;
        }

        string get_breed()
        {
            return breed;
        }

        string get_gender()
        {
            return gender;
        }

        int get_age()
        {
            return *age;
        }

        Dog * set_name (string new_name)
        {
            name = new_name;
            return this;
        }

        Dog& set_breed (string new_breed)
        {
            breed = new_breed;
            return *this;
        }

        Dog& set_gender (string new_gender)
        {
            gender = new_gender;
            return *this;
        }

        Dog& set_age (int new_age)
        {
            *age = new_age;
            return *this;
        }

        void print_Details()
        {
            cout << "name: " << name << endl;
            cout << "breed: " << breed << endl;
            cout << "gender: " << gender << endl;
            cout << "age: " << *age << endl;
        }
    
    private:
        string name;
        string breed;
        string gender;
        int * age {nullptr};
};