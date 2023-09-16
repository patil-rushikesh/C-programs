# include<stdio.h>
int main()
{
	double a,b,add,sub,div,mul,mod;
	printf("enter two numbers: ");
	scanf("%lf %lf",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("Addition = %lf \n",add);	
	printf("Subtraction = %lf \n",sub);
	printf("Division = %lf \n",div);
	printf("Multiplication = %lf \n" ,mul);
	return 0;
	
}
