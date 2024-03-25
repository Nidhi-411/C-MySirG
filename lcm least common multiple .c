main ()
// least common multiple == value that is completly divisible by both numbers
// multiple of 2=2,4,6,8,9,10,12,14,.......
// multiple of 6=6,12,18,24,30.......
// common multiple is  6     it imposible to find highest multiple

{
    int x,y,mul;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    for (mul=1;;mul++)
    {
        if(mul%x==0&&mul%y==0)
        { printf ("lcm is %d",mul);
           break;
        }

    }
    getch();

}
