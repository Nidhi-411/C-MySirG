main()
{
    int x;
    while(1)
    {
        printf("Enter the day number or enter 0 to exit");
        scanf ("%d",&x);
        printf ("Happy");

        switch(x)
        {
        case 1:
            printf(" monday");
            break;
        case 2:
            printf("tuesday");
             break;
        case 3:
            printf ("wednesday");
            break;
        case 4:
            printf("thursday");
            break;
        case 5:
            printf ("friday");
            break;
        case 6:
            printf("saturday");
            break;
        case 7:
            printf("sunday");
            break;
        default:
            printf("invailid input");
            break;
        case 0:
            exit(0);

            } getch();


    }
}
