#include<stdio.h>
int main(){
    int temp[5],x[5];
    printf("array?\n");
    for(int i=0; i<5; i++){
        scanf("%d", &x[i]);
    }
    printf("\n");
    int j=0;
    for(int i = 4 ; i>=0 ; i--){
        temp[i] = x[j];
        j++;
    }
     for(int i=0; i<5; i++){
        printf("%d ", temp[i]);
    }
    return 0;
}
