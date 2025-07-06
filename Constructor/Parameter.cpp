


#include<iostream>
using namespace std;        

class constructorParameter{
    public:

    int a;
    string name ;

    constructorParameter(int a,string name)
    {
        cout<<"Parameter constructor called"<<endl;
        this->a=a;
        this->name=name;
    }
};

int main()
{
    constructorParameter obj(10,"vishal Patidar");

    cout<<"Value of a: "<<obj.a<<endl;
    cout<<"Value of b: "<<obj.name<<endl;


}

// Default constructor is called when an object is created without any arguments.
// It initializes the data members to their default values (0 for int, empty for string, etc.)
// In this case, the default constructor is explicitly defined to print a message when called.
// name of thr constructor is same as the class name.
//No any return type for constructor.