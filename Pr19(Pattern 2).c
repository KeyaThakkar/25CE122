#include<stdio.h>
int main()
{
	int i=1,j,x,l;
	printf("Enter horizontal limit : ");
	scanf("%d",&l);
	x=l/2+1;
	while(i<=x)
	{
		j=1;
		while(j<i)
		{
			printf("  ");
			j++;
		}
		j=i;
		while(j<=x)
		{
			if(j==i||i==1)
			printf("%d ",j);
			else
			printf("  ");
			j++;
		}
		j=x+1;
		while(j<=l+1-i)
		{
			if(i+j==l+1||i==1)
			printf("%d ",j);
			else
			printf("  ");
			j++;
		}
		printf("\n");
		i++;
	}

}
