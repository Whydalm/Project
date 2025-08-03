#ifndef MODELS_H
#define MODELS_H

#define MAX_CUSTOMERS 50
#define MAX_PARTS 50
#define MAX_ORDERS 30

typedef struct {
    int id;
    char name[50];
    char address[100];
    char city[50];
    char province[3];
    char postalCode[8];
    char phone[15];
    char email[50];
    float creditLimit;
    float balance;
    char joinDate[11]; \
} Customer;

typedef struct {
    int id;
    char name[50];
    char description[100];
    float price;
    int quantity;
    char status[20];
} Part;

typedef struct {
    int id;
    int customerId;
    char date[11];
    int partIds[10];
    int quantities[10];
    int numItems;
    float total;
    int status;
} Order;

#endif

