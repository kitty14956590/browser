typedef struct linked {
	void * ptr;
	struct linked * next;
} linked_t;

typedef int (* linked_callback_t)(linked_t *);

linked_t * alloc_linked();
linked_t * alloc_list(int length);
int iterate_list(linked_callback_t callback, linked_t * list);
