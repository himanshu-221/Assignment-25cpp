/*Define a class Square to find the square of a number and write a C++ program to Count 
number of times a function is called.*/
#include<iostream>
using namespace std;

class Square
{
    int num,sq;
    static int count;
    public:
        void setNum(int n)
        {
            num=n;
        }
        void square()
        {
            sq=num*num;
            count++;
        }
        void printsq()
        {
            cout<<"Square of "<<num<<" is "<<sq<<endl;
        }
        void print()
        {
            cout<<"Square method is called "<<count<<" times"<<endl;
        }

};
int Square::count=0;
int main()
{
    Square sq;
    sq.setNum(12);
    sq.square();
    sq.square();
    sq.square();
    sq.print();
    sq.printsq();
    return 0;
}