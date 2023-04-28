#include<iostream>
using namespace std;

class Father
{
    public:
        void vechile()
        {
            cout<<"Scooter"<<endl;
        }
};

class Son:public Father
{
    public:
        void vechile()
        {
            cout<<"Bike"<<endl;
        }
};

int main()
{
    Son S;
    S.vechile();
}
