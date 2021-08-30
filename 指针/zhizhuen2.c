/*
指针可以用关系运算符进行比较，如 ==、< 和 >。如果 p1 和 p2 指向两个相关的变量，比如同一个数组中的不同元素，则可对 p1 和 p2 进行大小比较。
*/
#include<stdio.h>
void contrastZhizhen();

const int MAX = 3;
int var[] = {55, 100, 1000};
int main(int argc, char const *argv[])
{
    /* code */
    contrastZhizhen();
    return 0;
}

void contrastZhizhen(){
    printf("比较指针\n");
    int i, *ptr;
    ptr = var;
    i = 0;
    while (ptr <= &var[MAX - 1])
    {   
        /* code */
        printf("var[%d]的地址是%p\n", i,ptr);
        printf("var[%d]的值是:%d\n", i,*ptr);
        ptr++;
        i++;
    }
}
