#include<iostream>
using namespace std;

class emptyClass{

};

int main()
{
    emptyClass obj;

    cout<<"size of emptyClass: "<<sizeof(obj)<<endl;
}

// The size of an empty class is 1 byte in C++ to ensure that each object has a unique address.