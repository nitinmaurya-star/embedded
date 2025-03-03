#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50];
    printf("Enter the string:");
    scanf("%s", str1);

    // scanf("%[^\n]", str1);      /////       consider the input after space ///

    int len = strlen(str1);

    for (int i = 0; i < len; i++)
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
            char result = str1[i] + 32;
            printf("%c", result);
            // printf("%c",str1[i]);
        }
        else if (str1[i] >= 'a' && str1[i] <= 'z')
        {
            // char result = str1[i]-32;
            printf("%c", str1[i]);
        }
    }

    return 0;
}
