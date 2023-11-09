#include <stdio.h>
#include <string.h>

char shop[][100] = {"1. Shirt", "2. Jeans", "3. Jacket", "4. Trouser", "5. T-shirt", "6. Shoes"};
int sizeOfShop = sizeof(shop) / sizeof(shop[0]);
int top = -1;
char cart[100][100]; 

void viewshop() {
    for (int i = 0; i < sizeOfShop; i++) {
        printf("%s\n", shop[i]);
    }
    return;
}

void additem(int itemNo) {
    if (itemNo <= sizeOfShop) {
        top++;
        strcpy(cart[top], shop[itemNo - 1]);
        printf("Item %s successfully added to the cart.\n", shop[itemNo - 1]);
    } else {
        printf("Enter a valid item number.\n");
    }
    return;
}

void removeitem() {
    if (top == -1) {
        printf("Cart empty!\n");
    } else {
        printf("Item %s successfully removed from the cart.\n", cart[top]);
        top--;
    }
    return;
}

void viewitem() {
    if (top == -1) {
        printf("Cart empty!\n");
    } else {
        printf("%s is at the top of the cart.\n", cart[top]);
    }
    return;
}

void viewcart() {
    if (top == -1) {
        printf("Cart empty!\n");
    } else {
        printf("Items in the cart:\n");
        for (int i = top; i >= 0; i--) {
            printf("%s\n", cart[i]);
        }
    }
    return;
}

int main() {
    printf("Welcome to Shopping Cart:\n");

    int choice;
    int itemNo;

    while (1) {
        printf("\nMenu:\n");
        printf("1. View the available items in the shop store\n");
        printf("2. Add an item to the cart\n");
        printf("3. Remove the last item from the cart\n");
        printf("4. View the item at the top of the cart\n");
        printf("5. View all the items in the cart\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                viewshop();
                break;
            case 2:
                printf("Enter the number of the item to be added to the cart: ");
                scanf("%d", &itemNo);
                additem(itemNo);
                break;
            case 3:
                removeitem();
                break;
            case 4:
                viewitem();
                break;
            case 5:
                viewcart();
                break;
            case 6:
                printf("Exiting the program. Thank you!\n");
                return 0;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }
}
