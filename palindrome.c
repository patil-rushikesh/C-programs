#include<stdio.h>
int main(){
	int n, r, rev = 0, temp;
	printf("Enter the number to check Palindrome :");
	scanf("%d", &n);
	temp = n;
	while(n > 0){
		r = n % 10;
		rev = (rev * 10) + r;
		n=n/10;
	}
	if (temp == rev){
		printf("The number is palindrome");
	} else {
		printf("The number is not palindrome");
	}
	return 0;
}
