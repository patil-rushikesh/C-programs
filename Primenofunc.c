#include<stdio.h>
#include<stdbool.h>
bool isPrime(int n){
	if (n == 1 || n==0){
		return false;
	}
	for(int i = 2; i < n; i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int a;
	printf("Enter the limit :");
	scanf("%d", &a);
	for(int i = 1; i < a; i++){
		if(isPrime(i)){
			printf("%d ", i);
		}
	}
	return 0;
}

