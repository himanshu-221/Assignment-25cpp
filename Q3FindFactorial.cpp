/* Define a class Factorial and define an instance member function to find the Factorial of a 
number using class.
*/
#include<iostream>
using namespace std;

class Factorial
{
    int f;
    public:
        void setF(int a)
        {
            f=a;
        }
        int fact()
        {
            int temp=1;
            while(f>0)
            {
                temp*=f;
                f--;
            }
            return temp;
        }
};

int main()
{
    Factorial f1;
    int a;
    cout<<"Enter a number to calculate Factorial"<<endl;
    cin>>a;
    f1.setF(a);
    cout<<"Factorial of "<<a<<" is "<<f1.fact()<<endl;
    return 0;
}