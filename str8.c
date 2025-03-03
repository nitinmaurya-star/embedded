#include <stdio.h>

int main() {
    char str1[50] = "NITIN";
    char str2[] = " MAURYA";
    
    int i, j;
    
    for (i = 0; str1[i] != '\0'; i++);


    for (j = 0; str2[j] != '\0'; j++) {
        str1[i] = str2[j];
        i++;
    }
    
    str1[i] = '\0'; 

    printf("Concatenated String: %s\n", str1);

    return 0;
}
