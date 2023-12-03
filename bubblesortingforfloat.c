#include<stdio.h>

int main() {
    int a;
    printf("Enter the size of array\n");
    scanf("%d", &a);
    
    printf("Enter %d elements\n", a);
    float data[a];
    
    for (int i = 0; i < a; i++) {
        scanf("%f", &data[i]);
    }
    
    // Perform Bubble Sort
    for (int k = 0; k < a; k++) {
        for (int j = 0; j < a - 1; j++) {
            if (data[j] < data[j + 1]) {
                // Swap elements
                float temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    // Print the sorted elements
    printf("Sorted Elements are : \n");
    for (int k = 0; k < a; k++) {
        printf("%.3f\n", data[k]);
    }

    return 0;
}
