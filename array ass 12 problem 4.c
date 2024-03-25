main()
{
    int a[10];
    input (a,10);
    smallindex (a,10);

}
 void input (int b[],int size)
 {
     int i;
     printf ("Enter 10 numbers");
     for (i=0;i<=size-1;i++)
        scanf("%d",&b[i]);

 }
 void smallindex(int b[],int size)
 {
     int i,min,t;
     min=b[0];
     for (i=0;i<=size-1;i++)
     {
         if(b[i]<=min)
           {
            min=b[i];
            t=i;
            }
    }
     printf ("\n%d",t);
 }
