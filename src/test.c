#include <linked.h>
#include <alloc.h>

char * test_bool_name(int bool) {
	static char * true = "passed";
	static char * false = "failed";
	return bool ? true : false;
}

int unit_test_everything() {
	alloc_test();
	linked_test();
	return 0;
}