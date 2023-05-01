#include<iostream>
using namespace std;
template<class T>
class Sum
{
        T a,b;
    public:
        void getdata(T x,T y)
        {
            a = x;
            b = y;
        }
        T add()
        {
            T s = a+b;
            return(s);
        }
};
int main()
{
    Sum<int> S1;
    S1.getdata(10,20);
    int r1 = S1.add();
    cout<<"The sum :"<<r1<<endl;
    Sum<float> S2;
    S2.getdata(3.2,4.3);
    float r2 = S2.add();
    cout<<"The sum :"<<r2<<endl;
}
