#include<iostream>
using namespace std;
template <class X >class arraylist
{
private:
    struct controlblock
    {
        int capacity;
        X *arr_ptr;
    }; controlblock *s;
public:
    arraylist(int capacity)
    {
      s=new controlblock;
      s->capacity=capacity;
      s->arr_ptr=new X[s->capacity];
    }
    void addelement(int index,X data)
    {
        if(index>=0&&index<=s->capacity-1)
        s->arr_ptr[index]=data;
        else
            cout<<"\n array index is not valid";
    }
    void viewelement(int index,X &data)
    {
        if(index>=0&&index<=s->capacity-1)
            data=s->arr_ptr[index];
        else
            cout<<"\n array index is not valid";
    }
    void viewlist()
    {
        int i;
        for(i=0;i<s->capacity;i++)
            cout<<" "<<s->arr_ptr[i];
    }
};
int main()
{
    int data;
    arraylist <int>list1(4);//you can change template int or float data type
    list1.addelement(0,3.2);
    list1.addelement(1,4.3);
    list1.addelement(2,3.3);
    list1.viewlist();
}
