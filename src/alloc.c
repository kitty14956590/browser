#include <stddef.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <test.h>

void * malloc_zero(size_t size) {
	void * your_stuff = malloc(size);
	if (!your_stuff) {
		return your_stuff;
	}
	memset(your_stuff, 0, size);
	return your_stuff;
}

void alloc_test() {
	uint64_t * test = malloc_zero(1024);
	int i = 1024 / 8;
	while (i--) {
		if (test[i]) {
			break;
		}
	}
	printf("malloc_zero(): %s\n", test_bool_name(i));
}