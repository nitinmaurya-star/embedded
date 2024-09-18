#include<stdio.h>

int add(int a,int b){
        return a+b;
}

int main(void){

int (*fp)(int,int) = add;
printf("address of func is: %x\n",add);
printf("address of func is: %x\n",fp);
printf("add is %d \n",fp(4,5));



return 0;
}