#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class complex
{
private:
    int a,b;
public:
    friend ostream& operator <<(ostream &, complex);
    friend istream& operator >>(istream &, complex);
};
ostream& operator<<(ostream &dout,complex c)
{
    cout<<"\n a="<<c.a<<"\nb="<<c.b;
    return dout;
}
istream& operator>>(istream &din ,complex c)
{
    cin>>c.a>>c.b;
    return din;
}
int main()
{
    complex c1;
    cout<<"enter a complex number";
    cin>>c1;
    cout<<"you entered";
    cout<<c1;
    getch();
}
