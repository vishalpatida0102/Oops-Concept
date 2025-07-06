
#include<iostream>
using namespace std;    

class inlineConstructor{
    public:

    int a;
    string name;

    inline inlineConstructor(int a, string name): a(a),name(name){ 
        cout<<"Inline constructor called"<<endl;
    }
};

int main()
{
     inlineConstructor obj(10,"vishal Patidar");
        cout<<"Value of a: "<<obj.a<<endl;              

        cout<<"Value of name: "<<obj.name<<endl;
        // Using inline constructor to initialize data members directly
        // This constructor is defined inline, meaning it is defined within the class definition.
        // It initializes the data members 'a' and 'name' with the provided values.
        // This is a more concise way to define constructors, especially for simple initializations.
        // Inline constructors are typically used for simple initializations and can improve code readability.
        // The constructor is called when the object 'obj' is created, and it initializes '
}