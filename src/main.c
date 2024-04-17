#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <linked.h>
#include <html.h>
#include <test.h>
#include <help.h>

int main(int argc, char * argv[]) {
	int opt;

	while ((opt = getopt(argc, argv, "th")) != -1) {
		switch (opt) {
			case 't':
				unit_test_everything();
				break;

			case 'h':
				printf(help_text, argv[0]); // gcc will get mad at me :c
				exit(0);
		}
	}


	char * my_terrible_test_document = "<p>Hi</p>";
	document_t * document = parse_document(my_terrible_test_document);
	printf("Document: %p\n", document);
}
