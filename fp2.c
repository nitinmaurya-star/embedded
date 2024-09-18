#include<stdio.h>
int dobleit(int *a,int *b)
{
        return *a+*b;
}
int mul(int *a,int *b)
{
        return *a * *b;
}
int squareit(int *a)
{
        return (*a * *a);
}
int main()
{
        int a,b;
        printf("Enter the number:");
        scanf("%d %d",&a,&b);
        int (*fp[])(int*,int*)={&dobleit,&mul,&squareit};
        int choise;
        printf("Enter the choise:");
        scanf("%d",&choise);
        if(choise<3 && choise=2)
        {
                printf("%d",fp[choise](&a));

        }
        else
        {
                printf("%d",fp[choise](&a,&b));
        return 0;
}
}


~                                                        
