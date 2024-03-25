
main()
{
    int i,j,x;
    for(i=1;i<=4;i++)
    {
        for(j=1,x=1;j<=7;j++)
        {
            if(j<=4-i||j>=4+i)
                printf(" ");
                else {
                    if(j<=4-i)
                        {printf("%d",x);
                        x++;}
                       if(j<=4+i)
                   {printf("%d",x);
                   x--;}

        }

        }
        printf("\n");
    }
    getch();
}
