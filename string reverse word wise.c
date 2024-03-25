char* remove_extra_spaces(char*);
int count_words (char*);
main()
{
    char str[50];
    int words;
    printf("Enter the string");
    gets(str);
    printf("string lenght %d",strlen(str));
    strcpy(str,remove_extra_spaces(str));
    printf("\n string length %d",strlen(str));
    printf ("%s",str);
    words=count_words(str);
    printf ("words in the string = %d",words);


}
char* remove_extra_spaces(char*s)
{
    char*p;
    p = malloc (strlen(s)+1);
    int i=0,j=0;
   while (*(s+i))
   {
       while(*(s+i)==' ')
        i++;
        while(*(s+i)!=' '&& *(s+i)!='\0')
        {  *(p+j)=*(s+i);
            i++;
            j++;
        }
        if(*(s+i)=='\0'&&*(p+j-1)==' ')
            j--;
        *(p+j)=*(s+i);
        j++;
    }
    return p;
}

int count_words (char*s)
{  int i,l,t=0;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if (*(s+i)==' ')
          t++;
    }

    return t+1 ;

}
