//Bubble sorting 
#include<stdio.h>
int main(){
     int a;
    printf("Enter the size of array\n");
    scanf("%d", &a);
    
    printf("Enter %d elements\n", a);
    int data[a];
    
    for (int i = 0; i < a; i++) {
        scanf("%d", &data[i]);
    }
     for (int k = 0; k < a; k++) {
        for (int j = 0; j < a - 1; j++) {
            if (data[j] < data[j + 1]) {
                // Swap elements
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    printf("Sorted Elements are : \n");
    for(int k=0; k<a; k++){
        printf("%d \n",data[k]);
    }
}
