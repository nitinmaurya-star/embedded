#include<stdio.h>
#define size 5
void readarray(int arr[] ,int length)
{
      for(int i=1;i<=length ;i++)
      {
          printf("first list of arr: ");
          scanf("%d",&i);
      }
      
      
     
}


int main()
{
    int a[size];
    int b[size];
    readarray(a,size);
    readarray(b,size);
    return 0;
}