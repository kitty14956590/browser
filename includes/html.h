#pragma once

#include <tree.h>

typedef struct {
	char * tag;
} element_t;

element_t * parse_element(char * html);
tree_t * parse_document(char * html);
