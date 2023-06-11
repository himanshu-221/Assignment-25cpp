/*Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate 
number of instance member variables and also define instance member functions to set 
values for time and display values of time.*/
#include<iostream>
using namespace std;
class Time
{
    int hr,min,sec;
    public:
        void setHr(int x)
        {
            hr=x;
        }
        void setMin(int y)
        {
            min=y;
        }
        void setSec(int z)
        {
            sec=z;
        }
        void print()
        {
            cout<<"Time is "<<hr<<" hr "<<min<<" min "<<sec<<" sec "<<endl;
        }
};

int main()
{
    Time t;
    int a,b,c;
    cout<<"Enter time in hour minutes and seconds"<<endl;
    cin>>a>>b>>c;
    t.setHr(a);
    t.setMin(b);
    t.setSec(c);
    t.print();
    return 0;
}