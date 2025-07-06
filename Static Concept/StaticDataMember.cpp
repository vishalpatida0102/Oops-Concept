#include<iostream>
using namespace std;    


class customer{
    int a;
    int b;

    public:
    static int count;


    customer(int x,int y)
    {
        this->a=x;
        this->b=y;
        count++;
    }


    void display()
    {
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
        cout<<"Total customers created: "<<count<<endl;
    }


};

int customer::count=0; // Initializing static data member outside the class
int main()
{
    customer a1(10,20);
    customer a2(30,40);
    a1.display();
    customer a3(50,60);  
    
    
    a2.display();   
    a3.display();

    // static ko hm without object bhi access kr sakte he
    cout<<"Total customers created: "<<customer::count<<endl; // Accessing static data member without object


}
