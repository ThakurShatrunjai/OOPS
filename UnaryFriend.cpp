#include<iostream>
using namespace std;

class Friend
{   
        int a;
    public:
        void getdata(int x)
        {
            a = x;
        }
        void display()
        {
            cout<<"\nThe value of a: "<<a;
        }
        friend Friend operator-(Friend &);
};

Friend operator-(Friend & f)
{
    Friend F1;
    F1.a = - f.a;
    return(F1);
}

int main()
{
    Friend F1,F2;
    F1.getdata(4);
    F1.display();
    F2 = -F1;
    F2.display();
}#include<iostream>
using namespace std;

class Friend
{   
        int a;
    public:
        void getdata(int x)
        {
            a = x;
        }
        void display()
        {
            cout<<"\nThe value of a: "<<a;
        }
        friend Friend operator-(Friend &);
};

Friend operator-(Friend & f)
{
    Friend F1;
    F1.a = - f.a;
    return(F1);
}

int main()
{
    Friend F1,F2;
    F1.getdata(4);
    F1.display();
    F2 = -F1;
    F2.display();
}
