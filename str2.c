#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Original string:");
    scanf("%s",&str);
    int len = strlen(str);
    printf("revrs of  string: ");
    // len != ('\0');
    for (int i = len - 1; i >= 0; i--)
    {
        // len != ('\0');
        printf("%c", str[i]);
    }
    return 0;
}