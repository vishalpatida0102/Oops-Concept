#include<iostream>
using namespace std;    


class customer{
    int a;
    int b;
    static int total_customers;
    static int total_balance;

    public:
    


    customer(int x,int y,int amount)
    {
        this->a=x;
        this->b=y;
        this->total_balance+=amount;
        total_customers++;

    }

    static void accesStatic()
    {
        cout<<"total customers: "<<total_customers<<endl;
        cout<<"total balance: "<<total_balance<<endl;
        // static function can only access static data members
    }

    void deposite(int amount)
    {
        total_balance+=amount;
    }
    void withdraw(int amount)
    {
        if(amount<=total_balance && amount>=0)
        {
            total_balance-=amount;
        }
        else
        {
            cout<<"Insufficient balance or invalid amount"<<endl;
        }
    }
    




    void display()
    {
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
        
    }


};

int customer::total_customers=0; // Initializing static data member outside the class
int customer::total_balance=0;
int main()
{
    customer a1(10,20,1000);
    customer a2(30,40,100);
    customer a3(50,60,10);  
     
    a1.deposite(1000);
    a2.deposite(2000);
    a3.withdraw(500);
    customer::accesStatic(); // Accessing static function without object


}
