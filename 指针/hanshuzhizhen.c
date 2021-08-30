#include <stdio.h>
//函数指针
int max();
int main(int argc, char const *argv[])
{
    /* code */
    int a, b, c, d;
    printf("输入三个数\n");
    scanf("%d,%d,%d", &a, &b, &c);
    // printf("%p\n", &max);
    int (*p)(int a, int ba) = &max;
    // printf("%p\n",p);
    d = p(p(a, b), c); //=>max(max(a,b),c)
    printf("%d\n", d);
    return 0;
}

int max(int x, int y)
{
    return x > y ? x : y;
}


