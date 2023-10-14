#include<stdio.h>
struct stud
    {
        int roll;
        char prn[30];
        char name[30];
        int ph;
        float per;
    };
    struct temp
    {
        int roll;
        char prn[30];
        char name[30];
        int ph;
        float per;
    };
    struct x
    {
        int roll;
        char prn[30];
        char name[30];
        int ph;
        float per;
    };
int main(){
    int choice = 1;
    struct stud s1[100],x, temp;
    int i=0;
    while(choice==1){
    printf("Enter the Data of Student\n");
    printf("Enter Roll No. : ");
        scanf("%d",&s1[i].roll);
    printf("Enter PRN No. : ");
        scanf("%s",&s1[i].prn);
    printf("Enter Name : ");
        scanf("%s",&s1[i].name);
    printf("Enter Phone Number : ");
        scanf("%d",&s1[i].ph);
    printf("Enter Percentage : ");
        scanf("%f",&s1[i].per);
    printf("Do you wish to enter anoter data (yes 1/ No 0)");
    scanf("%d", &choice);
    i++;
    }
    /*
    int j=0;
    int choice2 = 0;
    printf("Do you wish to access any data (yes 1/ No 0)");
    scanf("%d", &choice2);
    while(choice2==1){
        printf("Enter the Number of data to be accessed : ");
        scanf("%d",&j);
        j = j-1;
        printf("Student Roll No. : %d",s1[j].roll);
        printf("Student PRN : %s",s1[j].prn);
        printf("Student Name : %s",s1[j].name);
        printf("Student Phone No. : %d",s1[j].ph);
        printf("Do you wish to access anoter data (yes 1/ No 0)");
        scanf("%d", &choice2);
    }
    */
    //Sorting
    i--;
    for(int k = 0; k<i ; k++)
    {
        x = s1[k];
        for(int j= k+1; j<=i; j++)
        {
            if(s1[j].roll < s1[k].roll)
            {
                temp = s1[k];
                s1[k]=s1[j];
                s1[j]= temp;
            }
    }
    }
    printf("Do you wish to enter the sorted data yes (1)/ No (0)");
    int n = 0;
    scanf("%d", &n);
    if(n==1){
    for (int a = 0; a <= i; a++)
    {
        printf("Student Roll No. : %d \n",s1[a].roll);
        printf("Student PRN : %s\n",s1[a].prn);
        printf("Student Name : %s\n",s1[a].name);
        printf("Student Phone No. : %d\n",s1[a].ph);
        printf("-------------------------------------------\n");
    }
    }

}
