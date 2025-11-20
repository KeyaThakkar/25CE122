#include<stdio.h>
int main()
{
	int flag=0,ID[6],ID1[5],i;
	printf("enter the id numbers: \n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&ID[i]);
	}
	printf("enter the id number of present students: \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&ID1[i]);
	}
	for(i=0;i<6 && i<5;i++)
	{
		if(ID[i] != ID1[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1);
	{
		printf("\n%d ID is missing ",ID[i]);
	}
	printf("\nName: Keya Thakkar\n");
    printf("ID: 25CE122");
	return 0;
}
