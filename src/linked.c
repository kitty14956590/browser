#include <stdlib.h>
#include <stdio.h>
#include <linked.h>

linked_t * alloc_linked() {
	linked_t * linked = malloc(sizeof(linked_t));
	if (!linked) {
		printf("FUCK\n");
		exit(-1);
	}
	return linked;
}

linked_t * alloc_list(int length) {
	linked_t * root = alloc_linked();
	if (!length) {
		root->ptr = (linked_t *) 0;
		root->next = (linked_t *) 0;
		return root; // yayy !! here you go !!
	}
	
}
