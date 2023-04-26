#include<iostream>
using namespace std;
class Student
{
    protected:
        int r;
    public:
        void get_number(int x)
        {
            r = x;
        }
        void put_number()
        {
            cout<<"The roll number: "<<r<<endl;
        }
};
class Test:virtual public Student
{
    protected:
        int sub1,sub2;
    public:
        void get_marks(int x,int y)
        {
            sub1 = x;
            sub2 = y;
        }
        void put_marks()
        {
             cout<<"The sub1: "<<sub1<<endl;
             cout<<"The sub2: "<<sub2<<endl;
        }
    
};

class Sports:virtual public Student
{
    protected:
        int score;
    public:
        void get_score(int s1)
        {
            score = s1;
        }
        void put_score()
        {
             cout<<"The socre: "<<score<<endl;   
        }
};
class Result:public Test,public Sports
{
    int total;
    public:
        void display()
        {
            total = sub1+sub2+score;
             cout<<"The total marks: "<<total<<endl;
        }
};
int main()
{
    Result R1;
    R1.get_number(1);
    R1.put_number();
    R1.get_marks(87,86);
    R1.put_marks();
    R1.get_score(20);
    R1.put_score();
    R1.display();
}
