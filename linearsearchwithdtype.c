#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    printf("Enter th size of array \n");
    scanf("%d", &a);
    float data[a],n;
    printf("Enter the %d elements of an array\n", a);
    for(int i=0; i<a; i++){
        scanf("%f",&data[i]);
    }
    printf("Enter the element which is to be searched \n");
    scanf("%f",&n);
    for(int i=0; i<a; i++){
        if(data[i] == n){
            i++;
            printf("The element %.1f is at location \n %d \n", n,i);
            exit (0);
        }
    }
    printf("The number not found \n");
    return 0;
}