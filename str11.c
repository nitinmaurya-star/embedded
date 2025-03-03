#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter the string: ");
    scanf("%[^\n]s", str);

    int len = strlen(str);

    char temp = str[0];

    str[0] = str[len - 1];
    str[len - 1] = temp;

    printf("new string:%s", str);
    return 0;
}
