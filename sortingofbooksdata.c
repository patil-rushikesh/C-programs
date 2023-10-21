#include <stdio.h>
struct booksdata
{
    int bookid;
    char name[30];
    char author[30];
    int dateofreleased;
    char genre[30];
};
void sortbyid(struct booksdata b[], int i)
{
    struct booksdata temp;
    for (int k = 0; k < i; k++)
    {
        for (int j = k + 1; j <= i; j++)
        {
            if (b[j].bookid < b[k].bookid)
            {
                temp = b[k];
                b[k] = b[j];
                b[j] = temp;
            }
        }
    }
}
void sortbydor(struct booksdata b[], int i)
{
    struct booksdata temp;
    for (int k = 0; k < i; k++)
    {
        for (int j = k + 1; j <= i; j++)
        {
            if (b[j].dateofreleased < b[k].dateofreleased)
            {
                temp = b[k];
                b[k] = b[j];
                b[j] = temp;
            }
        }
    }
}
void sortbyname(struct booksdata b[], int i)
{
    struct booksdata temp;
   for (int k = 0; k < i; k++)
    {
        for (int j = k + 1; j <= i; j++)
        {
         // swapping strings if they are not in the lexicographical order
         if (strcmp(b[j].name, b[k].name) < 0) {
                temp = b[k];
                b[k] = b[j];
                b[j] = temp;
         }
      }
   }

}
void sortbyauthor(struct booksdata b[], int i)
{
    struct booksdata temp;
   for (int k = 0; k < i; k++)
    {
        for (int j = k + 1; j <= i; j++)
        {
         // swapping strings if they are not in the lexicographical order
         if (strcmp(b[j].author, b[k].author) < 0) {
                temp = b[k];
                b[k] = b[j];
                b[j] = temp;
         }
      }
   }

}
void sortbygenre(struct booksdata b[], int i)
{
    struct booksdata temp;
   for (int k = 0; k < i; k++)
    {
        for (int j = k + 1; j <= i; j++)
        {
         // swapping strings if they are not in the lexicographical order
         if (strcmp(b[j].genre, b[k].genre) < 0) {
                temp = b[k];
                b[k] = b[j];
                b[j] = temp;
         }
      }
   }

}
    int main()
    {
        int choice = 1;
        struct booksdata b1[100];
        int i = 0;
        while (choice == 1)
        {
            printf("Enter the Data of Book\n");
            printf("Enter Book Id : ");
            scanf("%d", &b1[i].bookid);
            printf("Enter Name of Book : ");
                scanf("%s",&b1[i].name);
            printf("Enter Name of Author : ");
                scanf("%s",&b1[i].author);
            printf("Enter Date of Release (DDMMYYYY): ");
                scanf("%d",&b1[i].dateofreleased);
            printf("Enter Genre: ");
                scanf("%s",&b1[i].genre);
            printf("Do you wish to enter anoter data (yes 1/ No 0)");
            scanf("%d", &choice);
            i++;
        }
        i--;
        int menu = 1;
        while(menu == 1){
        printf("Sort According to (Enter the number) : \n1. Book Id \n2. Name \n3. Author \n4. Date of released \n5.Genre\n");
        int a;
        scanf("%d", &a);
        if(a == 1){
            sortbyid(b1, i);
        }
        else if(a==2){
            sortbyname(b1, i);
        }else if(a==3){
            sortbyauthor(b1, i);
        }else if(a==4){
            sortbydor(b1, i);
        }else if(a==5){
            sortbygenre(b1, i);
        }else{
            printf("Entered wrong value");
        }
        // printing of data
         for (int a = 0; a <= i; a++)
         {
             printf("Bood Id : %d \n",b1[a].bookid);
             printf("Book Name : %s\n",b1[a].name);
             printf("Book Author : %s\n",b1[a].author);
             printf("Date of Released : %d\n",b1[a].dateofreleased);
             printf("Book Genre : %s\n",b1[a].genre);
             printf("-------------------------------------------\n");
         }
         printf("Do you wish to sort again? (yes 1/ No 0)");
            scanf("%d", &menu);
        }
        return 0;
    }
