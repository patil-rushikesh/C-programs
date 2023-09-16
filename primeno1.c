#include<stdio.h>

int main()
{
int k,flag,i;
flag =0;
printf("enter the number which is to be checked : ");
scanf("%d", &k);
for(i=2; i<=k-1; i++)
	{
		if(k%i==0)
		{
			flag = 1;
			break;
		}
	} 
if(flag == 1)
	printf("Not prime");
else 
	printf("The number is prime");
	return 0;
}
