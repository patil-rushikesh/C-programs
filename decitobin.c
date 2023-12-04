#include<stdio.h>
int main(){
   long dnum , qut, bnum = 0 ;
   int bin[100];
   int i;
   printf("enter decimal numer");
   scanf("%ld", &dnum);
   qut = dnum;
   while(qut !=0 ){
      bin[i] = qut%2;
      qut = qut /2;
      i++;
   }
   for(int j = i-1; j>=0; j--){
      bnum = bnum * 10 + bin[j];
   }
   printf("%ld", bnum);
   return 0; 
}
