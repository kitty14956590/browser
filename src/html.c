#include <alloc.h>
#include <html.h>

element_t * alloc_element() {
	return (element_t *) malloc_zero(sizeof(element_t));
}

/* xml is evil */
element_t * parse_element(char * html) {
	return (element_t) 0;
}

tree_t * parse_document(char * html) {
	return (tree_t) 0;
}