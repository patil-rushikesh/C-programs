# include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter any three numbers : \n");
	scanf("%d %d %d",&a,&b,&c);
	
	if (a>b && a>c){
	d=a;
	printf("The greatest number is %d",d);
	}
	else if (b>a && b>c){
	d=b;
	printf("The greatest number is %d",d);
	}
	else if (c>a && c>b){
	d=c;
	printf("The greatest number is %d",d);
	}
	else{
	printf("The numbers are equal");
	}
	return 0;
}
