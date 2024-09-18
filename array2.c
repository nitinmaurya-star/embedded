#include <stdio.h>
#define size 100
int main()
{
    int arr[size];
    printf("Enter the  number of arr_element is %d ",size);
    for (int i = 0; i <= size; i++)
    {

        printf("element of arr= %d  \n", i);
    }
    printf("\n");
    for (int i = size; i >= 0; i--)
    {
        printf("reverse element of arr= %d  \n", i);
    }
    return 0;
}
