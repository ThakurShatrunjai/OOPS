#include<iostream>
using namespace std;
class A
{
    public:
        void display()
        {
            cout<<"Display function in class A"<<endl;
        }
};
int main()
{
    A A1,*P;
    P = &A1;
    P->display();

}
