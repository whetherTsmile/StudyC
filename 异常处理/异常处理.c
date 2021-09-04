#include <errno.h>
// #include <error.h>
#include <stdio.h>
#include <string.h>

extern int errno;
int main(int argc, char const *argv[])
{
    FILE *fp;
    int errnum;
    fp = fopen("/tmp/gaga.txt", "r");
    if (fp == NULL)
    {
        errnum = errno;
        fprintf(stderr, "错误号:%d\n", errno);
        perror("通过perror函数输出错误信息");                   //perror() 函数显示您传给它的字符串，后跟一个冒号、一个空格和当前 errno 值的文本表示形式
        fprintf(stderr, "打开文件错误:%s\n", strerror(errnum)); //strerror() 函数，返回一个指针，指针指向当前 errno 值的文本表示形式。
    }
    else
    {
        fclose(fp);
    }

    return 0;
}
