
#include<iostream>
using namespace std;


// base-derived1-derived2


class Animal{

    
    public:
    int a=10;
    void eat()
    {
        cout<<"Animal is eating"<<endl;
    }
};

class Dog : public Animal{
    public:
    int b=a;
    void bark()
    {
        cout<<"Dog is barking"<<endl;
    }
};

class puppy: public Dog{
    public:
     
    void play()
    {
        cout<<"Puppy is playing"<<endl;
        cout<<a;
        cout<<b; // access base class member variable
        // cout<<Dog::a; // access base class member variable using scope resolution operator
    }
};

int main()
{
    puppy d;
    d.eat();  // Inherited from Animal class
    d.bark(); // Dog's own method
    d.play(); // Puppy class method
}
