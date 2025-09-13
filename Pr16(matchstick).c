#include<stdio.h>
int main()
{
    int computer_pick,user_pick,matchstick=21;

    while (matchstick>=1)
    {

labell:
        printf ("\n\nYou have to pick matchstick from 1,2,3,4\n");

        printf("Enter the user pick matchstick: ");
        scanf("%d", &user_pick);
        printf("remaining matchstick : %d",matchstick-user_pick);

        if (user_pick < 0 || user_pick > 4)
        {
            printf("\nInvalid matchstick picked\n");
            goto labell;
        }
        computer_pick=5-user_pick;
        printf("\n\nMatchstick picked by computer: %d\n\n",computer_pick);
        matchstick=matchstick-user_pick-computer_pick;
        printf("remaining matchstick : %d",matchstick);

        if(matchstick==1)
        {
            printf("Number of matchstick left: %d\n", matchstick);
            printf("You lost the game\n");
            break;
        }
    }
    return 0;
}
