#include <stdlib.h>
#include <stdio.h>
#include <alloc.h>
#include <linked.h>
#include <test.h>

linked_t * alloc_linked() {
	return (linked_t *) malloc_zero(sizeof(linked_t));
}

void append_linked(linked_t * list, linked_t * stuff) {
	while (list->next) {
		list = list->next;
	}
	list->next = stuff;
	stuff->back = list;
}

// used to be here but it is useless alloc_list()

int iterate_list(linked_t * list, linked_callback_t callback) {
	while (list) {
		int retval = callback(list);
		if (retval) {
			return retval;
		}
		list = list->next;
	}
	return 0;
}

void linked_test() {
	linked_t * linked = alloc_linked();
	linked_t * linked2 = alloc_linked();
	int status = linked && linked2;
	printf("alloc_linked(): %s\n", test_bool_name(status));
	append_linked(linked, linked2);
	status = (linked->next == linked2) && (linked2->back == linked);
	printf("append_linked(): %s\n", test_bool_name(status));
}