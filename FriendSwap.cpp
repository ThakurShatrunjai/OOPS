#include<iostream>
using namespace std;
class Class2;

class Class1
{
        int a;
    public:
        void getdata(int x)
        {
            a = x;
        }
        void display()
        {
            cout<<"The value is "<<a<<endl;
        }
        friend void swap(Class1,Class2);
};

class Class2
{
        int b;
    public:
        void getdata(int y)
        {
            b = y;
        }
        void display()
        {
            cout<<"The value is "<<b<<endl;
        }
        friend void swap(Class1,Class2);
};


void swap(Class1 X,Class2 Y)
{
    int t = X.a;
    X.a = Y.b;
    Y.b = t;
    cout<<"\n The values after swapping are: "<<X.a<<" and "<<Y.b;
}

int main()
{
    Class1 C1;
    Class2 C2;
    C1.getdata(10);
    C2.getdata(20);
    C1.display();
    C2.display();
    swap(C1,C2);

}
