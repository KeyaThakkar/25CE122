#include<stdio.h>
int main()
{
    int i,countp=0,countn=0,counte=0,counto=0;
    int arr[25];
    for(i=0;i<25;i++)
    {
        printf("Enter the 25 numbers which includes both positive and negative as arr[%d]: ",i);
        scanf("%d",&arr[i]);

        if(arr[i]>=0)
        {
            countp++;
        }
        else
        {
            countn++;
        }
        if(arr[i]%2==0)
        {
            counte++;
        }
        else
        {
            counto++;
        }
    }
    printf("The positive no. are:%d\n",countp);
    printf("The negative no. are:%d\n",countn);
    printf("The even no. are:%d\n",counte);
    printf("The odd no. are:%d\n\n",counto);

    printf("Name: Keya Thakkar\n");
    printf("ID: 25CE122");
    return 0;
}

