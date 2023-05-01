// a = 3.14*r*r;

#include<iostream>
using namespace std;
template<class T>
float area(T x)
{
    float a = 3.14*x*x;
    return(a);
}
int main()
{
    float a1 = area(2);
    cout<<"The area of circle is:"<<a1<<endl;
    float a2 = area(2.3);
    cout<<"The area of circle is:"<<a2<<endl;
}
