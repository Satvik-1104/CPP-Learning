// Inheriting Base Constructors

/*
    Actually, to use the constructor of the parent class, we do

    Engineer (const string& firstname, const string& lastname, const string& address)
        : Person (firstname, lastname, address)
    {
    
    }

    instead of this, to inherit the base constructor, we can do this
    using Person :: Person
*/

/*
    1. Copy constructors are not inheritable. But, usually we don't notice it as the compiler 
       will automatically insert copy constructors for us.
    2. Inherited constructors are base constructors. They have no knowledge of the derived class.
    3. Constructors are inherited with whatever access specifier they had in base class
    4. On top of derived constructors, you can add your own that possibly properly initialize derived
       member variables.
    5. Inheriting constructors adds a level of confusion to your code.
       use them only if it is not avoidable.
*/

#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
        Person()
        {
            cout << "Person default constructor" << endl;
        }

        Person(const string& firstname, const string& lastname, const string& address)
        {
            this->firstname = firstname;
            this->lastname = lastname;
            this->address = address;
            cout << "Person custom constructor" << endl;
        }

        void display()
        {
            cout << "Firstname: " << firstname << endl;
            cout << "Lastname: " << lastname << endl;
            cout << "Address: " << address << endl;
        }

    private:
        string firstname{};
        string lastname{};
        string address{};
};

class Engineer : public Person
{
    public:
        Engineer()
        {
            cout << "Engineer default constructor" << endl;
        }

        Engineer(const string& firstname, const string& lastname, const string& address,
                 const string& eng_branch, const string& contract_type)
            : Person(firstname, lastname, address)
        {
            this->eng_branch = eng_branch;
            this->contract_type = contract_type;
            cout << "Engineer custom constructor" << endl;
        }

        using Person :: Person; // -> Inheriting base constructor

        void display()
        {
            Person :: display();
            cout << "Engineer Branch: " << eng_branch << endl;
            cout << "Contract Type: " << contract_type << endl;
        }

    private:
        string eng_branch;
        string contract_type;
};

int main()
{
    string firstname = "Suranjana";
    string lastname = "Barua";
    string address = "D.No: 1-43, That Street, This City";
    string eng_branch = "Linguistic Engineer";
    string contract_type = "Language and Society";
    Person person1 = Person(firstname, lastname, address);
    person1.display();
    cout << "--------------------------------------------------------------------------------------" << endl;
    Engineer engineer1 = Engineer(firstname, lastname, address, eng_branch, contract_type);
    engineer1.display();
    cout << "--------------------------------------------------------------------------------------" << endl;
    Engineer engineer2 = Engineer(firstname, lastname, address);
    engineer2.display();
    cout << "--------------------------------------------------------------------------------------" << endl;
}