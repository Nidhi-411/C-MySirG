#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
    float x,y;
public:
    void getdata()
    {
        cout<<"real part  ";
        cin>>x;
        cout<<endl<<"imaginary part  ";
        cin>>y;
    }
    void showdata()
    {
        cout<<"answer x= "<<x<<" y= "<<y<<"i";
    }
    complex operator +(complex c)
    {
     complex temp;
     temp.x=x+c.x;
     temp.y=y+c.y;
     return temp;
    }
    complex operator -(complex c)
    {
       complex temp;
     temp.x=x-c.x;
     temp.y=y-c.y;
     return temp;
    }
    complex operator *(complex c)
    {
        complex temp;
        temp.x=x*c.x-y*c.y;//(x1+y1i)(x2+y2i)=x1*x2-y1*y2
        temp.y=x*c.y+y*c.x;//x1*y2+y1*x2
        return temp;
    }
    complex operator /(complex c)
    {
        complex temp;
        float qt;
        qt=x*c.x+y*c.y;
        temp.x=(x*c.x+y*c.y)/qt;
        temp.y=(x*c.y-y*c.x)/qt;
        return temp;
    }

};
int main()
{
complex c1,c2,c3;
c1.getdata();
c2.getdata();
c3=c1+c2;
cout<<"\n addition of two complex number"<<endl;
c3.showdata();
c3=c1-c2;
cout<<"\n subtraction of two complex number"<<endl;
c3.showdata();
c3=c1*c2;
cout<<"\n multiplication of two complex number"<<endl;
c3.showdata();
c3=c1/c2;
cout<<"\n division of two complex number"<<endl;
c3.showdata();

}
