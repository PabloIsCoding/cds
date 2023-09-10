#include "linked_list.h" 
#include <stdio.h>
int main(void){
    LinkedList L = {.head = NULL};
	int vals[7] = { 3, 4, 5, 6, 7, 8, 9 };
	for (int i = 0; i < 7; i++) {
		struct Node node = { .value = vals[i], .prev = NULL, .next = NULL };
		cds_ll_preppend_node(&L, &node);
	}
    cds_ll_print(L);
    return 0;
}