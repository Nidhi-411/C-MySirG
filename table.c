main()
{
    int i=1,x,c;
    printf("Enter the number");
    scanf("%d",&x);
    while (i<=10)
    {
        c=i*x;
        printf("\n%d",c);
        i++;
    }
    getch();
}
