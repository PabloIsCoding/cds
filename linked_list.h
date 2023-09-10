struct Node{
    int value;
    struct Node *prev;
    struct Node *next;
};

typedef struct {
    struct Node *head;
}LinkedList;


struct Node* cds_ll_search(LinkedList L, int value);
void cds_ll_preppend(LinkedList *L, int value);
void cds_ll_preppend_node(LinkedList *L, struct Node *node);
void cds_ll_print(LinkedList L);