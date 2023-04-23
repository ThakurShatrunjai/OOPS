#include<iostream>
using namespace std;

class Example
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
            cout<<a<<" and "<<b<<endl;
        }
        Example operator + (Example e)
        {
            Example m;
            m.a = a+e.a;
            m.b = b+e.b;
            return(m);
        }
};

int main()
{
    Example E1,E2,E3;
    E1.getdata(10,20);
    E1.display();
    E2.getdata(100,200);
    E2.display();
    E3 = E1 + E2; //E3 = E1.sum(E2);
    E3.display();
}
