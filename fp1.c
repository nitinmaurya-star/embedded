#include <stdio.h>
int add(int *a, int *b)
{
    return (*a + *b);
}
int sub(int *a, int *b)
{
    return (*a - *b);
}
int mul(int *a, int *b)
{
    return (*a * *b);
}
int division(int *a , int *b)
{
    return (*a / *b);
}
int main()
{
    int a, b;
    printf("Enter the 2 value:");
    scanf("%d %d", &a, &b);
    int (*fp[])(int *a, int *b) = {&add, &sub,&mul,&division};
    int num;
    printf("Enter the num:");
    scanf("%d", &num);
    if (num < 4)
    {
        printf("%d", fp[num](&a, &b));
    }
    /*else
    {
        // printf("%d",fp[num](&a));
    }*/
    return 0;
}