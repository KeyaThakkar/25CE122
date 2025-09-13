#include<stdio.h>
int main()
{
    int num, total;
    total=0;

    printf("\n********\n MENU CARD\n********\n");
        printf("1.BURGER      =150 rs. \n");
        printf("2.PIZZA       =200 rs. \n");
        printf("3.PASTA       =120 rs. \n");
        printf("4.SANDWICH    =100 rs. \n");
        printf("5.FRENCHFRIES =80 rs. \n");
        printf("0.Finish the order \n");


    while(1)
    {
        label:
        printf(" Enter the number \n");
        scanf("%d", &num);

        switch(num)
        {
        case 1:
            total = total+150;
            printf("The total amount is = %d \n", total);
            break;

        case 2:
            total = total+200;
            printf("The total amount is = %d \n", total);
            break;

        case 3:
            total = total+120;
            printf("the total amount is = %d \n", total);
            break;

        case 4:
            total = total+100;
            printf("the total amount is = %d \n", total);
                break;
        case 5:
            total = total+80;
            printf("The total amount is = %d \n",total);
            break;

        case 0:
            printf ("Your order is finish. \n");
            break;

        default :
            printf("Enter a valid number \n ");
           goto label;
        }
    }
    return 0;
}

