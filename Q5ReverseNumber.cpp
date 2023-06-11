/*Define a class ReverseNumber and define an instance member function to find Reverse 
of a Number using class.*/
#include<iostream>
using namespace std;
class ReverseNumber
{
    int num,reverse=0;
    public:
        ReverseNumber(int n)
        {
            num=n;
        }  
        void Reverse()
        {
            int n=num;
            while(n)
            {
                reverse = reverse*10+ n%10;
                n=n/10;
            }
        }
        void print()
        {
            cout<<"Reverse of "<<num<<" is "<<reverse<<endl;
        }
};
int main()
{
    ReverseNumber r(12796);
    r.Reverse();
    r.print();
    return 0;
}