#include <stdio.h>

int main()
{
	int arr[] = {12, 11, 13, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);

	for(int i = 0 ; i < n ; i++){
		int min = i;
		int j;
		for(int j = i+1; j< n ; j++){
			if(arr[i]>arr[j]){
				min = j;
			}
		}
		int temp = arr[j];
		arr[j] = arr[min];
		arr[min] = temp;
	}



	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
