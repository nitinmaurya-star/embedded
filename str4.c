#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    printf("Enter the string: ");
    scanf("%s", str);

    int len = strlen(str);

    int vowel_count = 0;
    int constent_count = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel_count++;
           
        }
        else if (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            constent_count++;
        
        }
        
    }
    printf("vowel_count:%d\n", vowel_count);
    printf("constent_count:%d\n", constent_count);
    return 0;
}