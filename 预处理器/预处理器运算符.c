#include <stdio.h>
int square();
int main(int argc, char const *argv[])
{
    //字符串常量运算符#   &   宏延续运算符  '\'
#define message_for(a, b) \
    printf(#a " and " #b ":we love you \n")
    message_for(haha, gaga);

    //标记粘贴运算符 ##
#define tokenpaster(n) printf("token" #n "=%d\n", token##n)
    int token34 = 40;
    tokenpaster(34);

    //defined运算符 预处理器 defined
    // 运算符是用在常量表达式中的，
    // 用来确定一个标识符是否已经使用 #define 定义过。如果指定的标识符已定义，则值为真（非零）。
    // 如果指定的标识符未定义，则值为假（零）。下面的实例演示了 defined() 运算符的用法：
#if !defined(MESSAGE)
#define MESSAGE "you wish"
#endif
    printf("Here is the Message:%s\n", MESSAGE);

    //计算一个数的平方
    printf("平方等于:%d\n", square(2));
    //by 宏 （参数化的宏）
    #define _square(x) ((x)*(x))
    printf("通过宏来平方:%d\n", _square(3));
    #define MAX(x,y) ((x)>(y)?(x):(y))
    printf("Max between 20 and 10 is %d\n", MAX(10, 20));  
    return 0;
}
//计算一个数的平方
int square(int x)
{
    return x *x;
}