#include<stdio.h>
int main(){
    int n;
    printf("Enter n value");
    scanf("%d",&n);
    int primr[n+1];
    for (int i=1 ; i<=n; i++){
        prime[i]=i;
    }
    for(int i=2; i*i<=n;i++)
    {
        if(prime[i] != -1)
        {
            for(int j=i*i; j<=n; j++)
            {
                prime[j]=-1;
            }
        }
    }
    return 0;
}