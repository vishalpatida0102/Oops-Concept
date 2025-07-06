
#include<iostream>
using namespace std;        

class Destructor{
    public:

    int a;
    int *b;

    Destructor()
    {
        a=10;
        b=new int ;
        *b=20;
    }

    ~Destructor()// destructor
    {
        cout<<"Destructor called"<<endl;
        delete b; // Freeing dynamically allocated memory
        // Destructor is called when the object goes out of scope or is deleted.
        // It is used to release resources, such as memory, file handles, etc.
        // In this case, it deletes the dynamically allocated memory for 'b'.

        // automatically called 
        // it is last function called when object is destroyed
        //compiler automatically bana deta he pr aab hm ne bana diya to vo nhi banayega;
    }
};

int main()
{
    Destructor obj; // Creating an object of Destructor class
    cout << "Value of a: " << obj.a << endl; // Accessing data member 'a'
    cout << "Value of b: " << *(obj.b) << endl; // Accessing dynamically allocated memory pointed by 'b'

    // Destructor will be called automatically when the object goes out of scope
    return 0; // Exiting main function
}