
main()
{
    char str1[50],str2[50];
    int i,l,t;

    printf ("\nEnter first string\n");
    gets(str1);
    printf("Enter second string\n");
    gets(str2);



    for(i=0;str1[i]||str2[i];i++)
    {
        if(str1[i]<str2[i])
           {
            printf("in dictionay order");
            break;}
      else{
           if(str1[i]>str2[i])
           {
            printf("oposite to dictionary order");
            break;}
            else
                { if (str1[i]!=str2[i])
                  {printf ("not equal ");
                   break;
                   }
                else
                {printf("equal");
                       break;}
               }
    }}
  getch();
}
