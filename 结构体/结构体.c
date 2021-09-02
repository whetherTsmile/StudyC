#include <stdio.h>
#include <string.h>

struct Book
{
    char book_name[50];
    char book_author[50];
};
void printbooks(struct Book book);
void printbooksByPoint(struct Book *book);

int main(int argc, char const *argv[])
{
    /* code */
    struct Book book1;
    strcpy(book1.book_name, "三体");
    strcpy(book1.book_author, "刘慈欣");
    printf("书名:%s\n", book1.book_name);
    printf("书的作者:%s\n", book1.book_author);
    printbooks(book1);
    printbooksByPoint(&book1);
    return 0;
}

void printbooks(struct Book book){
    printf("book_name=%s\n", book.book_name);
    printf("book_author=%s\n", book.book_author);
     printf("book_name=%p\n", &book.book_name);
    printf("book_author=%p\n", &book.book_author);
}

void printbooksByPoint(struct Book *book){
    printf("point book_name=%s\n", book->book_name);
    printf("point book_author=%s\n", book->book_author);
}
