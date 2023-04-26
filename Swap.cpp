#include<iostream>
using namespace std;

class Swap
{
        int a,b;
    public:
        void getdata();
        void display();
};

void Swap::getdata()
{
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    cout<<"The numbers before swapping are: "<<a<<"\t"<<b;
}
void Swap::display()
{
    int t;
    t=a;
    a=b;
    b=t;
    cout<<"\n The numbers after swapping are: "<<a<<"\t"<<b;
}

int main()
{
    Swap S;
    S.getdata();
    S.display();
}
