#include<iostream>
using namespace std;
class A
{
    public:
        void display()
        {
            cout<<"Display function from class A"<<endl;
        }
        virtual void show()
        {
            cout<<"Show function from class A"<<endl;
        }
};
class B:public A
{
    public:
        void display()
        {
            cout<<"Display function from class B"<<endl;
        }
        void show()
        {
            cout<<"Show function from class B"<<endl;
        }
};
int main()
{
    B B1;
    B1.display();
    B1.show();
    A *P;
    P = &B1;
    P->display();
    P->show();
}
