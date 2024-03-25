main()

{ int a=-1,b=1,x,c,i;
  printf("Enter the number");
  scanf("%d",&x);
  for (i=1;i<=x;i++)
  {
      c=a+b;
      if (i==x)
        break;
      a=b;
      b=c;

  } printf ("%d",c);
  getch();
}
