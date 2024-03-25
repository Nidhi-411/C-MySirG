
main()
{
    int i,j;
    char ch;
    for(i=1;i<=4;i++)
    {
        for(j=1,ch='A';j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
               {
                   if(j<=5-i)
                printf ("%c",ch++);
            else
                ch--;
                printf("%c",ch);
        }
        else
            printf(" ");
        }
        printf("\n");
    }
    getch();
}
