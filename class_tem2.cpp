#include<iostream>
using namespace std;
template <class tem > class add
{
private:
    struct sum
    {
       tem a;
       tem b;
       tem result;
    };
    sum *s;
public:
    void add(tem a,tem b)
    {
        s=new sum;
        s->a=a;
        s->b=b;
    }
    void addelement()
    {
        s->result=result;
        s->result=s->a+s->b;
    }
};
int main()
{
    add a1(2,4);
    a1.addelement();
    cout<<"result"<<result;
}
