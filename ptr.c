#include<stdio.h>
int main(){
    int a=10;
    int *ptr=&a;
    ptr=&a;
    printf("The value of a is %d\n",a);
    printf("The address of a is %u\n",&a);
    printf("The ptr is %u\n",ptr);
    printf("The value of ptr is %d\n",*ptr);
    printf("The value of ptr is %d\n",sizeof(ptr));
    return 0;
}