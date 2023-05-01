#include<iostream>
using namespace std;
template<class T>
T Add(T a[],int size)
{
    T s = 0;
    for(int i=0;i<size;i++)
    {
        s = s+a[i];
    }
    return(s);
}

int main()
{
    int a1[]={10,20,30,40,50};
    float a2[] = {1.1,2.2,3.3};
    int r1 = Add(a1,5);
    cout<<"The sum :"<<r1<<endl;

    float r2 = Add(a2,3);
    cout<<"The sum :"<<r2<<endl;
}
