
main()
{
    char str[50];
    int l,i;
    printf("Enter the string");
    gets(str);
    l=strlen(str);
    for(i=0;i<=l-1;i++)
{
    if(str[i]>='A'&&str[i]<='Z')
    printf("%c",str[i]+32);
}
    getch();

}
