#include <linked.h>

char * test_bool_name(int bool) {
	static char * true = "\033[32;1mpassed\033[0m";
	static char * false = "\033[31;1mfailed\033[0m";
	return bool ? true : false;
}

int unit_test_everything() {
	linked_test();
	return 0;
}
