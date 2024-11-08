#include<stdio.h>
int main(){
    int num,sum=0,rev=0;
    printf("Enter a sum of digit: ");
    scanf("%d", &num);
    while(num>0){
        sum+=num%10;
        // sum=sum+num%10;
        num=num/10;
        // 789
        // sum=0 + 789%10=9
        // num = 78
        // sum = 9 + 78%10 = 9+8=17
        // num = 7
        // sum = 17 + 7%10  17+7=24
        // num = 0
        // 0>0 - F
    }
    printf("sum of digit: %d", sum);
    return 0;
}