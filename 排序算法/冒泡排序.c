#include <stdio.h>
void bubble_sort(int arr[], int len)
{
    int i, j, temp;
    for (i = 0; i < len; i++)
    { //第几个数
        for (j = 0; j < len - 1; j++)
        { //对一个数进行大小比较
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    // printf("%ld\n", sizeof(arr));
    int len = (int)sizeof(arr) / sizeof(*arr);
    bubble_sort(arr, len);
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
