#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    int len = strlen(str);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
        {
            count++;
        }
    }
    printf("%d", count+1);
    return 0;
}
