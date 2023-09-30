#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,n;
    printf("Enter the size of array\n");
    scanf("%d",&a);
  
    int l,r,m,data[a];
    printf("Enter %d elements (Make sure the elements are sorted)\n",a);
     for (int i = 0; i < a; i++)
    {
        scanf("%d",&data[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&n);
    
    l=0;
    r=a-1;
    while (l <= r)
    {
         m=(l+r)/2;
        
        if( data[m] == n ){
            m++;
            printf("Element is at location %d",m);
            exit(0);

        }else if(data[m] > n){

            r = m - 1;
            
        }else if(data[m] < n){

            l = m + 1;

        }
    }
      
    printf("Element not found");
    return 0;
}
