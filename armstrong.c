//Rushikesh Patil Div L roll no. FY23L222


#include<stdio.h>
int main(){
	int n, r, sum=0, temp;
	printf("Input the Number");
	scanf("%d", &n);
	temp = n;
	while(n > 0){
		r = n % 10;
		sum = sum + (r*r*r);
		n = n / 10;  
	}
	if (sum == temp){
		printf("The Number is Armstrong");
	} else {
		printf("The Number is not Armstrong");
	}
	return 0;
}
