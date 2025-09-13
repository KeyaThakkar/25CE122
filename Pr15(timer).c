#include<stdio.h>
int main()
{
int seconds;
label:

printf ("Enter the seconds for the countdown timer: ");
scanf("%d", &seconds);
if (seconds < 0)
{
printf("Invalid seconds\n");

goto label;
}
else
{
while (seconds >= 0){
printf("The remaining seconds: %d seconds\n", seconds);
sleep(1);

seconds--;
}
}

printf("Countdown Completed");

return 0;
}
