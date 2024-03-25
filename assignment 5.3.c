main()
{
    int i=1,x,d=0;
    printf("Enter the value of N");
    scanf("%d",&x);
    while(i<=2*x)
    {
        d+=i;
        i+=2;
    }
    printf("%d",d);
    getch();


}
