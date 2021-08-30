#include<stdio.h>

int main(int argc, char const *argv[])
{
    enum Day {
        Saturday,
        Sunday,
        Monday,
        Tuesday,
        Wedesday,
        Fourthday,
        Friday
    };
    int a = 5;
    enum Day weekend;
    weekend = (enum Day) a;
    printf("%d\n",weekend);
    for (weekend = Saturday;weekend<=Friday;weekend++)
    {
        printf("%d\n",weekend);
    }
    
    return 0;
}