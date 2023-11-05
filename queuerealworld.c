#include <stdio.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, back = -1;

void enqueue(int customerNumber) {
    if (back == MAX_SIZE - 1) {
        printf("Error: The queue is full. Customer %d cannot join the queue.\n", customerNumber);
        return;
    }
    if (front == -1) {
        front = 0;
    }
    back++;
    queue[back] = customerNumber;
    printf("Customer %d joined the queue.\n", customerNumber);
}

int dequeue() {
    if (front == -1 || front > back) {
        printf("Error: The queue is empty. No customers to serve.\n");
        return -1;
    }
    int servedCustomer = queue[front];
    front++;
    return servedCustomer;
}

void removeCustomer(int customerNumber) {
    int found = 0;
    for (int i = front; i <= back; i++) {
        if (queue[i] == customerNumber) {
            found = 1;
            printf("Customer %d left the queue.\n", customerNumber);
            for (int j = i; j < back; j++) {
                queue[j] = queue[j + 1];
            }
            back--;
            break;
        }
    }
    if (!found) {
        printf("Error: Customer %d not found in the queue.\n", customerNumber);
    }
}

void displayCustomers() {
    if (front == -1 || front > back) {
        printf("The queue is empty.\n");
        return;
    }
    printf("Customers in the queue: ");
    for (int i = front; i <= back; i++) {
        printf("Customer %d ", queue[i]);
    }
    printf("\n");
}

int main() {
    printf("Bank Customer Queue Simulation:\n");

    int choice;
    int customerNumber;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add a customer to the queue\n");
        printf("2. Serve the next customer\n");
        printf("3. Remove a customer from the queue\n");
        printf("4. Display customers in the queue\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter customer number: ");
                scanf("%d", &customerNumber);
                enqueue(customerNumber);
                break;
            case 2:
                customerNumber = dequeue();
                if (customerNumber != -1) {
                    printf("Customer %d was served.\n", customerNumber);
                }
                break;
            case 3:
                printf("Enter customer number to remove: ");
                scanf("%d", &customerNumber);
                removeCustomer(customerNumber);
                break;
            case 4:
                displayCustomers();
                break;
            case 5:
                printf("Exiting the program. Thank you!\n");
                return 0;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
