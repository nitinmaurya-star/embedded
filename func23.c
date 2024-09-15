#include <stdio.h>
double exponentiation(double base, int exponent)
{
    double result = 1.0;
    for (int i = 0; i < exponent;i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    double a, c;
    int b;
    printf("Enter the base:");
    scanf("%lf%*c", &a);
    printf("Enter the exponent:");
    scanf("%d%*c", &b);
    c = exponentiation(a, b);
    printf("%.2f", c);
    return 0;
}
