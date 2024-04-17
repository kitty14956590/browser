#pragma once

#include <linked.h>

typedef struct {
	void * ptr;
	linked_t * children;
} tree_t;

tree_t * alloc_tree();