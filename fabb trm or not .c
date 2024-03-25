main()
{
    int a=-1,b=1,c,x;
    printf ("Enter the number");
    scanf("%d",&x);
    do { c=a+b;
         if(c==x)
            break;
            a=b;
            b=c;
    }   while (c<=x);
    printf(c==x?"yes,it is in fabonicci" : "no,it is not in fabonicci");
    getch();





}
