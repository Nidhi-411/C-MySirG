main()
{
    int i=2,x;
    printf("Enter the number ");
    scanf("%d",&x);
    do{
            x++;
            x%i;
        if(x%i==0)
        {if (x==i)
            break;
        }
        i++;
}while(x==!i);
printf ("%d",x);

    getch();
}
