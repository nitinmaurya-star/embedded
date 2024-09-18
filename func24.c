#include <stdio.h>
int draw_bar(int score, char c)
{
    int i;
    for (i = 0; i <= score; i++)
    {
        printf("%c ", c);
    }
}

int main()
{
    int n;
    int i = 1;
    printf("Enter the score:");
    scanf("%d", &n);
    /* printf("Enter the score:");
        scanf("%d",&n);
        printf("Enter the score:");
        scanf("%d",&n);
    */
    while (i < 4)
    {

        printf("\nEnter the number of score: ");
        scanf("%d", &n);

        char c = '=';

        draw_bar(n, c);
        i++;
    }
    return 0;
}