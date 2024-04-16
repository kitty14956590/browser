typedef struct {} document_t; // FUCK

typedef struct {
	char * tag;
} element_t;

element_t * parse_element(char * shit);
document_t * parse_document(char * shit);
