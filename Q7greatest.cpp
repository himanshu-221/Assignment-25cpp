/*Define a class Greatest and define instance member function to find Largest among 3 
numbers using classes.*/
#include<iostream>
using namespace std;
class Greatest
{
    int num1,num2,num3,max;
    public:
        Greatest(int a,int b,int c=0)
        {
            num1=a;num2=b;num3=c;
        }
        void greatest()
        {
            max = (num1>num2) ? (num1>num3 ? num1 : num3) : (num2>num3 ? num2 : num3);
        }
        void print()
        {
            cout<<"Greatest among "<<num1<<","<<num2<<" and "<<num3<<" is "<<max<<endl; 
        }
};
int main()
{
    Greatest g(12,6,78);
    g.greatest();
    g.print();
    return 0;
}