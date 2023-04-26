#include<iostream>
using namespace std;

class Item
{
        static int count;
        int n;
    public:
        void getdata(int a)
        {
            n = a;
            count++;
        }
        void display()
        {
            cout<<"\nThe Count is: "<<count;
        }

};

int Item::count=10;

int main()
{
    Item I1,I2;
    I1.display();
    I2.display();

    I1.getdata(10);
    I2.getdata(20);

    cout<<"\n After the values: ";
    I1.display();
    I2.display();
}
