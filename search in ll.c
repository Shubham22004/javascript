/*
#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node* next;
};

struct Node* searchLinkedList(struct Node* head, int key) 
{
    struct Node* current = head;
    while (current != NULL) 
    {
       
        if (current->data == key) 
        {
            return current; 
        }
        current = current->next;
    }
    return NULL; 
}

int main() 
{
    
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;

    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 2;

    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->data = 3;

    head->next->next->next = NULL;

    
    int keyToSearch = 2;
    struct Node* result = searchLinkedList(head, keyToSearch);

    
    if (result != NULL) 
    {
        printf("Key %d found in the linked list.\n", keyToSearch);
    } 
    else 
    {
        printf("Key %d not found in the linked list.\n", keyToSearch);
    }

   
    free(head->next->next);
    free(head->next);
    free(head);

    return 0;
}

*/

#include<stdio.h>
#include<stdlib.h>

