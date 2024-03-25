main()
{
    int i ,a[10],evens=0,odds=0;
    printf ("Enter 10 numbers");
    for(i=0;i<=9;i++)
   {scanf("%d",&a[i]);
    if(a[i]%2==0)
        evens+=a[i];
    else
        odds+=a[i];}
printf("Sum of all even numbers is %d",evens);
printf("Sum of all odd numbers is %d",odds);
getch();
}
