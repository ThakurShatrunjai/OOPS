#include<iostream>
using namespace std;

int count = 0;
class Alpha
{
    public:
    Alpha()
    {
        count++;
        cout<<"\n The no of objects created: "<<count;
    }

    ~Alpha()
    {
         cout<<"\n The no of objects destroyed: "<<count;
         count--;
    }
};

int main()
{
    Alpha A1,A2,A3;
}
