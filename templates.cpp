#include<iostream>
#include<conio.h>
using namespace std;
template <class tem>
tem big(tem a,tem b)
{
if(a>b)
    return a;
else
    return b;
}
int main()
{
    cout<<big(4,5)<<endl;
    cout<<big(5.6,3.4)<<endl;

    getch();
}
