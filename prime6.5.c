main()
{int x,i,y;
    printf("Enter the numbers");
    scanf("%d%d",&x,&y);
    while (x<=y)
    {for(i=2;i<=y-1;i++)

       {x%i;
        if(x%i==0)
            break;
    }
    if(x==i)
    printf("%d\n",&x);
    x++;
}
getch();
}
