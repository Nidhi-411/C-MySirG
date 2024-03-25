main()
{ int i=1,d=0,x;
printf("enter the value of N");
scanf("%d,&x");
while (i<=2*x)
{
    d+=i;
    i+=2;
}
printf("the sum of first N odd natural number is %d",d) ;
getch();
}



