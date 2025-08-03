#include <stdio.h>
#include "data_loader.h"

int main() {
    int choice;
    while (1) {
        printf("\n--- PWH System ---\n");
        printf("1. Load Database(s)\n");
        printf("2. List Valid Customers\n");
        printf("3. List Valid Parts\n");
        printf("4. List Valid Orders\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            loadDatabases();
            break;
        case 2:
            displayCustomers();
            break;
        case 3:
            displayParts();
            break;
        case 4:
            displayOrders();
            break;
        case 0:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
