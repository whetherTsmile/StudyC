#include<stdio.h>
int main(int argc, char const *argv[])
{
    char a[20] = "hello world";
    printf("%s\n",a);
    int var = 10;
    // int *ip = NULL;
    int *ip;
    ip = &var;
    printf("%p\n", ip);
    printf("%d\n", *ip);
    ip++;
    printf("%p\n", ip);
    printf("%d\n", *ip);
    if (ip)
    {
        printf("非空");
    }
    else if (!ip)
    {
        printf("为空");
    }

    return 0;
}
