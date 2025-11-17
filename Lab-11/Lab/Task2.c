#include <stdio.h>
#include <string.h>
struct Book {
    char title[100];
    char author[100];
    int page_count;
    int quantity;
};

int main(){
    struct Book catalog[3];

    // Input details for 3 books
    for(int i = 0; i < 3; i++) {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        fgets(catalog[i].title, sizeof(catalog[i].title), stdin);
        catalog[i].title[strcspn(catalog[i].title, "\n")] = 0;
        printf("Author: ");
        fgets(catalog[i].author, sizeof(catalog[i].author), stdin);
        catalog[i].author[strcspn(catalog[i].author, "\n")] = 0;
        printf("Page Count: ");
        scanf("%d", &catalog[i].page_count);
        getchar();
        printf("Quantity: ");
        scanf("%d", &catalog[i].quantity);
        getchar();
    }

    // Display the catalog
    printf("\nBook Catalog:\n");
    for(int i = 0; i < 3; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", catalog[i].title);
        printf("Author: %s\n", catalog[i].author);
        printf("Page Count: %d\n", catalog[i].page_count);
        printf("Quantity: %d\n\n", catalog[i].quantity);
    }

    return 0;
}
