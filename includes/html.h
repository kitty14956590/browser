typedef struct {} document_t;

typedef struct {
	char * tag;
} element_t;

element_t * parse_element(char * html);
document_t * parse_document(char * html);
