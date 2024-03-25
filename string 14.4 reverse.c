main()
{
    char str[50],t;
    int i,l;
    printf("Enter the string");
    gets(str);
    l=strlen(str);
    for(i=0;i<=l/2;i++)
    {
        t=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=t;
    }
    // line 10-30 can be replace by strrev(str)
    printf("%s",str);
}
