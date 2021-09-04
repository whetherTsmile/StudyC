#include<stdio.h>
typedef struct T
{
    int a;
    int b;
}T1;
int main(int argc, char const *argv[])
{
    T1 t;
    t.a = 1;
    t.b = 10;
    printf("%p\n", &t.a);
    printf("%p\n", &t.b);
    return 0;
}
