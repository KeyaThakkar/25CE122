#include<stdio.h>

int main()
{
    int i,j,r,c,n;

    printf("Enter the size of table vertically : ");
    scanf("%d", &r);
    printf("Enter the size of table horizontally : ");
    scanf("%d",&c);
    printf("\nMultiplication table (%d x %d) :\n", r,c);

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }
    return 0;
}
