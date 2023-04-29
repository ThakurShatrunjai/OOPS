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
    // A A1; can't create object of class A
    B B1;
    B1.display();
}
