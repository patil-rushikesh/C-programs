#include<stdio.h>

int main()
{
int k,flag,i;
printf("enter the number which is to be checked : ");
scanf("%d", &k);
for(i=2; i<=k-1; i++)
	{
		if(k%i==0)
		{
			break;
		}
	} 
if(i>=k)
	printf("The number is prime");
else 
	printf("The number is not prime");
	return 0;
}
