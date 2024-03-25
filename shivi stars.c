# include <stdio.h>
# include <conio.h>
int main()
{
    int i,j,n,k;
    printf("enter a number");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=2*n-1;j++)
        {
            if(i+j<=n||j-i>=n)
             printf(" ");
           else if(j<=n)
            printf("%d",++k);
           else
            printf("%d",--k);
        }
        printf("\n");
    }
    getch();
}
