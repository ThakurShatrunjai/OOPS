#include<iostream>
using namespace std;
class Add
{
    private:
        int a,b;
         void display();
    public:
        void getdata(int,int);
       
};

void Add::getdata(int x,int y)
{
    a = x;
    b = y;
    display();
}

void Add::display()
{
    int s;
    s = a+b;
    cout<<"\n The sum is: "<<s;
}

int main()
{
   Add A1; 
   int x,y;
   cout<<"\n Enter the two: ";
   cin>>x>>y;
   A1.getdata(x,y);

}
