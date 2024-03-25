 char* remove_all_spaces(char*);
 void  cheak_pallindrom (char*);

main ()
{
    char str[50];
    printf("Enter the string");
    gets(str);
    printf("\n%s\n",str);
   strcpy (str, remove_all_spaces(str));
    printf("\n%s\n",str);
   printf("\n%d\n",strlen(str));
   cheak_pallindrom (str);
}
char* remove_all_spaces(char*s)
{   char *p;
    p = malloc (strlen(s)+1);
    int i=0,j=0;
    while(*(s+i))
    {
        while (*(s+i)==' ')
            i++;
        while (*(s+i)!=' '&&*(s+i)!='\0')
        {
            *(p+j)=*(s+i);
            i++;
            j++;
        }

        }

    return p;
}
void  cheak_pallindrom (char*s)
{
    int l,i,t=0;
    l=strlen(s);
    for(i=0;i<l/2;i++)
    {
        if(*(s+i)==*(s+l-1-i))
            t++;
    }
    if(t==(l/2))
        printf("\ngiven string is palindrom");
    else
        printf("\nnot pallindrom");
    getch();
}
