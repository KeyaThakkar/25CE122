#include<stdio.h>

int main()
{
    int marks;
    label:
    printf("Enter your marks : ");
    scanf("%d",&marks);
    if(marks < 0 || marks > 100)
    {
        printf("Invalid marks\n");
        goto label;
    }
    else
    {
        marks>=90?printf("Your grade is A"):(marks>=80 && marks<90)?printf("Your grade is B"):(marks>=70 && marks<80)?printf("Your grade is C"):(marks>=60 && marks<70)?printf("Your grade is D"):printf("Your grade is F");
    }
    return 0;
}
