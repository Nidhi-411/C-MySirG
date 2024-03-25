main()
{
    int a,b,c;
    printf ("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c)
      printf ("greates num %d",a);
    else
   {if(b>=a&&b>=c)
    printf ("greatest num %d",b);
    else
    printf("greater number%d",c);
   }
    getch();
}
