/*
	void free(void *address);
该函数释放 address 所指向的内存块,释放的是动态分配的内存空间。
    void *realloc(void *address, int newsize);
该函数重新分配内存，把内存扩展到 newsize。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char name[50];
    char *description;
    strcpy(name, "haha");
    //动态分配内存
    // description = calloc(200, sizeof(char));
    description = (char *)malloc(30 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy( description, "Zara ali a DPS student.");
    }
    description = (char *)realloc(description, 100 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcat(description, "She is in class 10th"); //strcat  续写字符串
    }
    printf("my name is :%s\n", name);
    printf("my description:%s\n", description);
    free(description);
    return 0;
}

/*
对于 void 指针，GNU 认为 void * 和 char * 一样，所以以下写法是正确的:

description = malloc( 200 * sizeof(char) );
但按照 ANSI(American National Standards Institute) 标准，需要对 void 指针进行强制转换，如下:

description = (char *)malloc( 200 * sizeof(char) );
同时，按照 ANSI(American National Standards Institute) 标准，不能对 void 指针进行算法操作:

void * pvoid;
pvoid++; //ANSI：错误
pvoid += 1; //ANSI：错误
// ANSI标准之所以这样认定，是因为它坚持：进行算法操作的指针必须是确定知道其指向数据类型大小的。

int *pint;
pint++; //ANSI：正确
*/
