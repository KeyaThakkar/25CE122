#include<stdio.h>
int main()
{
    float weight,height,BMI;
    printf("Enter the value of weight in kg: ");
    scanf("%f",&weight);
    if(weight<=0)
    {
        printf("The value of weight can not be negative or zero");
        return 1;
    }
    printf("Enter the value of height in meter: ");
    scanf("%f",&height);
    if(height<=0)
    {
        printf("The value of height can not be negative or zero");
        return 1;
    }
    BMI=weight/(height*height);
    printf("The value of BMI is %5.2f\n",BMI);


    if(BMI < 18.5)
    {

        printf("You are underweight\n");
    }
    else if(BMI >=18.5 && BMI <=24.9)
    {
        printf("You are having normal weight\n");
    }
    else if(BMI >=25 && BMI <= 29.9)
    {
        printf("You are having overweight\n");
    }
    else
    {
        printf("You are obese");
    }

    return 0;

}
//Name: Keya Thakkar
//ID : 25CE122
