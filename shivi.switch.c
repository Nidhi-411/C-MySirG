 main()
{
    int n,s,b,h;
    printf("enter three   number");
    scanf("%d%d%d",&s,&b,&h);
    while (1)
    {
        printf(" 1 isosceles triangle\n");
        printf(" 2 right angle triangle\n");
        printf(" 3 equilateral triangle\n");
        printf(" 4 exit\n");
    switch(n)
    {
    case 1:
        if(s==h)
            printf("isosceles triangle");
            else
            printf("not isosceles");
    break;
    case 2:
        if(s>(b||h))
            (printf("right angle triangle");
            else
            printf("not right triangle")
        break;
    case 3:
        if(s==b==h)
        printf("equilateral triangle");
        else
            printf("not equilateral ");
        break;
    case 4:
        exit (0);
   default:
        printf("invalid value");
    }
    getch();
    }
}
