#include<stdio.h>
int main()
{
    int entry_fee,age;
    printf("Enter the age: ");
    scanf("%d",&age);
    if(age<=0)
    {
        printf("The value of age can not be negative or zero");
        return 1;
    }
    if(age>=12)
    {
        printf("You are adult , you have to pay for the ticket");
        return 1;
    }
    else
    {
        printf("You are children , you don't have to pay for the ticket");
        return 1;
    }
    return 0;
}
