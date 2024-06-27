#include <html.h>
#include <stdlib.h>

element_t * alloc_element() {
	return (element_t *) calloc(1, sizeof(element_t));
}

/* xml is evil */
element_t * parse_element(char * html) {
	return (element_t *) 0;
}

tree_t * parse_document(char * html) {
	return (tree_t *) 0;
}
