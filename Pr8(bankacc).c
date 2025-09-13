#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d",&age);
    if(age<=0)
    {
        printf("The value of age cannot be zero or negative");
        return 1;
    }
    if(age>=18)
    {

    printf("You are eligible to open a savings accoount");
    return 1;
    }
    else
    {
        printf("You are not yet eligible for opening a savings account");
        return 1;
    }
    return 0;

}
