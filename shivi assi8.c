 #include <stdio.h>
 #include <conio.h>
 int main()
 {
     int phy,chem,bio,math,com,t;
     float percent;

     printf ("enter the marks of subjects phy che bio math com serial wise");
     scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&com);
     printf ("phy=%d\nchem=%d\nbio=%d\nmath=%d\ncom=%d",phy,chem,bio,math,com);
     t = phy+chem+bio+math+com;
     percent=t/5;
     printf ("percent is = %f\n",percent);

    if ( percent>=90 )
    printf("grade A");

    if (percent>=80 && percent<90)
    printf("grade B");

    if (percent>=70 && percent<80)
    printf("grade C");

    if (percent>=60 && percent<70)
    printf("grad D");

    if(percent>=40 && percent<60)
    printf("grad E");

    if (percent<40)
    printf("grad F");
    getch();
 }
