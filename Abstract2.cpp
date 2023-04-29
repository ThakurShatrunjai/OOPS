#include<iostream>
using namespace std;
class A
{
    public:
        virtual void display()=0;
        void show()
        {
            cout<<"The show function in class A"<<endl;
        }
};

class B:public A
{
    public:
        void display()
        {
             cout<<"The display function in class B"<<endl;
        }
};
int main()
{
    B B1;
    B1.display();
    B1.show();
}
