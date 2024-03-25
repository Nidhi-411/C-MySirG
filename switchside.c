
main()
{
    int a,b,c,x;
    while(1)
    {
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    printf("Enter 1 to check whether three numbers are sides of an isoscale triangle or not");
    printf("enter 2 to check whether three numbers are sides of right angle triangle or not");
    printf("enter 3 to check whether three numbers are sides of equilateral triangle or not ");
    printf("enter 4 for exit");
    scanf("%d",&x);
    printf("%d",x);
    switch(x)
    {
    case 1:
        if(a==b||b==c||c==a)
            printf("sides of an isoscale triangle");
        else
            Printf("not the sides of an isoscale triangle");
        break;
    case 2:
        if (a==b&&b==!c||b==c&&c==!a||a==c&&c==!b)
        printf("sides of an right angle triangle ");
        else
            printf("not the sides of an right angle triangle  ");
        break;
    case 3:
        if (a==b==c)
            Printf("sides of an equilateral traingle");
        else
            printf("not the sides of an equilateral traingle");
        break;
    case 4:
        exit(0);

    }
    getch();

}}
