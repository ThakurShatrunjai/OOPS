#include<iostream>
using namespace std;
void display()
{
    int i;
    cout<<"Enter the number: ";
    cin>>i;
    try
    {
        if(i==1)
            throw 1;
        else if(i==2)
            throw 2.1;
        else 
            throw 'a';
    }
    catch(...)
    {
        cout<<"Rethrowing the exceptions\n";
        throw;
    }
}
int main()
{
    try
    {
        display();
    }
    catch(...)
    {
        cout<<"All exceptions are handled in main function\n";
    }
    
}
