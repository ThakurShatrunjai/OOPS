#include<iostream>
using namespace std;
class Father
{
        int a;
    public:
        int b;
        void get_ab(int,int);
        int get_a();
};
class Child:private Father
{
        int c;
    public:
        void mul();
        void display();
};

void Father::get_ab(int x,int y)
{
    a = x;
    b = y;
}

int Father::get_a()
{
    return(a);
}
void Child::mul()
{
    get_ab(10,20);
    c = b*get_a();
}
void Child::display()
{
    cout<<"a: "<<get_a()<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;
}

int main()
{
    Child C1;
    C1.mul();
    C1.display();
}
