#include <stdio.h>
#define SIZE 5
void readnumbers(int x[], int length)
{
    int i;
    printf("Enter %d integers: \n", length);
    for (i = 0; i < length; i++)
    {
        printf("Enter number %3d: ", i + 1);
        scanf("%d%*c", &x[i]);
    }
}
void printnumbers(int r[], int length)
{
    int i;
    printf("In reverse order: \n");
    for (i = length - 1; i >= 0; i--)
    {
        printf("%4d", r[i]);
    }
}


int main(void)
{
    int numbers[SIZE];
    readnumbers(numbers, SIZE);
    printnumbers(numbers, SIZE);
    return 0;
}
