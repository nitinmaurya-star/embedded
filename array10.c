#include <stdio.h>
int main()
{
    int arr[10] = {2, 15, 4, 6, 1, 7, 19, 3, 17, 14};
    int len = sizeof(arr) / sizeof(arr[0]);
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("even number is:%d\n", even_count);
    printf("odd number is:%d", odd_count);
    return 0;
}
