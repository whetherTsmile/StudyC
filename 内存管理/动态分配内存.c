#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	void *calloc(int num, int size);
在内存中动态地分配 num 个长度为 size 的连续空间，并将每一个字节都初始化为 0。所以它的结果是分配了 num*size 个字节长度的内存空间，并且每个字节的值都是0。
    void *malloc(int num);
在堆区分配一块指定大小的内存空间，用来存放数据。这块内存空间在函数执行完成后不会被初始化，它们的值是未知的。
*/
int main(int argc, char const *argv[])
{
    char name[50];
    char *description;
    strcpy(name, "haha");
    //动态分配内存
    // description = calloc(200, sizeof(char));
    description = (char *)malloc(200 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy(description, "Zara ali a DPS student in class 10th");
    }
    printf("my name is :%s\n", name);
    printf("my description:%s\n", description);
}
