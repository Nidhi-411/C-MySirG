main()
{
    int a,b,c,r;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    while(1)
          {
              printf("Enter 1 for addition\n");
              printf("Enter 2 for sub\n");
              printf("Enter 3 for multiplication\n");
              printf ("Enter 4 for division\n");
              printf("Enter 5 for exit\n");
              scanf("%d",&c);
    switch(c)
    {
    case 1:
        r=a+b;
        break;
    case 2:
        r=a-b;
        break;
    case 3:
        r=a*b;
        break;
    case 4:
        r=a/b;
        break;
    case 5:
        exit(0);
    default:
        printf("invailid input\n");

    }

       printf("result=%d\n",r);
       getch();



          }
}
