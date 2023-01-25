#include<stdio.h>

void main()
{
    int i,j,r,c;
    printf(" !!! For word N following is the BIG word output !!!\n\n\n\n");
    r=3;
    c=3;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if((i==1)&&(j==2))
            {
                printf("  ");
                continue;
            }
            if((i==3)&&(j==2))
            {
                printf("  ");
                continue;
            }
            printf("||");
        }
        printf("\n");
    }
    printf("\n\n\n\n!!!!!! Program Completed   !!!!!!");

}
