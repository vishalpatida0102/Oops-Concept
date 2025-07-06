
#include<iostream>
using namespace std;        

class constructor{
    public:

    int a;
    int b;

    constructor()
    {
        cout<<"Default constructor called"<<endl;
         
        this->a=0;
        this->b=0;
    }

    
    void display()
    {
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
    }   
};
 
int main()
{
    constructor obj1 ;

    obj1.display(); // Calls the default constructor
     

 


}

// Default constructor is called when an object is created without any arguments.
// It initializes the data members to their default values (0 for int, empty for string, etc.)
// In this case, the default constructor is explicitly defined to print a message when called.
// name of thr constructor is same as the class name.
//No any return type for constructor.