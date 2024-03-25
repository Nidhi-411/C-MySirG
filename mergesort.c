#include<stdio.h>
#include<conio.h>
void main()
{int arr[]={6,3,9,5,2,8};
int n=6;
divide(arr,0,n-1);
for(int i=0;i<n;i++)
  {
  printf("%d \t",arr[i]);
  }
  getch();
}
void conquer(int arr[],int si,int mid,int ei)
{
    int merged[ei-si+1];
    int id1=si;
    int id2=mid+1;
    int x=0;
    while(id1<=mid && id2<=ei){
        if(arr[id1]<=arr[id2]){
            merged[x++]=arr[id1++];

        } else{
        merged[x++]=arr[id2++];
        }
    }
    while(id1<=mid){
        merged[x++]=arr[id1++];
    }
    while(id2<=ei){
        merged[x++]=arr[id2++];
    }
    for(int i=0,j=si;i<=ei-si+1;i++,j++){
        arr[j]=merged[i];
    }

}
void divide(int arr[],int si,int ei)
{
if(si>=ei)
   {
       return ;
   }
int mid=(si+ei)/2;
divide(arr,si,mid);
divide(arr,mid+1,ei);
conquer(arr,si,mid,ei);
}
