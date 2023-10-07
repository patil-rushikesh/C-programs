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
    
    printf(" Elements are : \n");
    for(int k=0; k<a; k++)
    {
        printf("%d ",data[k]);
    }
    int max = data[0];
    for (int j = 0; j < a; j++)
    {
        if(data[j] > max){
            max = data[j];
        }
    }
     printf("\nHistogram:  \n");
    for(int i=0; i <= max; i++)
    {
        for(int j=0; j<=a; j++)
        {
                if(data[j] <= i ){
                    printf("  ");
                }else{
                    printf("* ");
                }
        }
        printf("\n");
    }
    
}
