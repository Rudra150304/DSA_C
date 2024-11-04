#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}n;

n* create_node(int new_data){
    n *a = (n*)malloc(sizeof(n));
    a -> data = new_data;
    a -> next = NULL;
    return a;
}

void printlist(n* head){
    n* current = head;
    while(current != NULL){
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

n* append(n* head, int new_data){
    n* new_node = create_node(new_data);
    if(head == NULL){
        return new_node;
    }
    n* tail = head;

    while (tail -> next != NULL){
        tail = tail->next;
    }

    tail->next = new_node;
    return head;
}


int main(){
    n* head = create_node(0);
    head->next = create_node(1);
    head->next->next = create_node(2);
    printf("List before insertion: ");
    printlist(head);
    head = append(head, 3);
    printf("List after insertion: ");
    printlist(head);
    return 0;
}