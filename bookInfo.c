#include <stdio.h>
#include <string.h>

typedef struct Books
{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
} Book;

int main(void) 
{
    Book book;

    strcpy(book.title, "C Programming");
    strcpy(book.author, "Nuha Ali");
    strcpy(book.subject, "Programming C");
    book.book_id = 438743939;

    printf("Title: %s\n", book.title);
    printf("Author %s\n", book.author);
    printf("Subject: %s\n", book.subject);
    printf("Book ID: %i\n", book.book_id);
    
    return 0;
}