#include<stdio.h>
	int main(){
		int a[3][3], b[3][3], c[3][3], i, j, k;
		printf("Enter the Matrix value of a :\n");
		for(i=0; i<3; i++){
			for(j=0; j<=2; j++){
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter the Matrix value of b :\n");
		for(i=0; i<3; i++){
			for(j=0; j<=2; j++){
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0; i<=2; i++){
			for(j=0; j<=2; j++){
				c[i][j]=0; 
				for(k=0; k<=2; k++){
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		for (i = 0; i < 3; i++) {
        		for (j = 0; j < 3; j++) {
            			sum[i][j] = a[i][j] + b[i][j];
        		}
    		}
		printf("\nMatrix Addition:\n");
    		for (i = 0; i < 3; i++) {
       			for (j = 0; j < 3; j++) {
           			 printf("%d ", sum[i][j]);
        		}
        		printf("\n");
   		}
		
		printf("Multiplication of matrix is : \n");
		for(i=0; i<=2; i++){
			for(j=0; j<=2; j++){
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
		return 0;
	}
