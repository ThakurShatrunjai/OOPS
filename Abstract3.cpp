#include<iostream>
using namespace std;
class Shape
{
    protected:
        float height,length;
    public:
        virtual void area()=0;
        void getdata(float x,float y)
        {
            height = x;
            length = y;
        }
};
class Rectangle:public Shape
{
    public:
        void area()
        {
            float a = height*length;
            cout<<"\n The area of rectangle is: "<<a<<endl;
        }
};
class Trianle:public Shape
{
    public:
        void area()
        {
            float a = (length*height)/2;
            cout<<"\n The area of triangle is: "<<a<<endl;
        }
};
int main()
{
    Rectangle R;
    R.getdata(5.4,6.3);
    R.area();

    Trianle T;
    T.getdata(2.2,3.3);
    T.area();
}
