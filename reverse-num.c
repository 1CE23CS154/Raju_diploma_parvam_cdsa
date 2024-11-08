#include<stdio.h>
int main(){
    int num,rev=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num>0){
        rev=rev*10+num%10;
        num=num/10;
    }
    printf("Reverse of a number: %d", rev);
}  
// % = remainder 256 % 10 = 6 
// / = quotient 256/10 = 25
// ex: 456
// Step1:
// 456 > 0 - T
// 0*10 + 456%10 = 0 + 6 : rev = 6
// 456/10 = 45
// 45 > 0 - T
6 * 10 + 45 % 10 = 60 + 5 = 65
45/10 = 4
4 > 0 - T
65 * 10 + 4%10 = 650 + 4 =654
4/10 = 0
// 0>0 - F