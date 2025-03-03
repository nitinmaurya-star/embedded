#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = "nitin";
    int len = strlen(str);
    int isPalindrome = 1;

    printf("%s", str);

    printf("\n");

    for (int x = len - 1; x >= 0; x--)
    {
        printf("%c", str[x]);
    }

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }
    printf("\n");
    if (isPalindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is NOT a palindrome.\n");
    }

    return 0;
}