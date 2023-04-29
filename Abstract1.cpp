#include<iostream>
using namespace std;

class A
{
    public:
        virtual void display()=0;
};
class B:public A
{
    public:
        void display()
        {
            cout<<"Display function in derived class B"<<endl;
        }
};
int main()
{
    A *P;
    B B1;
    P = &B1;
    P->display();
}
