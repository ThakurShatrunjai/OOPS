#include<iostream>
using namespace std;
template<class T>
class Example
{
        T a,b;
    public:
        void getdata(T x, T y)
        {
            a = x;
            b = y;
        }
        void display()
        {
            cout<<a<<" "<<b<<endl;
        }
};

int main()
{
    Example<int> E1;
    E1.getdata(10,20);
    E1.display();

    Example <float> E2;
    E2.getdata(3.4,7.6);
    E2.display();

    Example<string> E3;
    E3.getdata("SRM","India");
    E3.display();
}
