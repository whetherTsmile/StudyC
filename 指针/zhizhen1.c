#include <stdio.h>
const int MAX = 3;
int var[] = {55, 100, 1000};
void testZhizhen();
void increaseZhizhen();
void discreaseZhizhen();
int main(int argc, char const *argv[])
{

    testZhizhen();
    increaseZhizhen();
    // discreaseZhizhen();
    return 0;
}

void increaseZhizhen()
{
    printf("递增\n");
    int i, *ptr;
    /*
        大概   数组的地址取于第一个数的地址 加不加&都可以取到地址
     */
    printf("var的存储地址值为:%p\n", var);
    ptr = var;
    // ptr = &var[MAX - 1];
    for (i = 0; i < MAX; i++)
    {
        /* code */
        printf("var[%d]的存储地址值为:%p\n", i, ptr);
        printf("var[%d]的存储值为:%d\n", i, *ptr);
        ptr++;
    }
}

void discreaseZhizhen()
{
    printf("递减\n");
    int i, *ptr;
    ptr = &var[MAX - 1];
    for (i = MAX; i > 0; i--)
    {
        printf("var[%d]的存储地址值为:%p\n", i - 1, ptr);
        printf("var[%d]的存储值为:%d\n", i - 1, *ptr);
        ptr--;
    }
}

void testZhizhen()
{
    int *ptr;
    // for (int i = 0; i < 3; i++)
    // {
    //     /* code */
    //     ptr = &var[i];
    //     printf("%p\n", ptr);
    // }
    printf("var[2]的地址是:%p\n", &var[2]);
    printf("var[2]的值为:%d\n", var[2]);
    ptr = &var[2];
    ptr++;
    printf("var[2]的递增后超出边界的地址是:%p\n", ptr);
    printf("var[2]的递增后超出边界值为:%d\n", *ptr);
}
