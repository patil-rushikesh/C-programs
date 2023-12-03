#include <stdio.h>

int main() 
{ 
	int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	

	int temp[n];

    int j = 0;
	

	for(int i = 0; i < n; i++){

        if(i == n-1 || arr[i] != arr[i+1]){
            temp[j++] = arr[i];
        }
    }

	for (int i = 0; i < j; i++) 
		printf("%d ", temp[i]); 
	
	return 0; 
}
