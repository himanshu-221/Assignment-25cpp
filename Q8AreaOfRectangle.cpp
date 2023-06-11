/*Define a class Rectangle and define an instance member function to find the area of the 
rectangle.
*/
#include<iostream>
using namespace std;
class Rectangle
{
    int l,b,area;
    public:
        void setLenght(int x){
            l=x;
        }
        void steBreath(int y)
        {
            b=y;
        }
        void Area()
        {
            area=l*b;
        }
        void print()
        {
            cout<<"area is "<<area<<endl;
        }
};
int main()
{
    Rectangle r;
    r.setLenght(12);
    r.steBreath(4);
    r.Area();
    r.print();
    return 0;
}