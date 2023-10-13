#include<stdio.h>
int main(){
    int a,temp,x;
    printf("Enter the size of array\n");
    scanf("%d",&a);
    printf("Enter %d elements\n",a);
    int data[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&data[i]);
    }
    for(int k = 0; k<a ; k++){
        x = data[k];
        for(int j= 0; j<a; j++){
            if(data[j] > data[k]){ 
//if sign is changed the program will convert from ascending to descending
                temp = data[k];
                data[k]=data[j];
                data[j]= temp;
            }
    }
    }
    printf("Sorted Elements are : \n");
    for(int k=0; k<a; k++){
        printf("%d \n",data[k]);
    }
}
