#include <stdio.h>

//可以看出，位域在本质上就是一种结构类型，不过其成员是按二进位分配的
struct
{
    unsigned int widthValidated;
    unsigned int heightValidate;
} status1;

struct
{
    unsigned int withValidated : 1;   //代表了 二进制的长度   int 最大支持 2^5 = 32位(4个字节),比如需要存储1-7的数，可以使用3位
    unsigned int heightValidated : 1;
} status2;

int test();

int main(int argc, char const *argv[])
{
    printf("Memory size occupied by status1:%ld\n", sizeof(status1));
    printf("Memory size occupied by status2:%ld\n", sizeof(status2));
    int (*p)(unsigned f1 ,unsigned f2 ,unsigned f3 ,unsigned f4 ,unsigned  tpye, unsigned  my_int) = &test;
    p(1, 1, 1, 1, 17, 1);

     struct bs{
        unsigned a:1;
        unsigned b:3;
        unsigned c:4;
    } bit,*pbit;
    bit.a=1;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    bit.b=7;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    bit.c=15;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    printf("%d,%d,%d\n",bit.a,bit.b,bit.c);    /* 以整型量格式输出三个域的内容 */
    pbit=&bit;    /* 把位域变量 bit 的地址送给指针变量 pbit */
    pbit->a=0;    /* 用指针方式给位域 a 重新赋值，赋为 0 */
    pbit->b&=3;    /* 使用了复合的位运算符 "&="，相当于：pbit->b=pbit->b&3，位域 b 中原有值为 7，与 3 作按位与运算的结果为 3（111&011=011，十进制值为 3） */
    pbit->c|=1;    /* 使用了复合位运算符"|="，相当于：pbit->c=pbit->c|1，其结果为 15 */
    printf("%d,%d,%d\n",pbit->a,pbit->b,pbit->c);    /* 用指针方式输出了这三个域的值 */
    return 0;
}

int test(unsigned f1 ,unsigned f2 ,unsigned f3 ,unsigned f4 ,unsigned  tpye, unsigned  my_int)
{
    struct packed_struct
    {
        unsigned int f1 : 1;
        unsigned int f2 : 1;
        unsigned int : 6;  //空位域 表示 跳过这个字节的后6位，下一个变量直接使用第二个字节  1个字节包含8位 ,
                            // 一个字节不够位数存放另一个位域时，直接跳到下一字节
        unsigned int f3 : 1;
        unsigned int f4 : 1;
        unsigned int type : 5;
        unsigned int my_int : 9;
    } pack;
    pack.f1 = f1;
    pack.f2 = f2;
    pack.f3 = f3;
    pack.f4 = f4;
    pack.type = tpye;
    pack.my_int = my_int;
    printf("Memory ~ pack:%ld\n", sizeof(pack));
    printf("f1的值为:%d\n", pack.type);
    return 0;
}
