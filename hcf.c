main()
{
    int a,b,min,i,f=1;
    printf("Enter two numbers");
     scanf("%d%d",&a,&b);
    if(a<b)
        min = b;
    else
        min = a ;
     for(i=2;i<=min;i++)
     {
         a%i;
         b%i;
         if (a%i==0&&b%i==0)
            f*=i;
     }
     printf("Hcf is %d",f);
     getch();
     }
