#include <stdio.h>
#include "linked_list.h"



struct Node* cds_ll_search(LinkedList L, int value){
    struct Node *curr = L.head;
    while(curr != NULL && curr->value != value){
       curr = curr->next; 
    }
    return curr;
}

void cds_ll_preppend(LinkedList *L, int value){
    struct Node node = {.value = value, .prev = NULL, .next = L->head};
    if(L->head != NULL) L->head->prev = &node;
    L->head = &node;
    printf("Hola\n");
}

void cds_ll_preppend_node(LinkedList *L, struct Node *node){
	node->prev = NULL;
	node->next = L->head;
	if(L->head != NULL) L->head->prev = node;
    L->head = node;
}

void cds_ll_print(LinkedList L){
    struct Node *curr = L.head;
    while(curr != NULL){
        printf("|%d", curr->value);
        curr = curr->next;
    }
    printf("|\n");
}