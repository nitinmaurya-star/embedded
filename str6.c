#include<stdio.h>
#include<string.h>

int main()
{
    char str[10]="nitin";

    int len = strlen(str);
    int count =0;
    for(int i=0;i<len;i++)
    {
        count = count +1;
       // printf("total number of character:%d",count);
    }
    printf("total number of character:%d",count);
    return 0;
}
