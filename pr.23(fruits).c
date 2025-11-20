#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of days: ");
    scanf("%d",&n);
    int prices[n];
    for(int i=0; i<n; i++)
    {
        printf("enter prices for day %d: ",i+1);
        scanf("%d",&prices[i]);
    }
    int maxprofit=0,price;
    int buyday=0, sellday=0;

    for(int i=0; i < n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int profit = prices[j] - prices[i];
            if(profit > maxprofit)
            {
                maxprofit=profit;
                buyday = i+1;
                sellday = j+1;
            }
        }
    }
    if(maxprofit=0)
    {
        printf("No transaction is possible as the price keeps decreasing");
        return 0;
    }
    printf("The maximum profit is %d\n",maxprofit);

    printf("The vendor had bought the fruits on day  %d\n",buyday);
    printf("The vendor had sold the fruits on day  %d\n\n",sellday);
    printf("Name: Keya Thakkar\n");
    printf("ID: 25CE122");
    return 0;
}
