#include<iostream>
#include<conio.h>
using namespace std;
class student
{

public:
     int age;
    int id;
    void setdata(int s,int i)
    {
        age=s;
        id=i;
    }
    student operator =(student s)
    {
       age=s.age;
       id=s.id;
    }
};
int main()
{
    student s1;
    s1.setdata(18,211055);
    student s2;
    s2=s1;
    cout<<"student detail of first student "<<s1.age<<"  "<<s1.id<<endl;
    cout<<"student detail of second student"<<s2.age<<"  "<<s2.id<<endl;
    getch();
}
