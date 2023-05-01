#include<iostream>
using namespace std;
int main()
{
    try
    {
        cout<<"Try Block\n";
        throw 1;
    }
    catch(int e)
    {
        cout<<"Exception Handled: "<<e<<endl;
    }
}
