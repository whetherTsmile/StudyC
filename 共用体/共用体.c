#include <stdio.h>
#include <string.h>
union Books
{
    char book_name[50];
    int book_id;
    float yeshu;
};

int main(int argc, char const *argv[])
{
    union Books book1;
    book1.book_id = 1;
    book1.yeshu = 4.0;
    strcpy(book1.book_name, "三体");
    printf("union地址:%p\n", &book1.book_id);
    printf("union地址:%p\n", &book1.book_name);
    printf("union地址:%p\n", &book1.yeshu);
    return 0;
}
