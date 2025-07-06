


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

    void display()
    {
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
    }   
};
 
int main()
{
    constructor obj1, obj2(10,20),obj(200);

    obj1.display(); // Calls the default constructor
    obj2.display(); // Calls the parameterized constructor with two arguments           
    obj.display(); // Calls the parameterized constructor with one argument


    // constructor overloading means same name but different parameters.


}

 