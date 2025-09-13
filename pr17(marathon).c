#include<stdio.h>
int main()
{
    int minute = 0;
    float distance = 0.0;
    while (1)
    {
        minute++;
        distance += 0.5;
        printf("Minute %d: Distance covered = %.1f km\n", minute, distance);
        if (distance >= 10.0)
        {
            printf("Marathon complete!\n");
            break;
        }
    }
    return 0;
}
