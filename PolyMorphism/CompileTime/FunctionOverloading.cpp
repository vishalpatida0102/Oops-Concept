
#include<iostream>
using namespace std;

// same name but different parameters or different return types
// is called function overloading

class Calculation{

    public:

    void Calculate(int a, int b){
        cout << "Sum: " << a + b << endl;
    }

    void calculate(int a,int b)
    {
        cout<< "Difference: " << a - b << endl;
    }
};

int main()
{
    Calculation calc;
    calc.Calculate(10, 5); // Calls the first function
    calc.calculate(10, 5); // Calls the second function

    return 0;
}