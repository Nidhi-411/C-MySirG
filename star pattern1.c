main()
{
    int i ,j,lines;
    char ch;
    printf("Enter the number of lines");
    scanf("%d",&lines);
    for(i=1;i<=lines;i++)
    { ch='A';
        for (j=1;j<=lines;j++,ch++)
        {
            if(j<=i)

               printf("%c",ch);

            else printf (" ");
    } printf("\n");
} getch();
}
