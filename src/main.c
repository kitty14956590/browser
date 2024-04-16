#include <stdio.h>
#include <html.h>

int main(int argc, char * argv[]) {
	char * my_terrible_test_document = "<p>Hi</p>";
	document_t * document = parse_document(my_terrible_test_document);
	printf("%p\n", document);
}
