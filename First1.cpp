#include<iostream>
using namespace std;

class Example
{
	int a;
	float b;
	public:
		void getdata(){
			a = 10;
			b = 4.4;
		}
		void display(){
			cout<<a<<endl<<b;
		}
};

int main()
{
	Example E;
	E.getdata();
	E.display();
}
