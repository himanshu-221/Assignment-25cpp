/*Define a class Area and define instance member functions to find the area of the 
different shapes like square, rectangle , circle etc*/
#include<iostream>
using namespace std;
class Area
{
    int radius,lenght,breadth,side,C_area,R_area,S_area;
    public:
        void setRadius(int r)
        {
            radius=r;
        }
        void setLenght(int l)
        {
            lenght=l;
        }
        void setBreadht(int b)
        {
            breadth=b;
        }
        void setSide(int s)
        {
            side=s;
        }
        void Area_of_Circle()
        {
            C_area=3.14*radius*radius;
        }
        void Area_of_Ractangle()
        {
            R_area=lenght*breadth;
        }
        void Area_of_Square()
        {
            S_area=side*side;
        }
        void printCircle()
        {
            cout<<"Area of circle is "<<C_area<<endl;
        }
        void printRectangle()
        {
            cout<<"Area of Reactangle is "<<R_area<<endl;
        }
        void printSquare()
        {
            cout<<"Area of Square is "<<S_area<<endl;
        }

};
int main()
{
    Area a;
    a.setRadius(3);
    a.Area_of_Circle();
    a.printCircle();
    return 0;
}