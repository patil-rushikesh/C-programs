#include<stdio.h>
int main(){
    int a;
    float temp,x;
    printf("Enter the size of array\n");
    scanf("%d",&a);
    printf("Enter %d elements\n",a);
    float data[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%f",&data[i]);
    }
    for(int k = 0; k<a ; k++){
        x = data[k];
        for(int j= 0; j<a; j++){
            if(data[j] < data[k]){
                temp = data[k];
                data[k]=data[j];
                data[j]= temp;
            }
    }
    }
    printf("Sorted Elements are : \n");
    for(int k=0; k<a; k++){
        printf("%.3f \n",data[k]);
    }
    
}
