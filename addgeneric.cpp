#include<iostream>
using namespace std;
template<class T1,class T2>
float sum(T1 x,T2 y)
{
    float s = x+y;
    return(s);
}
int main()
{
    float r1 = sum(10,20.4);
    cout<<"The sum is "<<r1<<endl;
    float r2 = sum(10.4,20);
    cout<<"The sum is "<<r2<<endl;
}
