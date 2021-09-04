#include <stdarg.h>
#include <stdio.h>
/*
省略号之前的那个参数是 int，代表了要传递的可变参数的总数。
为了使用这个功能，需要使用 stdarg.h 头文件，该文件提供了实现可变参数功能的函数和宏。
*/
int fun(int i, ...)
{
    printf("%d\n", i);
    return i;
}
/*
定义一个函数，最后一个参数为省略号，省略号前面可以设置自定义参数。
在函数定义中创建一个 va_list 类型变量，该类型是在 stdarg.h 头文件中定义的。
使用 int 参数和 va_start 宏来初始化 va_list 变量为一个参数列表。宏 va_start 是在 stdarg.h 头文件中定义的。
使用 va_arg 宏和 va_list 变量来访问参数列表中的每个项。
使用宏 va_end 来清理赋予 va_list 变量的内存。
*/

double average(int num, ...)
{
    double sum = 0;
    va_list valist;
    int i = 0;
    //为num个参数初始化valist
    va_start(valist, num); //valist 指向传入的第一个可选参数，num指向最后一个参数,超出传入数量都为0

    //访问所有赋给valist的参数
    for (i = 0; i < num; i++)
    {
        if (i == 2)
        {
            printf("%d\n", va_arg(valist, int));
            continue;
        }
        // printf("%d\n", va_arg(valist, int));//3 5
        sum += va_arg(valist, int); //va_arg()调用一次递减一次 sum 4 / num->3 不知道怎么实现，内存+4或+8，表现为递减，内存地址递增
        // printf("%f\n", sum);
        // printf("%d\n", va_arg(valist, int));//3 5
    }
    //清理为valist保留的内存
    va_end(valist);

    return sum / num;
}

int main(int argc, char const *argv[])
{
    // fun(1, 2, 3, 4);
    // fun(1);
    printf("average of 3,4,5=%f\n", average(4, 3, 4, 5, 8)); //超出 参数数量以上输出不知道什么东西，%f格式化的内存地址?
    printf("Average of 5, 10, 15 = %f\n", average(3, 5, 10, 15));
    return 0;
}
