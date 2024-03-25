
main()
{
    int a=-1,b=1,c,x,i;
    printf("Enter the number");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        c=a+b;

        a=b;
        b=c;

    }
    getch();

}
