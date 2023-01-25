#include<stdio.h>

void main()
{
    int i,j,r,c;
    char d;
    printf("Enter the word or any thing on keyboard to and it will print it with big word N : ");
    scanf("%c",&d);
    printf("Enter Number of Rows you want : ");
    scanf("%d",&r);
    c=r;
    printf("\n\n\n\n\n\n");
    printf(" !!! For word N following is the BIG word output !!!\n\n\n\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(j==1)
            {
                printf("%c",d);
                continue;
            }
            else if(j==c)
            {
                printf("%c",d);
                continue;
            }
            else if(i==j)
            {
                printf("%c",d);
                continue;
            }
            else
            {
                printf(" ");
                continue;
            }
        }
        printf("\n");
    }
    printf("\n\n\n\n!!!!!! Program Completed   !!!!!!");

}
