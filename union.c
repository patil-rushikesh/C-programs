#include <stdio.h>

void main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {4, 5, 6, 7};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    int n2 = sizeof(array2) / sizeof(array2[0]);
    int union_size = n1 + n2;
    int result[union_size];

    // Copy elements from array1 to result
    for (int i = 0; i < n1; i++) {
        result[i] = array1[i];
    }

    // Copy elements from array2 to result
    for (int i = 0; i < n2; i++) {
        result[n1 + i] = array2[i];
    }

    // Sort the result array
    for (int i = 0; i < union_size; i++) {
        for (int j = i + 1; j < union_size; j++) {
            if (result[i] > result[j]) {
                int temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }

    // Remove duplicates from the result array
    int j = 0;
    int union1[union_size];

    for (int i = 0; i < union_size; i++) {
        if (i == 0 || result[i] != result[i - 1]) {
            union1[j++] = result[i];
        }
    }

    // Print the result array without duplicates
    for (int i = 0; i < j; i++) {
        printf("%d ", union1[i]);
    }
}
