#include<stdio.h>

int main(){
    int n, minimum;
    int data[n];
    printf("Enter the no of elements : ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&data[i]);
    }
    minimum = data[0];
    for (int j = 0; j < n; j++)
    {
        if(data[j] < minimum){
            minimum = data[j];
        }
    }
    printf("Minimum number is : %d", minimum);

}
