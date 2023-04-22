#include<iostream>
using namespace std;
class Add
{
    private:
        int a,b;
    public:
        void getdata();
        void display()
        {
            int s;
            s = a+b;
            cout<<"\n The sum is: "<<s;
        }
};
void Add::getdata()
{
    cout<<"\n Enter the two numbers: ";
    cin>>a>>b;
}
int main()
{
    Add A1; 
    A1.getdata();
    A1.display();
}
