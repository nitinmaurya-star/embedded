#include <stdio.h>
int main()
{
    int arr[8] = {2, 3, 6, 5, 8, 5, 4, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < len - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                len--;
            }
        }
    }
    printf("Array after removing:\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}