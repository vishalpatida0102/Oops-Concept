

#include<iostream>
using namespace std;


// base-derived1-derived2
// one base class ,multiple derived classes


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

class cat: public Animal{
    public:
     
    void meou()
    {
        cout<<"cat is meou"<<endl;
        cout<<a;
          
        // cout<<Dog::a; // access base class member variable using scope resolution operator
    }
};

int main()
{
    cat d;
    Dog c;
    d.eat(); // Inherited from Animal class
    c.eat(); // Inherited from Animal class
    d.meou(); // Cat class method
    c.bark(); // Dog's own method
}
