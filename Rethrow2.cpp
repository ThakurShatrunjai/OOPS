#include<iostream>
using namespace std;
void divide(double x,double y)
{
    cout<<"Inside divide function\n";
    try
    {
        if(y==0.0)
            throw y;
        else
            cout<<"The division is: "<<x/y<<endl;
    }
    catch(double)
    {
        cout<<"Inside catch\n";
        throw;
    }

}
int main()
{
    cout<<"Inside Main function\n";
    try
    {
        divide(5.5,2.1);
        divide(4.5,0.0);
    }
    catch(double)
    {
        cout<<"Double Exception Handled\n";
    }
}
