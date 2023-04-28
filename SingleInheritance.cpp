#include<iostream>
using namespace std;

class A
{
        int a,b;
    public:
        void getdata(int x,int y)
        {
            a = x;
            b = y;
        }
        void display()
        {
            cout<<a<<" "<<b<<endl;
        }
};

class B: public A
{
    public:
        void show()
        {
            cout<<"\n The show from B class\n";
        }
};

int main()
{
    A A1;
   // A1.getdata(10,20);
   // A1.display(); 
    B B1;
    B1.show();
    B1.getdata(100,200);
    B1.display();
   // A1.show();
}
