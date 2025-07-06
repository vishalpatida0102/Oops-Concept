
#include<iostream>
using namespace std;


 // two or more Base classes and one derived class


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

int main()
{
    Dog d;
    d.eat();  // Inherited from Animal class
    d.status ();
    d.bark(); // Puppy class method
}
