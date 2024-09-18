#include <stdio.h>

int calculateFactor(int day, int month, int year)
{
    int factor;

    if (month == 1 || month == 2)
    {
        factor = 365 * year + day + 31 * (month - 1) + ((year - 1) / 4) - ((year - 1) / 100) + ((year - 1) / 400);
    }
    else
    {
        factor = 365 * year + day + 31 * (month - 1) - ((4 * month + 23) / 10) + (year / 4) - (year / 100) + (year / 400);
    }

    return factor;
}

int main()
{
    int day1, month1, year1, day2, month2, year2;

    printf("Enter first date (day month year): ");
    scanf("%d %d %d", &day1, &month1, &year1);

    printf("Enter second date (day month year): ");
    scanf("%d %d %d", &day2, &month2, &year2);

    int factor1 = calculateFactor(day1, month1, year1);
    int factor2 = calculateFactor(day2, month2, year2);

    int numberOfDays = factor2 - factor1;

    printf("Number of days between the two dates: %d\n", numberOfDays);

    return 0;
}
