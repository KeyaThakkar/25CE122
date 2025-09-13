#include<stdio.h>

int main()
{
    int x;

    for(x=10; x<=100; x=x+10)
    {
        printf("Current water level : %d litres\n",x);
    }
    printf("Tank is full.");

return 0;
}
