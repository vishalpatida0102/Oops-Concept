
#include<iostream>
using namespace std;

class Animal{

    public:
    virtual void speak() // virtual function
    {
        // virtual kryword nhi lagayenge to vo compiletime pe hi decide
        // kr lega ki mujhe animal ka speak function call krna hai
      cout<<"huuuu"<<endl;

    }
};

class Dog: public Animal{

    public:

    void speak()
    {
        cout<<"bark"<<endl;
    }
};


int main()
{
    Animal *obj;
  

    obj=new Dog(); // first way


    // Dog d;  // Not Use mostly
    // obj=&d;  // second way
      obj->speak(); // output: huuu, when not using virtual keyword
    // obj->speak(); // output: bark, when using virtual keyword in base class function

    
}
