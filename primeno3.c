#include<stdio.h>
#include<stdlib.h>
int main()
{
int k,i;
printf("enter the number which is to be checked : ");
scanf("%d", &k);
for(i=2; i<=k-1; i++)
	{
		if(k%i == 0)
		{
			printf("The number is not prime");
			exit (0);
		}
	} 
printf("The number is prime");
return 0;
}

