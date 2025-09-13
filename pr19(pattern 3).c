#include<stdio.h>

int main()
{
    int i,j, n = 5 ;

    for(int i=n; i >= 1 ; i--)
    {
        for (int s=5; s>i; s--)
        {
            printf(" ");
        }

        for(int j=i; j>=1; j--)
        {
            printf("%d",j);
        }
        for(int j=2; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for (int i = 2 ; i <= 5 ; i++)
    {
        for (int s = 5 ; s>i; s--)
        {
            printf(" ");
        }
        for (int j=i; j >= 1 ; j--)
        {
            printf("%d",j);
        }
        for (int j=2; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
