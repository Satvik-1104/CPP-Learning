// Inheritance and Destructors
// We already know that the order in which the constructors and destructors are in reverse order

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

        ~Person()
        {
            cout << "Person Destructor" << endl;
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

        void display()
        {
            Person :: display();
            cout << "Engineer Branch: " << eng_branch << endl;
            cout << "Contract Type: " << contract_type << endl;
        }

        ~Engineer()
        {
            cout << "Engineer Destructor" << endl;
        }

    private:
        string eng_branch;
        string contract_type;
};

class Linguistic_eng : public Engineer
{
    public:
        Linguistic_eng()
        {
            cout << "Linguistic Engineer default constructor" << endl;
        }

        Linguistic_eng(const string& firstname, const string& lastname, const string& address,
                 const string& eng_branch, const string& contract_type,
                 const string& review, const string& knowledge)
            : Engineer(firstname, lastname, address, eng_branch, contract_type)
        {
            this->review = review;
            this->knowledge = knowledge;
            cout << "Linguistic Engineer custom constructor" << endl;
        }

        void display()
        {
            Engineer :: display();
            cout << "Review: " << review << endl;
            cout << "Knowledge: " << knowledge << endl;
        }

        ~Linguistic_eng()
        {
            cout << "Linguistic Engineer Destructor" << endl;
        }

    private:
        string review;
        string knowledge;
};

int main()
{
    string firstname = "Suranjana";
    string lastname = "Barua";
    string address = "D.No: 1-43, That Street, This City";
    string eng_branch = "Linguistic Engineer";
    string contract_type = "Language and Society";
    string review = "OK";
    string knowledge = "Good";
    Person person1 = Person(firstname, lastname, address);
    person1.display();
    cout << "--------------------------------------------------------------------------------------" << endl;
    Engineer engineer1 = Engineer(firstname, lastname, address, eng_branch, contract_type);
    engineer1.display();
    cout << "--------------------------------------------------------------------------------------" << endl;
    Linguistic_eng lin_eng1 = Linguistic_eng(firstname, lastname, address, eng_branch, contract_type,
                                            review, knowledge);
    lin_eng1.display();
    cout << "--------------------------------------------------------------------------------------" << endl;                                    
}