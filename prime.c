main()
{
    int i=2,x=2;
    while(x<=99)
    {
        for(;i<=x-1;i++)
        {
            x%i;
            if(x%i==0&&x==i)
                break;
        }
        printf("%d",x);
        x++;
    }
}
