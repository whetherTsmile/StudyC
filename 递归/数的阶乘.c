#include <stdio.h>
double factorial(unsigned int i);
int main(int argc, char const *argv[])
{
    /* code */
    int i = 15;
    printf("15的阶乘是:%f\n", factorial(i));
    // factorial(i);
    return 0;
}
double factorial (unsigned int i){
    if(i<=1){
        return 1;    //递归是从里到外，层层嵌套，首先计算 最里面的值，1*2*3*4*5.....*15
    }
    return i * factorial(i - 1);
}