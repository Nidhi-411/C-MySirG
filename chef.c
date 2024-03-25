#include<stdio.h>
#include<conio.h>

int main()
{
	int t;
	int n,x,ans;
	int i,a[4],b[4];

	scanf("%d",&t);
	while(t--)
	{ ans=0;
	printf("enter number of glosey and maximum value");
	    scanf("%d%d",&n,&x);
	    printf("enter value of glosery ");
	for(i=1;i<=n;i++)
	 {scanf("%d",&a[i]);
 	 }printf("enter cost of glosey");
 	 for(i=1;i<=n;i++)
 	 {
 	     scanf("%d",&b[i]);
 	 }
	for(i=1;i<=n;i++)
	  {if(a[i]>=x)
	   ans=ans+b[i];
	  }
	printf("%d\n",ans);
	}
	return 0;
}
