// recursive funtion to print first n natural numbers
void print (int);
void printreverse (int );
void oddnumprint (int );
void oddnumprintrev (int );
void evennumprint (int);
void evennumprintrev(int);

main()
{
    int x;
    printf ("Enter the number");
    scanf ("%d",&x);
    printf ("%d natural numbers\n",x);
    print (x);
    printf ("\n\n%d numbers in reverse order\n\n",x);
    printreverse(x);
    printf("\n\n%d odd numbers \n",x);
    oddnumprint (x);
    printf("\n\n%d odd numbers in reverse order \n",x);
    oddnumprintrev (x);
    printf("\n\n%d even numbers \n",x);
    evennumprint (x);
    printf("\n\n%d even numbers in revers order\n",x);
    evennumprintrev(x);

}
void print (int n)
{

    if(n>=1)
    {
        print(n-1);
        printf("\n%d",n);
    }
}
void printreverse (int n)
{
    if(n>=1)
    {
        printf("\n%d",n);
        printreverse (n-1);
    }
}
void oddnumprint (int n)
{
    if(n>=1)
    {
        oddnumprint(n-1);
        printf ("\n%d",2*n-1);
    }
}
void oddnumprintrev (int n)
{
    if(n>=1)
    {
        printf("\n%d",2*n-1);
        oddnumprintrev(n-1);
    }
}
void evennumprint (int n)
{
    if(n>=1)
    {   evennumprint (n-1);
        printf("\n%d",2*n);
    }
}
void evennumprintrev (int n)
{
    if (n>=1)
    {
        printf ("\n%d",2*n);
        evennumprintrev(n-1);
    }
}
