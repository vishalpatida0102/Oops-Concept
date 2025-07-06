



#include<iostream>
using namespace std;        

class constructor{
    public:

    int a;
    int b;

    constructor()
    {
         
        this->a=0;
        this->b=0;
    }

    constructor(int x, int y)
    {
        a=x;
        b=y;
    }

    constructor(int x)
    { 
        a=x;
        b=100;

    }

    constructor(constructor &obj) // copy constructor:=  by refrence bhej na padta he 
    {
        cout<<"Copy constructor called"<<endl;
        this->a = obj.a;
        this->b = obj.b;
    }

    void display()
    {
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
    }   
};
 
int main()
{
    constructor obj1, obj2(10,20),obj3(200);

    obj1.display(); // Calls the default constructor
    obj2.display(); // Calls the parameterized constructor with two arguments           
    obj3.display(); // Calls the parameterized constructor with one argument


    // By default copy constructor present rhta he 
    constructor obj4;
    obj4=obj1;
    obj4.display();


    // constructor overloading means same name but different parameters.


}

 