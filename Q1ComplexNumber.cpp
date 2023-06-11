/*Define a class Complex to represent a complex number. Declare instance member 
variables to store real and imaginary part of a complex number, also define instance 
member functions to set values of complex number and print values of complex number*/

#include<iostream>
using namespace std;

class Complax
{
    int a,b;
    public:
        int setA(int x)
        {
            a=x;
        }
        int setB(int y)
        {
            b=y;
        }

        void print()
        {
            cout<<"number is = "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main()

{
    Complax c;
    c.setA(2);
    c.setB(5);
    c.print();
    return 0;
}