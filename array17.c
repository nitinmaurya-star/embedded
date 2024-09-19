#include <stdio.h>

int main()
{
    int n, i;
    int isAscending = 1;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            isAscending = 0;
            break;
        }
    }
    if (isAscending)
    {
        printf("The array is in ascending order.\n");
    }
    else
    {
        printf("The array is NOT in ascending order.\n");
    }

    return 0;
}
