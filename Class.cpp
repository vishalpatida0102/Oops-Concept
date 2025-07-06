#include<iostream>
using namespace std;

class firstClass{
    public:
    // Data members
    int a;
    int b;
    string s;
};

int main()
{
    firstClass obj; // Creating an object of firstClass
    // Assigning values to the data members

    obj.a=10;
    obj.b=20;
    obj.s="vishal Patidar";

    cout<<obj.a<<obj.b<<obj.s<<endl;
    return 0;

}

