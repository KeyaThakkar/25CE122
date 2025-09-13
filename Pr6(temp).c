#include<stdio.h>
int main()
{

    float celsius,fahrenheit;
    printf("Enter celsius temperature :");
    scanf("%f",&celsius);
    fahrenheit=(celsius* 9/5) + 32;
    printf("Fahrenheit temperature is : %f",fahrenheit);
    return 0;
}
