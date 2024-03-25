int vowel (char*,char*);
main()
{
    char str[50];
    char strvow[50]={'a','e','i','o','u','A','E','I','O','U'};
    int count;
    printf("Enter the string");
    gets(str);
    count =vowel(str,strvow);
    printf("voweles are %d",count);
    getch();
}
int vowel (char*s,char*p)
{ int i,j,la,lb,t=0;
     la=strlen(s);
     lb=strlen(p);
     for(i=0;i<la;i++)
 {
     for(j=0;j<lb;j++)
     {
        if(*(s+i)==*(p+j))
           {t++;
            break;}
    }

 }
     return t;

}
