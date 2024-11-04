#include<stdio.h>
#include<stdlib.h>

    typedef struct Node
    {
        int data;
        struct Node* next;
    } N;
    N *createNode(int data){
        N *newNode = (N*)malloc(sizeof (N));
        newNode->next = NULL;
        newNode->data = data;
        return newNode;
    }

    void printlist(N* head){
        N* current = head;
        while(current != NULL){
            printf("%d -> ", current->data);
            current = current->next;
        }
        printf("NULL\n");
    }

    // void appendNode(struct Node** head, int data){
    //     struct Node* newNode = createNode(data);
    //     if(*head == NULL){
    //         *head = newNode;
    //     }
    //     else{
    //         struct Node* current = *head;
    //         while (current->next != NULL){
    //             current = current->next;
    //         }
    //         current->next = newNode;
    //     }
    // }

int main(){
    N* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);

    // struct Node* head = NULL;
    // int n,i,data;

    // printf("Enter the number of elements: ");
    // scanf("%d",&n);

    // for(i=0;i<n;i++){
    //     printf("Element number: %d",i+1);
    //     scanf("%d",&data);
    //     appendNode(&head, data);
    // }

    printf("Linked list elements: ");
    printlist(head);

    N* current = head;
    N* next;
    while(current != NULL){
        next = current->next;
        free(current);
        current = next;
    }
    return 0;
}
