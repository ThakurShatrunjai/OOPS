#include<iostream>
using namespace std;

class SOD
{
        long int n;
    public:
        void getdata();
        void display();
};

void SOD::getdata()
{
    cout<<"Enter the number: ";
    cin>>n;
}

void SOD::display()
{
    int i=0;
    int sum = 0;
    while(n>0)
    {
        int a = n%10;
        sum = sum+a;
        n=n/10;
    }
    cout<<"The sum of digits is: "<<sum;
}

int main()
{
    SOD S;
    S.getdata();
    S.display();
}
