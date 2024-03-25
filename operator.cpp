#include<iostream>
using namespace std;
class number
{
    private:
    int a,b;
public:
    number(int x,int y)
    {
        a=x;
        b=y;
    }
     number  operator +(number n)
    {
        number N;
        N.a=a+ n.a;
        N.b=b+ n.b;
        return N;
    }
     number  operator -()
    {
        number t;
        t.a=-a;
        t.b=-b;
        return t;
    }
};
int main()
{
    number n1(3,4);
    number n2(5,6),n3,n4;
    n3=n1+n2;
    cout<<n3.a<<n3.b<<endl;
    n4=-n3;
    cout<<n4.a<<n4.b<<endl;
    return 0;
}
