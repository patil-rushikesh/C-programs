#include<stdio.h>
int main(){
   int num;
   float sqrt, temp;
   printf("Enter the number");
   scanf("%d",&num);
   sqrt = num/2;
   temp = 0;
   while(sqrt != temp){
      temp = sqrt;
      sqrt = (num/temp + temp)/2;
   }
   printf("%f", sqrt);
   return 0;
}
