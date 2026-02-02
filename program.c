#include <stdio.h>
#include<stdlib.h>
struct contact {
    int songs;
    struct playlist *next;
    struct playlist *previous;
};
int main() {
    
    struct contact *head = NULL;
     struct contact *n1 = (struct contact*)malloc(sizeof(struct contact));
     struct contact *n2 = (struct contact*)malloc(sizeof(struct contact));
     struct contact *n3 = (struct contact*)malloc(sizeof(struct contact));

     scanf("%d %d %d",&n1->songs,&n2->songs,&n3->songs);
   
    n1->previous = NULL;
    n1->next = head;
    head = n1;
    n2->previous = n1;
    n2->next = head;
    head = n2;
    n3->previous = n2;
    n3->next = head;
    head = n3;
    

     printf("Contact Numbers\n");

     

     while(head != NULL){

         printf("%ld < --> ",head->songs);

         head = head->next;

     }
printf("NULL");
    return 0;

}
