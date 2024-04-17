#pragma once

typedef struct linked {
	void * ptr;
	struct linked * next;
	struct linked * back;
} linked_t;

typedef int (* linked_callback_t)(linked_t *);

linked_t * alloc_linked();
int iterate_list(linked_t * list, linked_callback_t callback);

void linked_test();