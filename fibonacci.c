#include<stdio.h>

int main()
{
	int n1,n2,n3,n4,i;
	n1 = 0;
	n2 = 1;
	printf("Enter the limit of fibonacci series :");
	scanf("%d", &n3);
	printf("%d %d ", n1 , n2);
	for(i=2; i < n3; i++)
	{
		n4 = n1+n2;
		n1 = n2;
		n2 = n4;
		printf("%d ", n4);
	}
	printf("\n");
	return 0;
}
