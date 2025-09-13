#include<stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    printf("Enter the length of a rectangular plot: ");
    scanf("%d",&length);
    if(length <= 0)
    {
        printf("The length of the rectangular plot cannot be negative or zero");
        return 1;
    }
    printf("Enter the breadth of a rectangular plot: ");
    scanf("%d",&breadth);
    if(breadth <= 0)
    {
        printf("The breadth of the rectangular plot cannot be negative or zero");
        return 1;
    }

    area = length * breadth;
    perimeter = 2 *(length+breadth);
    printf("The area of a rectangular plot is : %d meters\n",area);
    printf("The perimeter of a rectangular plot is : %d meters\n",perimeter);


    return 0;

}
