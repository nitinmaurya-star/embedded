#include <stdio.h>
void hello()
{
    printf("Welcome, this program will ask you to solve 5 sums.");
    printf("\n");
}

int sum(int a, int b)
{
    int c;
    printf("\nEnter 2 the number< 100: ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("what is the sum of %d and %d?\n", a, b);

    printf("according to you, the sum of %d and %d equals %d. That is correct ", a, b, c);

    return c;
}
void goodboy()
{
    printf("Thanks for your cooperation\n");
}
int main()
{
    int n, m;
    hello();
    int i = 0;
    while (i < 5)
    {
        int c = sum(n, m);
        printf("%d\n", c);
        i++;
    }

    goodboy();

    return 0;
}