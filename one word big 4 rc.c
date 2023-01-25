#include<stdio.h>

void main()
{
    int i,j,r,c;
    r=4;
    c=4;
    printf(" !!! For word N following is the BIG word output !!!\n\n\n\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(j==1)
            {
                printf("||");
                continue;
            }
            else if(j==c)
            {
                printf("||");
                continue;
            }
            else if(i==j)
            {
                printf("||");
                continue;
            }
            else
            {
                printf("  ");
                continue;
            }
        }
        printf("\n");
    }
    printf("\n\n\n\n!!!!!! Program Completed   !!!!!!");

}
