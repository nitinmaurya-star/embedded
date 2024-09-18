#include <stdio.h>

// Function to determine if a year is a leap year
int isLeapYear(int year)
{
    if (year % 400 == 0)
    {
        return 1; // Leap year
    }
    else if (year % 100 == 0)
    {
        return 0; // Not a leap year
    }
    else if (year % 4 == 0)
    {
        return 1; // Leap year
    }
    else
    {
        return 0; // Not a leap year
    }
}

// Function to calculate the number of days in a given month of a given year
int numberOfDays(int month, int year)
{
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31; // Months with 31 days
    case 4:
    case 6:
    case 9:
    case 11:
        return 30; // Months with 30 days
    case 2:
        // Check if it's a leap year
        if (isLeapYear(year))
        {
            return 29; // February has 29 days in a leap year
        }
        else
        {
            return 28; // February has 28 days in a non-leap year
        }
    default:
        return -1; // Invalid month
    }
}

int main(void)
{
    int month, year;

    // Read input from user
    printf("Enter a month (1-12): ");
    scanf("%d", &month);

    printf("Enter a year: ");
    scanf("%d", &year);

    // Get the number of days in the given month and year
    int days = numberOfDays(month, year);

    // Check if the month is valid
    if (days != -1)
    {
        printf("Month %d of year %d has %d days\n", month, year, days);
    }
    else
    {
        printf("Invalid month entered.\n");
    }

    return 0;
}
