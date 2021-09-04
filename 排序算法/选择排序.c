#include <stdio.h>
void swap();
void selection_sort(int a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int min = i;
        for (int j = i + 1; j < len; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        // if (min != i)
        // {
        //     int temp = a[min];
        //     a[min] = a[i];
        //     a[i] = temp;
        // }
        swap(&a[min], &a[i]);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char const *argv[])
{
    int a[] = {4, 5, 2, 131, 42, 23};
    int len = sizeof(a) / sizeof(*a);
    printf("长度:%d\n", len);
    selection_sort(a, len);

    for (int i = 0; i < len; i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
