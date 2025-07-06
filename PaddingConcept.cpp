
#include<iostream>
using namespace std;        

class PaddingConcept{
    public:
    // Data members
    int a; // 4 bytes
    char b; // 1 byte
    double c; // 8 bytes
    char d; // 1 byte
};

int main()
{
    PaddingConcept obj; // Creating an object of PaddingConcept
    cout << "Size of PaddingConcept: " << sizeof(obj) << " bytes" << endl;
    
    // Displaying the size of each data member
    cout << "Size of int a: " << sizeof(obj.a) << " bytes" << endl;
    cout << "Size of char b: " << sizeof(obj.b) << " bytes" << endl;
    cout << "Size of double c: " << sizeof(obj.c) << " bytes" << endl;
    cout << "Size of char d: " << sizeof(obj.d) << " bytes" << endl;

    return 0;
}

// Note: size of class is not direct sum of its data members bytes But is allocate the memory in segmannts
// Because speed of execution is more important than memory usage in most cases.
//this concept is known as "Padding" in C++.
// it depends on the compiler ans architecture like 32 and 64 bit.
// 