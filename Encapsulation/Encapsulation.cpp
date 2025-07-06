
#include<iostream>
using namespace std;


class Bank{
    private:
  // data members ko public kr denge to use invalid data bhi nsert ker
  // skta he is liye private kr te he
  // memeber function ki madat se user ke data pahle check kr ke 
  // valid data insert krte he;
    int balance;
    string name;
    int age;


    public:

    void addBalance(int am)
    {
        if(am>0)
        {
            balance+=am;
        }
        else
        {
            cout<<"Invalid amount"<<endl;
        }
    }

    void updateAge(int a)
    {
        if(a>0 && a<=100)
        {
            this->age=a;
        }
        else
        {
            cout<<"Invalid age"<<endl;
        }
    }

    void updateName(string n)
    {
        if(n.length()>0)
        {
            this->name=n;
        }
        else
        {
            cout<<"Invalid name"<<endl;
        }
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};


int main()
{
    Bank o1;

    o1.addBalance(1000);
    o1.updateAge(25);
    o1.updateName("Amit Kumar");

    o1.display();




}


// encapsulation is the concept of restricting to access the data 
// members of a class but acess the public memeber;
// this is use for store the valid data in the class;
