
// Strut
typedef struct Product Product;
struct Product {
    char name[30],
    char description[30],
    double price
};

// Methods
Product * new_product(char * name, char *description, double price);
Product * load_product(char * filename);
Product * prompt_product();
void delete_product(Product * p);
void save_product(Product * p);
void display_product(Product * p);