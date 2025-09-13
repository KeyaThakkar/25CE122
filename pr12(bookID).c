#include<stdio.h>

int main()
{
    int x;

    for(x=1; x<=50; x=x+1)
    {
        printf("book Id: %d ",x);
        if(x%5==0)
        {
            printf("(Special Edition)");
        }
        printf("\n");
    }
    return 0;
}
