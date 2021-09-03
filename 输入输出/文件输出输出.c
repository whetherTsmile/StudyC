#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp = NULL;
    fp = fopen("/tmp/gaga.json", "r");
    char buff[255];
    fgets(buff, 255, (FILE*)fp);
    printf("%s\n", buff);
    fclose(fp);
    // printf("%d\n", a);
    printf("%s\n", __FILE__);
    return 0;
}
