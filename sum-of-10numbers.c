#include<stdio.h>
int main(){

    int i=0,j=0;
    while(i<10){
    printf("sum of ten numbers",i);
    i++;
    j=i+j;
    }
    printf("%d",j);
    return 0;
}