#include <stdio.h>
int readnumber(int lower_boundary, int upper_boundary)
{
    int num;

    do
    {
        printf("Enter the lower_boundary or upper_boundary:");
        scanf("%d%d", &lower_boundary, &upper_boundary);
        printf("Enter the number:");
        scanf("%d", &num);
        if (lower_boundary > num || num > upper_boundary)
        {
            printf("Invalid number please! enter the correct number.\n");
        }
    } while (lower_boundary > num || num > upper_boundary);
    return num;
}
int main()
{
    int upper, lower, number;
    number = readnumber(lower, upper);
    printf("The number read is %d\n", number);
    return 0;
}
