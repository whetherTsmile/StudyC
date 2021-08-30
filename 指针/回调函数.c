// //回调函数，函数指针作为某个函数的参数
// /*你到一个商店买东西，刚好你要的东西没有货，于是你在店员那里留下了你的电话，过了几天店里有货了，
// 店员就打了你的电话，然后你接到电话后就到店里去取了货。在这个例子里，你的电话号码就叫回调函数，
// 你把电话留给店员就叫登记回调函数，店里后来有货了叫做触发了回调关联的事件，店员给你打电话叫做调用回调函数，
// 你到店里去取货叫做响应回调事件。*/
#include<stdio.h>
#include<stdlib.h>
void populate_array(int *array,size_t arraySize,int (*getNextValue)(void))
// void populate_array(int *array,size_t arraySize,int getNextValue(void))
{
    for (size_t i = 0; i < arraySize; i++)
    {
        array[i] = getNextValue();//通过值传递值
        // *(array + i) = getNextValue();//通过地址传递值
    }
}

int getNextRandomValue(void){
    return rand();
}

int main(int argc, char const *argv[])
{
    int myarray[10];
    populate_array(myarray, 10, getNextRandomValue);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", myarray[i]);
    }

    return 0;
}
// #include<stdio.h>

// int Callback_1() // Callback Function 1
// {
//     printf("Hello, this is Callback_1 ");
//     return 0;
// }

// int Callback_2() // Callback Function 2
// {
//     printf("Hello, this is Callback_2 ");
//     return 0;
// }

// int Callback_3() // Callback Function 3
// {
//     printf("Hello, this is Callback_3 ");
//     return 0;
// }

// int Handle(int Callback())
// {
//     printf("Entering Handle Function. ");
//     Callback();
//     printf("Leaving Handle Function. ");
// }

// int main()
// {
//     printf("Entering Main Function. ");
//     Handle(Callback_1);
//     Handle(Callback_2);
//     Handle(Callback_3);
//     printf("Leaving Main Function. ");
//     return 0;
// }