main()
{
    int a[10];
    input(a,10);
    display(a,10);
    sort(a,10);
    printf ("array after sorting");
    display(a,10);
    getch();
}
void input (int b[],int size)
{
    int i;
    printf ("Enter 10 numbers");
    for(i=0;i<=size-1;i++)
    scanf("%d",&b[i]);
}
void display (int b[],int size)
{
    int i;
    for (i=0;i<=size-1;i++)
    printf(" %d",b[i]);

}
void sort (int b[],int size)
{
    int i,r,t;

    for(r=1;r<=size-1;r++)

   {
       for (i=0;i<=size-r-1;i++)
   {
    if (b[i]>=b[i+1])
    { t=b[i];
        b[i]=b[i+1];
        b[i+1]=t;
    }
    }

    }
}
