// Function Table:
// Create a function table containing pointers to different functions. Use this table to invoke the appropriate function based on an input value.

#include <stdio.h>

enum functions
{
    ADD,
    SUB,
    MUL,
    DIV
};

struct cal
{
    enum functions func;
    int (*fp)(int, int);
};

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}

int main()
{
    struct cal fun1[4];

    fun1[ADD].func = ADD;
    fun1[ADD].fp = add;

    fun1[SUB].func = SUB;
    fun1[SUB].fp = sub;

    fun1[MUL].func = MUL;
    fun1[MUL].fp = mul;

    fun1[DIV].func = DIV;
    fun1[DIV].fp = div;

    int choose, a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Select one option 0.add\n 1.sub\n 2.mul\n 3.div\n");
    scanf("%d", &choose);

    if (choose >= 0 && choose <= 3)
    {
        int result = fun1[choose].fp(a, b);
        printf("%d", result);
        return 0;
    }
}
