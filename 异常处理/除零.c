#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int devidend = 20;
    int devisor = 0;
    int quotient;
    if (devisor == 0)
    {
        fprintf(stderr, "除数为0，退出运行\n");
        // exit(-1);
        exit(EXIT_FAILURE);
    }

    quotient = devidend / devisor;
    fprintf(stderr, "除法的值为:%d\n", quotient);
    // exit(0);
    exit(EXIT_SUCCESS);
    //通常情况下，程序成功执行完一个操作正常退出的时候会带有值 EXIT_SUCCESS。在这里，EXIT_SUCCESS 是宏，它被定义为 0。
    // 如果程序中存在一种错误情况，当您退出程序时，会带有状态值 EXIT_FAILURE，被定义为 -1。
}