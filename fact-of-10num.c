#include<stdio.h>
int main(){

    int i,sum=1;
    for(i=1;i<=10;i++){
        sum*=i;
    }
    printf("%d",sum);
    return 0;
}