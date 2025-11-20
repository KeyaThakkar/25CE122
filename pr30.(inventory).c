#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    float prices[n],*p;
    p = prices;

    printf("Enter the prices for each item:\n");
    for(int i = 0; i < n; i++)
    {
        printf("Enter prices[%d]= ", i+1);
        scanf("%f", p);
        p++;
    }
    float temp;
    printf("In ascending order\n");

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(*(prices+i)>*(prices+j))
           {
                temp = *(prices + i);
                *(prices + i) = *(prices + j);
                *(prices + j) = temp;
           }
        }
    }
    printf("Sorted Prices: ");
     for(int i=0;i<n;i++){
    printf("%f\n",*(prices+i));
     }
    printf("Name: Keya Thakkar\n");
    printf("ID: 25CE122");
    return 0;
}

