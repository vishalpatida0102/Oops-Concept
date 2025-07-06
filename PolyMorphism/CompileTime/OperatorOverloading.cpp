
#include<iostream>
using namespace std;

class Complex{

    int real,img;

    public:
    Complex(){} // Default constructor is ki jarvat is liye padi
    // kyo ki hmne temp name se aik object banaya hai
    // or hmare pass default constructor nahi hai
    // agr hm ye parametrized constructor nhi bana te to compiler
    //automatically aik default constructor bana deta
    // but hmne aik parametrized constructor bana diya
    // to compiler default constructor nahi banayega
    // or agar hmne aik default constructor nahi banaya

    Complex(int r,int i)
    {
        this->real=r;
        this->img=i;
    }

    void display()
    {
        cout << "Complex Number: " << real << " + " << img << "i" << endl;
    }

    Complex operator+(Complex &c)
    {
        Complex temp; // is me koi parameter nhi hai to ise 
        // default constructor ki jarvat hei

        // second way to write
       // Complex temp(0,0);

        temp.real=this->real+c.real;
        temp.img=this->img+c.img;
        return temp;
    }



};

int main()
{
    Complex c1(10,5), c2(20,10);

    Complex c3=c1+c2;

    c3.display();
}