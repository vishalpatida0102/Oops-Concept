

#include<iostream>
using namespace std;


// base-derived1-derived2
// one base class ,multiple derived classes


class Human{
   
    public:
    string name;

    void display()
    {
        cout<<"Name: "<<name<<endl;
    }
    

};

class Youtuber : public virtual Human {
    public:
     int subscribers;
    void content()
    {
        cout<<"Teaching related"<<endl;
    }
};

class Engineer: public virtual Human{
    public:
     int salary;
     string specialization;
    void work()
    {
        cout<<"Software enginerr develop software"<<endl;
       
          
    }
};


class person : public Youtuber, public Engineer{
    public:

    person(string n, int sub, int sal, string spec)
    {
       this-> name = n; // name access kr rhe to ambiguity error aa 
       // rha he jise dimond problem kehte he 
       // name do class ke dwara access ho rha he 
       // to confution ho rha he konsi class ka access krna he
       // to virtual key word ka use kr ke hm is proble ko solve kr
       // sakte he , virtual keyword se copy nhi banegi vo unique hi rhega
       // to easy acces ho jayega, no confution 
       this-> subscribers = sub;
        this->salary = sal;
        this->specialization = spec;
    }
    void details()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Subscribers: "<<subscribers<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Specialization: "<<specialization<<endl;
    }
};
int main()
{
    person p("John Doe", 100000, 80000, "Software Engineering");
    
    p.display(); // From Human class
    p.content(); // From Youtuber class
    p.work();    // From Engineer class
    p.details(); // Person class method to display all details

    return 0;
}
