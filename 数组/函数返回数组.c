#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int * getRandom()
{
    static int r[10];
    int i;
    /*
    1、是拿当前系统时间作为种子，由于时间是变化的，种子变化，可以产生不相同的随机数。计算机中的随机数实际上都不是真正的随机数，如果两次给的种子一样，是会生成同样的随机序列的。 所以，一般都会以当前的时间作为种子来生成随机数，这样更加的随机。
    2、使用时，参数可以是unsigned型的任意数据，比如srand（10）；
    3、如果不使用srand，用rand（）产生的随机数，在多次运行，结果是一样的。
    */
    srand((unsigned)time(NULL));
    for (i = 0; i < 10; i++)
    {
        r[i] = rand();
        printf("r[%d]=%d\n", i, r[i]);
    }
    printf("数组的指针:%p\n", r);
    printf("r[0]的地址:%p\n", &r[0]);
    return r;
}

int main(int argc, char const *argv[])
{
    printf("%p\n", getRandom);
    int *p;
    int i;
    p = getRandom();
    for (i = 0; i < 10; i++)
    {
        printf("*(p+%d):%d\n", i, *p++);
    }
    return 0;
}

