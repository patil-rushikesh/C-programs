#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    int num1, num2, max_div,min_div, flag = 1;
    printf( " Enter any two positive numbers to get the LCM \n ");  
    scanf(" %d %d", &num1, &num2);  
       
    max_div = (num1 > num2) ? num1 : num2;  
      min_div = (num1 < num2) ? num1 : num2;
    int i = 1;
    while(1){
        int a = max_div*i;
        if(a  % min_div == 0 ){
            printf("%d",a);
            break;
        }
        i++;
    }
}
