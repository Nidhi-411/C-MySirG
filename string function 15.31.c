void capitalize(char);
main()
//not complete progranm
{
    char str[50];
    gets(str);
    capitlize(str);
}
void capitlize(char str[])
{
    int i,l;
    l=strlen(str);
    for(i=0;i<=l-1;i++)
        printf("%c",str[i]-32);
    getch();

    }
