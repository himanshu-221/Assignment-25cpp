/*Define a class LargestNumber and define an instance member function to find the 
Largest of three Numbers using the class.
*/
#include<iostream>
using namespace std;

class LargestNumber
{
    int n1,n2,n3,max;
    public:
        LargestNumber(int num1,int num2=0,int num3=0)
        {
            n1=num1;
            n2=num2;
            n3=num3;
        }
        void Largest()
        {
            max= (n1>n2) ? (n1>n3 ? n1:n3) : (n2>n3 ? n2 : n3);
        }
        void print()
        {
            cout<<"Largest is "<<max<<endl;
        }
};
int main()
{
    LargestNumber l1(14,31,11);
    l1.Largest();
    l1.print();
    return 0;
}