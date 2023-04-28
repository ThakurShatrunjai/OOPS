#include<iostream>
using namespace std;
class Unary
{
        int a;
    public:
        void getdata(int x)
        {
            a = x;
        }
        void display()
        {
            cout<<"The value of a: "<<a<<endl;
        }
        Unary operator-()
        {
            Unary U;
            U.a = -a;
            return(U);
        }
};
int main()
{
    Unary U1,U2;
    U1.getdata(5);
    U1.display();
    U2 = -U1;
    U2.display();
}
