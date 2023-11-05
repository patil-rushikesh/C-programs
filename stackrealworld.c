#include <stdio.h>
#include <string.h>
#define MAX 100

int top = -1;
char stack_books[MAX][100]; 

void pushBook(const char book[]);
void popBook(char book[]);
int isEmpty(void);

int main() {
    char bookshelf[MAX][100]; 
    int i;

    printf("Welcome to the Library!\n");

    
    printf("Enter the books on the top of the stack (one by one):\n");
    for (i = 0; i < MAX; i++) {
        char book[100]; 
        scanf(" %[^\n]", book); 
        if (strcmp(book, "0") == 0) // Input '0' to stop adding books
            break;
        pushBook(book);
    }

    // Reorganize books 
    for (i = 0; i < MAX; i++) {
        if (isEmpty()) {
            break;
        }
        popBook(bookshelf[i]); // Pop books from the stack and place them on the shelf
    }

    printf("Books rearranged on the shelf:\n");
    for (i = 0; i < MAX; i++) {
        if (strcmp(bookshelf[i], "") == 0) {
            break; // Stop if an empty book title is encountered
        }
        printf("%s\n", bookshelf[i]);
    }

    printf("Thank you for using the Library!\n");
    return 0;
}

void pushBook(const char* book) {
    if (top == MAX - 1) {
        printf("\nBookshelf is full!\n");
        return;
    }
    top = top + 1;
    strcpy(stack_books[top], book); 
}

void popBook(char* book) {
    if (isEmpty()) {
        printf("\nBookshelf is empty!\n");
        book[0] = '\0';
        return;
    }
    strcpy(book, stack_books[top]); 
    top = top - 1;
}

int isEmpty() {
    return (top == -1);
}
