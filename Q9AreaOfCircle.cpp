/*Define a class Circle and define an instance member function to find the area of the 
circle*/
#include<iostream>
using namespace std;
class Circle
{
    int radius,area;
    public:
         void setRadius(int r)
         {
            radius=r;
         }
        void Area()
        {
            area = 3.14*radius*radius;
        }
        void print()
        {
            cout<<"Area of Circle is "<<area<<endl;
        }
};
int main()
{
    Circle c;
    c.setRadius(5);
    c.Area();
    c.print();
    return 0;
}