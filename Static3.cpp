#include<iostream>
using namespace std;

class Myclass{
    static int count;
    public:
        void getdata()
        {
            count++;
        }

};

int Myclass::count;

int main()
{
    cout<<Myclass::count;
}
