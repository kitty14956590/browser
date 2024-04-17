#include <tree.h>
#include <alloc.h>

tree_t * alloc_tree() {
	return (tree_t *) malloc_zero(sizeof(tree_t));
}

void free_tree(tree_t * tree) {

}