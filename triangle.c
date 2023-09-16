#include<stdio.h>

int main()
{
	int n1,i,a;
	printf("Enter Stages to print :");
	scanf("%d", &n1);
	for(i=1; i<n1+2; i++)
	{
		for(a=1; a<i; a++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
