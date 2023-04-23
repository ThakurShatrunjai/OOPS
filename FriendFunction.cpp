#include<iostream>
using namespace std;

class Sample
{
        int a,b;
    public:
        void getdata()
        {
            a = 10;
            b = 20;
        }
        friend void mean(Sample);
};

void mean(Sample S)
{
     int m = (S.a+S.b)/2.0;
     cout<<"\n The mean is: "<<m;
}   

int main()
{
    Sample S1;
    S1.getdata();
    mean(S1);
}
