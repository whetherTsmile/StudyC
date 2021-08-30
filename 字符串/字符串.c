#include <stdio.h>
#include <string.h>
char site1[14] = {'a', 'b', 'c', 'd', '0', '0', '\0'}; //  => char[] = "abcd00"
char site2[14] = "hafaspi";
char site3[14];
int main(int argc, char const *argv[])
{
    printf("输出:%s\n", site1);

    //strcpy  复制site到site3上
    strcpy(site3, site1);
    printf("strcpy复制：%s\n", site3);

    //strcat  把site2拼接到site3上
    strcat(site2, site1);
    printf("strcat拼接:%s\n", site2); //buffer overflow detecte 注意 字符串长度 是否大于等于定义数组长度
    int len = strlen(site2);          // 长度 strlen
    printf("strlen(site2):%d\n", len);

    //strcmp(s1,s2) 如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回小于 0；如果 s1>s2 则返回大于 0
    int a = strcmp(site2, site1);
    printf("%d\n", a); //暂时认定一直等于 ±7
    // printf("%d\n", a);
    if (a < 0)
    {
        printf("site2<site1 a=%d\n", a);
    }
    else if (a == 0)
    {
        printf("site2=site1 a=%d\n", a);
    }
    else
    {
        printf("site2>site1 a=%d\n", a);
    }

    //strchr(s1, ch),返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。
    char *p;
    p = strchr(site2, 'p');
    printf("从p开始 ：|%s|\n", p);
    printf("%p\n", &site2);
    printf("%p\n", *p);

    //strstr(s1, s2),返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置
    return 0;
}
