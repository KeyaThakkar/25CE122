#include<stdio.h>
int main()
{
    float wamount,tbalance=5000,min_amt=500;
    int ch;
    while(1)
    {
        printf("Enter 1 for Withdrawing and 2 for Exit: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1 :
            printf("Enter the withdrawal amount: ");
            scanf("%f",&wamount);
            if(wamount>0 && wamount<=tbalance-min_amt)
            {
                tbalance=tbalance-wamount;
                printf("Remaining balance is : %f\n",tbalance);

                if (tbalance == min_amt)
                {
                    printf("You have reached your minimum balance. Exiting...\n");
                    return 0;
                }
            }
            else if(wamount>tbalance)
            {
                printf("Insuficient balance");
            }
            else
            {
                printf("You cannot withdraw. You will reach your minimum limit.\n");
            }
            break;
        case 2 :
            printf("End of transaction");
            return 0;
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
