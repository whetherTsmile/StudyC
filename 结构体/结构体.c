#include <stdio.h>
#include <string.h>


struct Book
{
    char book_name[50];
    char book_author[50];
};

union Data
{
    int i;
    float j;
    char str[20];
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
  //union
    union Data data;
    printf("Memory size occupied by data : %ld\n", sizeof(data));
    data.i = 1;
    data.j = 2.3;
    strcpy(data.str, "who am i");
    printf("data.i=%d\n", data.i);
    printf("data.j=%f\n", data.j);
    printf("data.str=%s\n", data.str);
    //因为共用一个地址，所以最后赋值给变量的值占用了内存地址，导致i，j损坏;
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

//typedef    C 语言提供了 typedef 关键字，您可以使用它来为类型取一个新的名字  typedef struck Book {};  Book book;
/*
#define #define 是 C 指令，用于为各种数据类型定义别名，与 typedef 类似，但是它们有以下几点不同：
    typedef 仅限于为类型定义符号名称，#define 不仅可以为类型定义别名，也能为数值定义别名，比如您可以定义 1 为 ONE。
    typedef 是由编译器执行解释的，#define 语句是由预编译器进行处理的。
*/

// #define one 1;

