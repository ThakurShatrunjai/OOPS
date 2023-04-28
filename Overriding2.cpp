#include<iostream>
using namespace std;
class A
{
    public:
        void f1()
        {
            cout<<"f1 function from class A"<<endl;
        }
        void f2()
        {
             cout<<"f2 function from class A"<<endl;
        }

};
class B:public A
{

    public:
        
        void f1()   // method or function overriding
        {
            cout<<"f1 function from class B"<<endl;
        }
        void f2(int x)  // function Hiding
        {
            cout<<"f2 function from class B"<<endl;
            cout<<x<<endl;
        }
};
int main()
{
    B B1;
    B1.A::f1();
    //B1.f2(3);
    //B1.f2(); error
    B1.A::f2();
}
