// Inheritance and Polymorphism at different levels
    /*
        Inheritance and Polymorphism at Different levels

                                                Animal
                                               /      \
                                              /        \
                                             /          \
                                            /            \
                                    Land (runs)          Aquatic (swims)
                                       /    \              /     \
                                      /      \            /       \
                                     /        \          /         \
                                    /          \        /           \
                                 Cheetah      Sloth   Whale      Gold fish

        This example showcases Inheritance and Polymorphism at Different levels
    */

/*
    Final Keyword

    To restrict how you override methods in a derived class or
    To restrict how you derive from a base class

    1. We can create an independent class and mark it final to make it infertile
    2. We can have a useless virtual function in a final class
        useless because it can't be inherited but vitual keyword is used for inheriting and overriding
    3. We can also have virtual final functions without compiler error
        final wins here and the function can't be overridden in its child class
*/

/*
    Virtual Destructors

    Generally, when we create a Cheetah object, at the end of the code, all the
    destructors i.e. Cheetah, Land_Animal, Animal will be called -> for normal destructors

    But when we are using Polymorphism, we use animal pointer to denote a Cheetah object
    But, in this version, only the Animal destructor will be called -> this is BAD

    Solution: use virtual destructors
*/

/*
    Dynamic Cast<>()

    1. Transform a base class pointer or reference to a derived class pointer or reference, at run time
    2. Makes it possible to call non polymorphic functions on derived objects

    Overuse of downcasting is a sign of BAD design, if you find yourself doing this a lot to
    call polymorphic functions on derived objects, may be you should make that function 
    polymorphic in the first place

    Use DYNAMIC CAST in an Inheritance Hierarchy that supports Virtual Functions
    The input and output must be part of the same Polymorphic Inheritance Hierarchy
*/

#include <iostream>
#include <string>
using namespace std;

class Animal
{
    public:
        Animal() = default;
        Animal(const string& description)
        {
            this->description = description;
        }
        virtual void breathe()
        {
            cout << "Animal :: breathe.  " << description << " breathes" << endl;
        }
        virtual ~Animal()
        {
            cout << "~Animal() called. Animal Destructor" << endl;
        }
    
    protected:
        string description;
};

class Land_Animal : public Animal
{
    public:
        Land_Animal() = default;
        Land_Animal(const string& description)
        {
            this->description = description;
        }
        virtual void breathe() override
        {
            cout << "Land_Animal :: breathe.  " << description << " breathes" << endl;
        }
        virtual void run()
        {
            cout << "Land_Animal :: run.  " << description << " runs" << endl;
        }
        void human()
        {
            cout << "Humans are also Land Animals" << endl;
        }
        virtual ~Land_Animal()
        {
            cout << "~Land_Animal() called. Land_Animal Destructor" << endl;
        }
};

class Aquatic_Animal : public Animal
{
    public:
        Aquatic_Animal() = default;
        Aquatic_Animal(const string& description)
        {
            this->description = description;
        }
        // By adding this final key word to the breathe function in Aquatic_Animal class
        // We restricted the ability of the children of the Aquatic_Animal class to override this function
        // This is the last override of the breathe function
        virtual void breathe() override // final
        {
            cout << "Aquatic_Animal :: breathe.  " << description << " breathes" << endl;
        }
        virtual void swim()
        {
            cout << "Aquatic_Animal :: swim.  " << description << " swims" << endl;
        }
        virtual ~Aquatic_Animal()
        {
            cout << "~Aquatic_Animal() called. Aquatic_Animal Destructor" << endl;
        }
};

class Cheetah : public Land_Animal
{
    public:
        Cheetah() = default;
        Cheetah(const string& description)
        {
            this->description = description;
        }
        virtual void breathe() override
        {
            cout << "Cheetah :: breathe.  " << description << " breathes" << endl;
        }
        virtual void run() override
        {
            cout << "Cheetah :: run.  " << description << " runs" << endl;
        }
        virtual void hunt()
        {
            cout << "Cheetah :: hunt.  " << description << " hunts" << endl;
        }
        virtual ~Cheetah()
        {
            cout << "~Cheetah() called. Cheetah Destructor" << endl;
        }
};

class Sloth : public Land_Animal
{
    public:
        Sloth() = default;
        Sloth(const string& description)
        {
            this->description = description;
        }
        virtual void breathe() override
        {
            cout << "Sloth :: breathe.  " << description << " breathes" << endl;
        }
        virtual void run() override
        {
            cout << "Sloth :: run.  " << description << " runs" << endl;
        }
        virtual void flee()
        {
            cout << "Sloth :: flee.  " << description << " flees" << endl;
        }
        virtual ~Sloth()
        {
            cout << "~Sloth() called. Sloth Destructor" << endl;
        }
};

class Whale : public Aquatic_Animal
{
    public:
        Whale() = default;
        Whale(const string& description)
        {
            this->description = description;
        }
        // If we make the breathe function final in Aquatic_Animal class, we can't override it again
        // in its child classes
        virtual void breathe() override
        {
            cout << "Whale :: breathe.  " << description << " breathes" << endl;
        }
        virtual void swim() override
        {
            cout << "Whale :: swim.  " << description << " swims" << endl;
        }
        virtual void eat()
        {
            cout << "Whale :: eat.  " << description << " eats" << endl;
        }
        virtual ~Whale()
        {
            cout << "~Whale() called. Whale Destructor" << endl;
        }
};

// By adding final here, we made the Gold_Fish infertile (It can't have children)
// Any class can't be derived from this class

class Gold_Fish final: public Aquatic_Animal
{
    public:
        Gold_Fish() = default;
        Gold_Fish(const string& description)
        {
            this->description = description;
        }
        virtual void breathe() override
        {
            cout << "Gold_Fish :: breathe.  " << description << " breathes" << endl;
        }
        virtual void swim() override
        {
            cout << "Gold_Fish :: swim.  " << description << " swims" << endl;
        }
        virtual void die()
        {
            cout << "Gold_Fish :: die.  " << description << " dies" << endl;
        }
        virtual ~Gold_Fish()
        {
            cout << "~Gold_Fish() called. Gold_Fish Destructor" << endl;
        }
};

/*
class Small_goldfish : public Gold_Fish   // compiler error because the class Gold_Fish is marked Final
{
    
};
*/

int main()
{
    /*
    Animal animal("Judo");
    Land_Animal land_Animal("Manny");
    Aquatic_Animal aquatic_Animal("Dory");
    Cheetah cheetah("Diego");
    Sloth sloth("Sid");
    Whale whale("Precious");
    Gold_Fish gold_fish("Nemo");
    */

    /*
    animal.breathe();
    land_Animal.breathe();
    land_Animal.run();
    aquatic_Animal.breathe();
    aquatic_Animal.swim();
    cheetah.breathe();
    cheetah.run();
    cheetah.hunt();
    sloth.breathe();
    sloth.run();
    sloth.flee();
    whale.breathe();
    whale.swim();
    whale.eat();
    gold_fish.breathe();
    gold_fish.swim();
    gold_fish.die();
    */

    // Normal Funciton calling for checking if all are OK
    /*
    Animal * animal_ptr = &animal;
    Land_Animal * land_Animal_ptr = &land_Animal;
    Aquatic_Animal * aquatic_Animal_ptr = &aquatic_Animal;
    Cheetah * cheetah_ptr = &cheetah;
    Sloth * sloth_ptr = &sloth;
    Whale * whale_ptr = &whale;
    Gold_Fish * gold_fish_ptr = &gold_fish;

    animal_ptr->breathe();
    land_Animal_ptr->breathe();
    aquatic_Animal_ptr->breathe();
    cheetah_ptr->breathe();
    sloth_ptr->breathe();
    whale_ptr->breathe();
    gold_fish_ptr->breathe();
    cout << endl;
    land_Animal_ptr->run();
    aquatic_Animal_ptr->swim();
    cheetah_ptr->run();
    sloth_ptr->run();
    whale_ptr->swim();
    gold_fish_ptr->swim();
    cout << endl;
    cheetah_ptr->hunt();
    sloth_ptr->flee();
    whale_ptr->eat();
    gold_fish_ptr->die();
    */
    // DIFFERENT LEVELS OF POLYMORPHISM
    // If we remove the virtual and override key words, we get the base class version in the output
    // showcasing Static Binding
    // Animal Polymorphism
    /*
    cout << "Animal Polymorphism" << endl;
    cout << "============================================================================" << endl;
    Animal * animals [] {&animal, &land_Animal, &aquatic_Animal,
                         &cheetah, &sloth, &whale, &gold_fish};
    for (Animal * animal : animals)
    {
        animal->breathe();
    }
    cout << endl;
    cout << "----------------------------------------------------------------------------" << endl;

    // Land_Animal Polymorphism
    cout << "Land_Animal Polymorphism" << endl;
    cout << "============================================================================" << endl;
    Land_Animal * land_animals [] {&land_Animal, &cheetah, &sloth};
    for (Land_Animal * land_animal : land_animals)
    {
        land_animal->run();
    }
    cout << endl;
    cout << "----------------------------------------------------------------------------" << endl;

    // Aquatic_Animal Polymorphism
    cout << "Aquatic_Animal Polymorphism" << endl;
    cout << "============================================================================" << endl;
    Aquatic_Animal * aquatic_animals [] {&aquatic_Animal, &whale, &gold_fish};
    for (Aquatic_Animal * aquatic_animal : aquatic_animals)
    {
        aquatic_animal->swim();
    }
    cout << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    */

    // With Normal Destructors
    //Sloth sloth("Judo");  // -> Sloth, Land_Animal, Animal destructors will be called.
    //Animal * animal_ptr = new Sloth("Judo");
    //delete animal_ptr;  // -> Only Animal destructor called -> BAD

    // With Virtual Destructors
    //Sloth sloth("Judo");  // -> Sloth, Land_Animal, Animal destructors will be called.
    //Animal * animal_ptr = new Sloth("Judo");
    //delete animal_ptr;  // -> Sloth, Land_Animal, Animal destructors will be called.

    /*
    Animal * animal_ptr = new Land_Animal("Human");
    // animal_ptr->breathe(); // -> Ok as this is polymorphic
    // animal_ptr->human();   -> can't be called as this function is not polymorphic
    // We need to dynamically cast the animal pointer to a Land_Animal pointer
    Land_Animal * land_animal_ptr = dynamic_cast<Land_Animal *>(animal_ptr);
    delete land_animal_ptr;
    if (land_animal_ptr)
    {
        land_animal_ptr->human();  // -> this can be called now  
    }
    else
    {
        cout << "Dynamic Cast Failed" << endl;
    }
    */

    // We can also cast a base class reference to a derived class reference and even
    // a base class reference to a derived class pointer

    /*
    Land_Animal land_animal = Land_Animal("Human2");
    Animal& animal_ref {land_animal};
    // animal_ref.breathe(); // -> Ok as this is polymorphic
    // animal_ref.human();   -> can't be called as this function is not polymorphic
    // one problem if we cast it to a derived class reference
    // no method to check if the cast is done or not
    Land_Animal& land_animal_ref {dynamic_cast<Land_Animal&>(animal_ref)};
    land_animal_ref.human(); // No method to check if this cast is a success
    */

    // Animal reference to a Land_Animal pointer is a better option
    Land_Animal land_animal = Land_Animal("Human2");
    Animal& animal_ref {land_animal};
    Land_Animal * land_animal_ptr {dynamic_cast<Land_Animal *>(&animal_ref)};
    if (land_animal_ptr)
    {
        land_animal_ptr->human();  // Valid even if function is non-polymorphic because of dynamic cast
    }
    else
    {
        cout << "Dynamic cast failed" << endl;
    }
}