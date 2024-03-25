main()
{
    int i,j,lines;
    char ch;
    printf("Enter the lines");
    scanf("%d",&lines);
    for(i=1,ch='A';i<=lines;i++)
    {
    for (j=1;j<=lines;j++)
        {
            if(j<=i)
                printf("%c",ch+i-j);
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
