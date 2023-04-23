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
        void display();
};

inline void Example::display()
{
    cout<<a<<b<<endl;
}

int main()
{
    Example E1,E2;
    E2.display();
    E1.getdata(10,20);
    E1.display();
}
