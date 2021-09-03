/*
在有多个 .h 文件和多个 .c 文件的时候，往往我们会用一个 global.h 的头文件来包括所有的 .h 文件，
然后在除 global.h 文件外的头文件中 包含 global.h 就可以实现所有头文件的包含，
同时不会乱。方便在各个文件里面调用其他文件的函数或者变量
*/
#define SYSTEM_H <stdio.h>
// #include SYSTEM_H
// #include "../指针/zhizhen1.c" //引用用户文件
#ifndef _GLOBAL_H
#define _GLOBAL_H
#include SYSTEM_H
#endif

#
int main(int argc, char const *argv[])
{
    // printf("%d\n", var[1]); //来自 zhizhen1.c
    printf("afa\n");
typedef struct Book{int id} Book;
Book book;
printf("%d\n",book.id);
return 0;
}
