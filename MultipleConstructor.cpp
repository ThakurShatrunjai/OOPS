#include<iostream>
using namespace std;

class Multiple
{
        int a,b;
    public:
        Multiple();
        Multiple(int,int);
        void display()
        {
            cout<<a<<" "<<b<<endl;
        }

};

Multiple::Multiple()
{
    cout<<"Enter the two numbers:";
    cin>>a>>b; 
}
Multiple::Multiple(int x,int y)
{
    a = x;
    b = y;
}

int main()
{
    Multiple M1;
    M1.display();
    Multiple M2(10,20);
    M2.display();
}
