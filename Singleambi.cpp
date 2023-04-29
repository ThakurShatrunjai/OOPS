#include<iostream>
using namespace std;

class A
{
    public:
        void display()
        {
            cout<<"Display function in class A\n";
        }
};

class B:public A
{
    public:
        void display()
        {
             cout<<"Display function in class B\n";
        }
};

int main()
{
    B B1;
    B1.display();
    B1.A::display();
}
