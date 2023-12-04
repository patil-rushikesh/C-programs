#include <stdio.h>
#include<math.h>

int main(){
    int onum;
    printf("enter octal number\n");
    scanf("%d", &onum);
    int i = 0 , dnum = 0;
    while(onum!=0){
        int r = onum%10;
        dnum = r *pow(8,i)+dnum;
        i++;
        onum = onum /10;
    }
    printf("%d",dnum);
}
