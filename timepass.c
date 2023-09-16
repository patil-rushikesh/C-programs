#include<stdio.h>

int main()
{
	for(i=1; i<n; i++)
	{
		for(j=1; j<=n; j++)
			{
				if(j<=n-i)
					{
						printf(" ");
					}
				else
					{
						printf("*");
					}
			}
		for(a=1; a<i; a++)
			{
				printf("*");
			}
	printf("\n");
	}
	
	
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
