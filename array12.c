#include <stdio.h>

int main()
{
    int n, i, max, second_max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
        else
        {
            if (arr[i] > second_max && arr[i] != max)
            {
                second_max = max;
            }
        }
    }

    printf("The largest element in the array is: %d\n", second_max);

    return 0;
}
