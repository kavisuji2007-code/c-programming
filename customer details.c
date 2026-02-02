#include <stdio.h>
#include <stdlib.h>

struct Contact {
    long long phone;
};

struct Customer {
    int accNo;
    struct Contact c;
    struct Customer *next;
};

int main() {
    struct Customer *cust1 = (struct Customer *)malloc(sizeof(struct Customer));
    scanf("%d %ld",&cust1->accNo,&cust1->c.phone);
    cust1->next = NULL;

    struct Customer *cust2 = (struct Customer *)malloc(sizeof(struct Customer));
   scanf("%d %ld",&cust2->accNo,&cust2->c.phone);
    cust2->next = NULL;

    cust1->next = cust2;

    struct Customer *temp = cust1;
    while (temp != NULL) {
        printf("%d - %lld -> ", temp->accNo, temp->c.phone);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
