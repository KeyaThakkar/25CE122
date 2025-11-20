#include<stdio.h>
int main()
{
    int i,j,row,seat,reserved_seats;
    char seating[5][10];
    for(i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
            seating[i][j]='O';
            printf("%c ",seating[i][j]);
        }
        printf("\n");
    }
    printf("welcome to the theater seating arrangement!\n");
    printf("theater contains 5 rows and 10 seats.\n");
    printf("enter the no of seats reserved: \n");
    scanf("%d",&reserved_seats);
    for(i=1;i<=reserved_seats;i++)
    {
    printf("enter row and seat number for %d (e.g.,2 5):   ",i);
    scanf("%d %d",&row,&seat);
    if(row > 0 && row <= 5 && seat > 0 && seat <= 10)
    {
        seating[row - 1][seat - 1] = 'X';
    }
    else
    {
        printf("invalid row or seat number. please enter values within range.\n");
        i--;
    }
    }
    printf("seating chart:\n");
    for(i=0;i<5;i++)
    {
        printf("row %d: ",i+1);
        for(j=0;j<10;j++)
    {
        printf("%c ",seating[i][j]);
    }
    printf("\n");
}
 printf("Name: Keya Thakkar\n");
 printf("ID: 25CE122");
return 0;
}



