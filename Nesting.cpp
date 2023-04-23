#include<iostream>
using namespace std;

class Example
{
	private:
		int a;
		float b;
	public:
		void getdata();
		void display();
};

void Example::getdata()
{
	a = 10;
	b = 20.80;
	display();
}

void Example::display()
{
	cout<<"The numbers are: "<<a<<endl<<b;
}

int main()
{
	Example E;
	E.getdata();
}
