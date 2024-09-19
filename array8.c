#include <stdio.h>
#define size 5

int main()
{
    int arr[size];
    for (int i = 1; i <= size; i++)
    {
        printf("original elenents of arr=%d\n", i);
    }
    printf("\n");
    for (int j = size; j > 0; j--)
    {
        printf("reverse elemnts of arr=%d\n", j);
    }
    return 0;
}