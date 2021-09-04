#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Program name %s\n", argv[0]); //argv[0]默认文件名，argv[1]是一个指向第一个命令行参数的指针，*argv[n] 是最后一个参数。
                                          // 如果没有提供任何参数，argc 将为 1，否则，如果传递了一个参数，argc 将被设置为 2。
    if (argc == 2)
    {
        printf("The argument supplied is %s\n", argv[1]);
    }
    else if (argc > 2)
    {
        printf("Too many arguments supplied.\n");
    }
    else
    {
        printf("One argument expected.\n");
    }
    printf("%d\n", argc);
    return 0;
}
