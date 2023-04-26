#include<iostream>
using namespace std;
class A
{
    public:
        void display1()
        {
            cout<<"Display1 from class A"<<endl;
        }

};
class B: virtual public A
{
    public:
        void display2()
        {
            cout<<"Display2 from class B"<<endl;
        }

};
class C:public virtual A
{
    public:
        void display3()
        {
            cout<<"Display3 from class C"<<endl;
        }

};
class D:public B,public C
{
    public:
        void display4()
        {
            cout<<"Display4 from class D"<<endl;
        }
};

int main()
{
    D D1;
    D1.display4();
    D1.display3();
    D1.display2();
    D1.display1();
}
