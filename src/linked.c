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
	linked_t * top = root;
	root->ptr = (linked_t *) 0;
	root->next = (linked_t *) 0;
	if (!length) {
		return root; // yayy !! here you go !!
	}
	while (length--) {
		top->next = alloc_linked();
		top = top->next;
	}
	top->next = (linked_t *) 0;
	return root;
}

int iterate_list(linked_callback_t callback, linked_t * list) {
	while (list) {
		int retval = callback(list);
		if (retval) {
			return retval;
		}
		list = list->next;
	}
	return 0;
}
