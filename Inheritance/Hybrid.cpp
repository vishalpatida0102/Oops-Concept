
#include<iostream>
using namespace std;


 
// two or more inheritance 


class Animal{

    
    public:
    int a=10;
    void eat()
    {
        cout<<"Animal is eating"<<endl;
    }
};

class Omnivors {
    public:
     
    void status()
    {
        cout<<"i am Omnivors"<<endl;
    }
};

class Dog: public Animal,public Omnivors{
    public:
     
    void bark()
    {
        cout<<"Dog is Barking"<<endl;
    }
};

class cat : public Omnivors{
    public:
    void meou()
    {
        cout<<"cat is meou"<<endl;
    }
};

class mouse: public cat{
    public :
    void squeak()
    {
        cout<<"mouse is squeaking"<<endl;
    }
};

int main()
{
    Dog d;

    cat c;

    d.eat();  // Inherited from Animal class
    d.status ();
    d.bark();  // Dog's own method
    c.meou(); // Cat class method
    c.status(); // Cat class method

    mouse m;
    m.squeak(); // Mouse class method
    m.meou(); // Cat class method inherited by mouse
    m.status(); // Omnivors class method inherited by mouse
    
}
