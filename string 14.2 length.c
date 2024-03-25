main()
{
    char str[50];
    int i=0;
    printf("Enter the stirng");
    gets(str);
    while(str[i])
    {
        i++;
    }
    \\ or we can use for (i=0;str[i];i++);
        printf("The length is %d",i);
    getch();

}
