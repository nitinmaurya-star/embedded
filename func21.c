#include <stdio.h>
//#include <stdlib.h>
// #include <time.h>
int readnumber(int num)
{
    do
    {
        printf("Enter the number:");
        scanf("%d",&num);
       if(num<0 || num > 10)
       {
        printf("Invalid number please! try again.\n");
       }
    } while (num<0 || num > 10);
    return num;
}
int main()
{
    // srand(time(NULL));
    int number;
    number = readnumber(number);
    printf("The number read is %d\n",number);
    return 0;
}

