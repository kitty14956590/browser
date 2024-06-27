#include <stdlib.h>
#include <tree.h>

tree_t * alloc_tree() {
	return (tree_t *) calloc(1, sizeof(tree_t));
}

void free_tree(tree_t * tree) {

}
