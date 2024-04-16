#include <stdio.h>
#include <html.h>

int main(int argc, char * argv[]) {
	element_t * element = parse_element("<p>");
	printf("%p\n", element);
}
