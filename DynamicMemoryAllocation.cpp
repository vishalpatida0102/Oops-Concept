
#include<iostream>
using namespace std;

class DynamicMemoryAllocation {

      public:

      int a;
      string name;
};

int main()
{
    DynamicMemoryAllocation *obj= new DynamicMemoryAllocation;
     // Dynamically allocating memory for an object of DynamicMemoryAllocation

     obj->a=10; // Assigning value to the data member 'a'
     obj->name="Vishal Patidar"; // Assigning value to the data member 'name'   

     // other way to access data members
    //  (*obj).a=20;
    //  (*obj).name="Vishal Patidar 2"; // Assigning value to the data member 'name' using dereferencing

    cout<<obj->a<<" "<<obj->name<<endl;

}